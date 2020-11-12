//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class ASMExternalLauncherParameters, ASMObservable, ASMResourceKey, ASMViewBlueprint, UIView;

@protocol ASMNavigationModel <NSObject>
@property(readonly, nonatomic) ASMObservable *launchExternalExperienceAction;
@property(readonly, nonatomic) ASMObservable *showAccountSwitcherAction;
@property(readonly, nonatomic) ASMObservable *closeGoogleAccountAction;
@property(readonly, nonatomic) ASMObservable *currentBlueprint;
- (ASMViewBlueprint *)blueprintForResourceKey:(ASMResourceKey *)arg1;
- (void)startAccountSwitchingFlowWithSourceView:(UIView *)arg1 type:(unsigned long long)arg2;
- (void)closeGoogleAccount;
- (void)cancelPendingNavigation;
- (void)didViewScreenWithKey:(ASMResourceKey *)arg1;
- (void)navigateToScreenWithKey:(ASMResourceKey *)arg1 withNavigationOrigin:(unsigned long long)arg2 parameters:(ASMExternalLauncherParameters *)arg3;
- (void)navigateToScreenWithKey:(ASMResourceKey *)arg1 withNavigationOrigin:(unsigned long long)arg2;
@end
