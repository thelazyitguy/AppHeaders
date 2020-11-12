//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IAInterfaceAllocBlocker-Protocol.h>
#import <Funny/IAInterfaceContentLoader-Protocol.h>
#import <Funny/IAMRAIDViewControllerLoadDelegate-Protocol.h>

@class IAMRAIDContentController, IAMRAIDViewController, IAUnitController, NSString;

@interface IAMRAIDContentLoader : NSObject <IAMRAIDViewControllerLoadDelegate, IAInterfaceAllocBlocker, IAInterfaceContentLoader>
{
    _Bool _enabled;
    CDUnknownBlockType _completion;
    IAMRAIDViewController *_viewController;
    IAMRAIDContentController *_contentController;
    IAUnitController *_unitController;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (_Bool)isContentSupportedForContentType:(long long)arg1;
+ (id)loader;
- (void).cxx_destruct;
@property(retain, nonatomic) IAUnitController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) IAMRAIDContentController *contentController; // @synthesize contentController=_contentController;
@property(retain, nonatomic) IAMRAIDViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (void)sendReadyToPlayRewardedEvents;
- (void)MRAIDViewController:(id)arg1 failedToLoadWithError:(id)arg2;
- (void)MRAIDViewController:(id)arg1 readyToShowView:(id)arg2;
- (void)cancel;
- (void)loadContentFromModel:(id)arg1 toUnitController:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
