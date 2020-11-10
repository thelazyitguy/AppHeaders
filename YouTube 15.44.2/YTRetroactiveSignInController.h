//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAccountsListResponseDataDelegate-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSString, YTAccountsListResponseData, YTGoogleAccount, YTRetroactiveSignInViewController;

@interface YTRetroactiveSignInController : NSObject <YTAccountsListResponseDataDelegate, YTUserChangedObserver>
{
    YTRetroactiveSignInViewController *_retroactiveSignInViewController;
    YTGoogleAccount *_lastDeviceGoogleAccount;
    YTAccountsListResponseData *_accountsListResponseData;
    _Bool _setForceDisabled;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool setForceDisabled; // @synthesize setForceDisabled=_setForceDisabled;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)presentSigninPromptWithAccountItem:(id)arg1;
- (void)updateUserDefaultsForPrompt;
- (void)fetchAndUpdateAccount;
- (_Bool)isRetroactiveSignInCandidate;
- (_Bool)shouldShowRetroactiveSignIn;
- (void)reset;
- (void)userDidChange;
- (void)accountStatusDidChangeForGoogleAccount:(id)arg1 previousStatus:(unsigned long long)arg2 newStatus:(unsigned long long)arg3;
- (void)showRetroactiveSignInIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

