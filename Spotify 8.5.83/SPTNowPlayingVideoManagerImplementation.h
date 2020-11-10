//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectObserver-Protocol.h"
#import "SPTNowPlayingDeviceOrientationManagerObserver-Protocol.h"
#import "SPTNowPlayingVideoManager-Protocol.h"
#import "SPTNowPlayingVideoViewControllerDelegate-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SPTNowPlayingDeviceOrientationManager, SPTNowPlayingVideoViewController, SPTPlayerState;
@protocol SPTAdsBaseCosmosBridge, SPTGaiaConnectAPI, SPTMetaViewController, SPTNowPlayingFullscreenVideoRegistry, SPTPlayer;

@interface SPTNowPlayingVideoManagerImplementation : NSObject <SPTPlayerObserver, SPTNowPlayingDeviceOrientationManagerObserver, UIViewControllerTransitioningDelegate, SPTGaiaConnectObserver, SPTNowPlayingVideoViewControllerDelegate, SPTNowPlayingVideoManager>
{
    _Bool _fullscreenVideoDismissalProhibited;
    _Bool _wantsFullscreenVideoDismissal;
    _Bool _fullscreenVideoPresented;
    id <SPTNowPlayingFullscreenVideoRegistry> _fullscreenRegistry;
    id <SPTPlayer> _player;
    SPTNowPlayingVideoViewController *_videoViewController;
    id <SPTMetaViewController> _metaViewController;
    SPTNowPlayingDeviceOrientationManager *_deviceOrientationManager;
    SPTPlayerState *_lastPlayerState;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTGaiaConnectAPI> _connectManager;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isFullscreenVideoPresented) _Bool fullscreenVideoPresented; // @synthesize fullscreenVideoPresented=_fullscreenVideoPresented;
@property(nonatomic) _Bool wantsFullscreenVideoDismissal; // @synthesize wantsFullscreenVideoDismissal=_wantsFullscreenVideoDismissal;
@property(nonatomic) _Bool fullscreenVideoDismissalProhibited; // @synthesize fullscreenVideoDismissalProhibited=_fullscreenVideoDismissalProhibited;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(readonly, nonatomic) SPTNowPlayingDeviceOrientationManager *deviceOrientationManager; // @synthesize deviceOrientationManager=_deviceOrientationManager;
@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(readonly, nonatomic) SPTNowPlayingVideoViewController *videoViewController; // @synthesize videoViewController=_videoViewController;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTNowPlayingFullscreenVideoRegistry> fullscreenRegistry; // @synthesize fullscreenRegistry=_fullscreenRegistry;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)presentAnimated:(_Bool)arg1;
- (void)dismissAnimated:(_Bool)arg1;
@property(readonly, nonatomic, getter=isFullscreenViewControllerPresented) _Bool fullscreenViewControllerPresented;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)videoViewControllerDidDisappear:(id)arg1;
- (void)deviceOrientationManagerDidChangeInterfaceOrientation:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)updateWithInterfaceOrientation:(long long)arg1;
- (id)rootViewControllerForPresentation;
- (void)dismissFullscreenVideo:(_Bool)arg1;
- (void)presentFullscreenVideo:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 videoViewController:(id)arg2 metaViewController:(id)arg3 deviceOrientationManager:(id)arg4 connectManager:(id)arg5 cosmosBridge:(id)arg6 inAppMessagePresentationMonitor:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
