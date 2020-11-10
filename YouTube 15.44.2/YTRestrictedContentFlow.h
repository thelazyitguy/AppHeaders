//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOAlertViewDelegate-Protocol.h>
#import <Module_Framework/YTKoreanAgeVerificationViewControllerDelegate-Protocol.h>

@class GIMMe, NSString, YTAlertView, YTIPlayabilityStatus, YTKoreanAgeVerificationViewController, YTPlayerResponse;
@protocol YTResponder, YTRestrictedContentFlowDelegate;

@interface YTRestrictedContentFlow : NSObject <GOOAlertViewDelegate, YTKoreanAgeVerificationViewControllerDelegate>
{
    id <YTResponder> _parentResponder;
    NSString *_videoID;
    YTAlertView *_confirmAlert;
    YTAlertView *_loginAlert;
    _Bool _isForDownload;
    YTKoreanAgeVerificationViewController *_kavViewController;
    _Bool _contentCheckOK;
    GIMMe *_gimme;
    YTPlayerResponse *_playerResponse;
    id <YTRestrictedContentFlowDelegate> _delegate;
}

+ (_Bool)canHandlePlayabilityStatus:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTRestrictedContentFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool contentCheckOK; // @synthesize contentCheckOK=_contentCheckOK;
@property(retain, nonatomic) YTPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTIPlayabilityStatus *playabilityStatus;
- (void)login;
- (void)confirm;
- (void)cancel;
- (void)showKoreanAgeVerificationFlow;
- (void)showLoginAlert;
- (void)showConfirmAlert;
- (void)refreshAndVerifyContentWithPlayerRequestParams:(id)arg1;
- (void)alertViewDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)koreanAgeVerificationFlowDidCancel;
- (void)koreanAgeVerificationFlowDidComplete;
- (void)resolvePlayability;
- (void)dealloc;
- (id)initWithVideoID:(id)arg1 playerResponse:(id)arg2 isForDownload:(_Bool)arg3 parentResponder:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

