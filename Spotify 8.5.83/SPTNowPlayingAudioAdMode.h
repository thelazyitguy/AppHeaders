//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingMode-Protocol.h"

@class NSString, SPTAdNowPlayingAuxiliaryActionsHandler, SPTAdNowPlayingManager, SPTAdPlayerObservable, SPTAdsFeatureProperties, SPTAdsRemindersManager, SPTTheme, UIView, UIViewController;
@protocol SPTAdsBaseCosmosBridge, SPTAdsManager, SPTEventSender, SPTLinkDispatcher, SPTNowPlayingContainedViewController, SPTNowPlayingModeLayoutDelegate, SPTSnackbarConditionalPresenter;

@interface SPTNowPlayingAudioAdMode : NSObject <SPTNowPlayingMode>
{
    id <SPTNowPlayingModeLayoutDelegate> _layoutDelegate;
    SPTAdNowPlayingManager *_nowPlayingManager;
    id <SPTAdsManager> _adsManager;
    SPTAdPlayerObservable *_playerObserver;
    SPTAdNowPlayingAuxiliaryActionsHandler *_actionsHandler;
    SPTAdsFeatureProperties *_featureProperties;
    UIView *_animationView;
    SPTTheme *_theme;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTAdsRemindersManager *_reminderManager;
    UIViewController<SPTNowPlayingContainedViewController> *_navigationBarViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_informationViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_durationViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_headViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_footerViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_queueViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_contentDecorationViewController;
    id <SPTEventSender> _eventSender;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *contentDecorationViewController; // @synthesize contentDecorationViewController=_contentDecorationViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *queueViewController; // @synthesize queueViewController=_queueViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *headViewController; // @synthesize headViewController=_headViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *durationViewController; // @synthesize durationViewController=_durationViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *informationViewController; // @synthesize informationViewController=_informationViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *navigationBarViewController; // @synthesize navigationBarViewController=_navigationBarViewController;
@property(retain, nonatomic) SPTAdsRemindersManager *reminderManager; // @synthesize reminderManager=_reminderManager;
@property(retain, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(nonatomic) __weak id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) SPTAdsFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) SPTAdNowPlayingAuxiliaryActionsHandler *actionsHandler; // @synthesize actionsHandler=_actionsHandler;
@property(retain, nonatomic) SPTAdPlayerObservable *playerObserver; // @synthesize playerObserver=_playerObserver;
@property(retain, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) SPTAdNowPlayingManager *nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(nonatomic) __weak id <SPTNowPlayingModeLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (_Bool)requiresScrollDisabled;
- (id)queueHeadUnitViewController;
- (id)footerUnitViewController;
- (id)headUnitViewController;
- (id)durationUnitViewController;
- (id)informationUnitViewController;
- (id)navigationBarUnitViewController;
- (id)identifier;
- (id)initWithNowPlayingManager:(id)arg1 adManager:(id)arg2 playerObserver:(id)arg3 actionsHandler:(id)arg4 animationView:(id)arg5 theme:(id)arg6 linkDispatcher:(id)arg7 cosmosBridge:(id)arg8 featureProperties:(id)arg9 snackbarPresenter:(id)arg10 reminderManager:(id)arg11 eventSender:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

