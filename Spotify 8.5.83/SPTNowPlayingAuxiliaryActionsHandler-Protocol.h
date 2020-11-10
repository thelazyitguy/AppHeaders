//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, UIView, UIViewController;
@protocol SPTNowPlayingAuxiliaryActionsHandlerObserver;

@protocol SPTNowPlayingAuxiliaryActionsHandler <NSObject>
- (void)willShowHeartButton:(UIButton *)arg1;
- (_Bool)isSleepTimerSet;
- (void)presentSleepTimerMenuFromView:(UIButton *)arg1 inViewController:(UIViewController *)arg2;
- (void)goToNowPlayingView:(UIButton *)arg1;
- (void)goToQueue:(UIButton *)arg1;
- (void)showEntityPage:(UIButton *)arg1;
- (void)presentContextMenuInViewController:(UIViewController *)arg1 sender:(UIButton *)arg2;
- (void)minimizePlayingView:(UIButton *)arg1;
- (void)presentShareMenu:(UIButton *)arg1;
- (void)presentConnectDevicePicker:(id)arg1;
- (void)presentSpeedControlMenuFromView:(UIView *)arg1 inViewController:(UIViewController *)arg2;
- (void)toggleTrackBanStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2 withConfirmation:(_Bool)arg3;
- (void)toggleTrackBanStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2;
- (void)toggleBanStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2;
- (void)toggleCollectionStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2 withConfirmation:(_Bool)arg3;
- (void)toggleCollectionStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2;
- (void)removeObserver:(id <SPTNowPlayingAuxiliaryActionsHandlerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingAuxiliaryActionsHandlerObserver>)arg1;
@property(nonatomic, readonly) _Bool isHeartActionAllowed;
@property(nonatomic, readonly) _Bool isBanActionAllowed;
@property(nonatomic, readonly) _Bool isCurrentTrackInCollection;
@property(nonatomic, readonly) _Bool isCurrentTrackBanned;
@end

