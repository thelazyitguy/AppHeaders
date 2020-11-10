//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTFirstTimeSignInViewControllerDelegate-Protocol.h>

@class GIMMe, NSString, YTFirstTimeSignInStateController, YTFirstTimeSignInViewController, YTGaiaIdentityService, YTIdentityTransaction, YTInlineSignInController;
@protocol YTResponder;

@interface YTFirstTimeSignInController : NSObject <YTFirstTimeSignInViewControllerDelegate>
{
    YTInlineSignInController *_inlineSignInController;
    YTGaiaIdentityService *_gaiaIdentityService;
    id <YTResponder> _parentResponder;
    YTFirstTimeSignInStateController *_stateController;
    YTFirstTimeSignInViewController *_firstTimeSignInViewController;
    _Bool _processingTap;
    YTIdentityTransaction *_transaction;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _cancelBlock;
    _Bool _isPendingFrictionlessSignInRequest;
    GIMMe *_gimme;
}

+ (long long)frictionlessSignInStatus;
+ (void)setFrictionlessSignInStatus:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)dismissWithBlock:(CDUnknownBlockType)arg1;
- (void)presentFirstTimeSignInViewController;
- (void)launchViewController;
- (void)setFutureIdentityForGoogleAccount:(id)arg1 accountItem:(id)arg2;
- (void)accountStatusDidChange:(id)arg1 status:(unsigned long long)arg2;
- (void)didSelectContinueAsGuest;
- (void)showAccountSwitcher;
- (void)didSelectUseOtherAccount;
- (void)didSelectAccount:(id)arg1 accountItem:(id)arg2;
- (void)launchSignInWithTransaction:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

