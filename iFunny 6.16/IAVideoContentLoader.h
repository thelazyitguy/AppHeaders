//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IAInterfaceAllocBlocker-Protocol.h>
#import <Funny/IAInterfaceContentLoader-Protocol.h>
#import <Funny/IAVPAIDControllerLoadDelegate-Protocol.h>
#import <Funny/IAVideoControllerLoadDelegate-Protocol.h>

@class IAAdModel, IAUnitController, IAVPAIDController, IAVideoConfigModel, IAVideoContentController, IAVideoController, NSString;

@interface IAVideoContentLoader : NSObject <IAVideoControllerLoadDelegate, IAVPAIDControllerLoadDelegate, IAInterfaceAllocBlocker, IAInterfaceContentLoader>
{
    _Bool _enabled;
    _Bool _isVPAIDSupported;
    _Bool _isUnderFairBid;
    CDUnknownBlockType _completion;
    long long _currentMediaFileIndex;
    IAVideoController *_viewController;
    IAVPAIDController *_VPAIDController;
    IAVideoContentController *_contentController;
    IAUnitController *_unitController;
    IAAdModel *_model;
    IAVideoConfigModel *_videoConfigModel;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (_Bool)isContentSupportedForContentType:(long long)arg1;
+ (id)loader;
- (void).cxx_destruct;
@property(nonatomic) _Bool isUnderFairBid; // @synthesize isUnderFairBid=_isUnderFairBid;
@property(nonatomic) _Bool isVPAIDSupported; // @synthesize isVPAIDSupported=_isVPAIDSupported;
@property(retain, nonatomic) IAVideoConfigModel *videoConfigModel; // @synthesize videoConfigModel=_videoConfigModel;
@property(retain, nonatomic) IAAdModel *model; // @synthesize model=_model;
@property(retain, nonatomic) IAUnitController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) IAVideoContentController *contentController; // @synthesize contentController=_contentController;
@property(retain, nonatomic) IAVPAIDController *VPAIDController; // @synthesize VPAIDController=_VPAIDController;
@property(retain, nonatomic) IAVideoController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long currentMediaFileIndex; // @synthesize currentMediaFileIndex=_currentMediaFileIndex;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (void)VPAIDController:(id)arg1 failedToLoadHTML:(id)arg2 error:(id)arg3;
- (void)VPAIDController:(id)arg1 loadedHTML:(id)arg2;
- (void)videoController:(id)arg1 failedToPlayURL:(id)arg2 error:(id)arg3;
- (void)videoController:(id)arg1 readyToPlayURL:(id)arg2;
- (long long)videoInterfaceOrientationFromVideoModel:(id)arg1;
- (void)sendVideoReadyToPlayEvent;
- (void)treatFailureWithError:(id)arg1;
- (void)initNewController;
- (void)initVPAIDController;
- (id)htmlForVPAIDFromVASTModel:(id)arg1;
- (void)initVideoController;
- (void)loadVAST20XMLFromModel:(id)arg1;
- (_Bool)evaluateOnceIsVPAIDSupported;
- (void)cancel;
- (void)loadContentFromModel:(id)arg1 toUnitController:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
