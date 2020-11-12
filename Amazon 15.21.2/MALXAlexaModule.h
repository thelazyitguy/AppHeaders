//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIAppEventsListenerProtocol-Protocol.h"
#import "AMIModule-Protocol.h"
#import "AWEAvailabilityProvider-Protocol.h"
#import "AWEOnboardingManager-Protocol.h"
#import "AWUserSubscriber-Protocol.h"

@class AMIModuleContext, NSLocale, NSString, NSURL;
@protocol AMIAppNavigationService, AMIIPhoneAppManagerBridge, AMILocalization, AMILocationService, MALXAudioPlayerUIProviderProtocol;

@interface MALXAlexaModule : NSObject <AMIModule, AMIAppEventsListenerProtocol, AWEAvailabilityProvider, AWUserSubscriber, AWEOnboardingManager>
{
    id <AMIAppNavigationService> _alexaAppNavigationService;
    id <AMIIPhoneAppManagerBridge> _alexaPhoneAppManagerBridge;
    id <AMILocationService> _alexaLocationService;
    id <MALXAudioPlayerUIProviderProtocol> _alexaAudioPlayerUIProvider;
    NSString *_currentMarketplaceObfuscatedId;
    NSString *_currentMarketplaceCountryCode;
    NSLocale *_currentLocale;
    NSURL *_currentMarketplaceSecureWebViewUrl;
    AMIModuleContext *_context;
    id <AMILocalization> _localization;
}

+ (id)alexaBundle;
+ (id)sharedModule;
@property(retain, nonatomic) id <AMILocalization> localization; // @synthesize localization=_localization;
@property(retain, nonatomic) AMIModuleContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSURL *currentMarketplaceSecureWebViewUrl; // @synthesize currentMarketplaceSecureWebViewUrl=_currentMarketplaceSecureWebViewUrl;
@property(retain, nonatomic) NSLocale *currentLocale; // @synthesize currentLocale=_currentLocale;
@property(retain, nonatomic) NSString *currentMarketplaceCountryCode; // @synthesize currentMarketplaceCountryCode=_currentMarketplaceCountryCode;
@property(retain, nonatomic) NSString *currentMarketplaceObfuscatedId; // @synthesize currentMarketplaceObfuscatedId=_currentMarketplaceObfuscatedId;
@property(retain, nonatomic) id <MALXAudioPlayerUIProviderProtocol> alexaAudioPlayerUIProvider; // @synthesize alexaAudioPlayerUIProvider=_alexaAudioPlayerUIProvider;
@property(retain, nonatomic) id <AMILocationService> alexaLocationService; // @synthesize alexaLocationService=_alexaLocationService;
@property(retain, nonatomic) id <AMIIPhoneAppManagerBridge> alexaPhoneAppManagerBridge; // @synthesize alexaPhoneAppManagerBridge=_alexaPhoneAppManagerBridge;
@property(retain, nonatomic) id <AMIAppNavigationService> alexaAppNavigationService; // @synthesize alexaAppNavigationService=_alexaAppNavigationService;
- (void).cxx_destruct;
- (void)stashSettings;
- (void)initializeAlexaSettingsProviders;
- (void)onPlayStateChangeNotificationChangeToFinished:(id)arg1;
- (void)onPlayStateChangeNotificationChangeToPlaying:(id)arg1;
- (void)registerSpeechSynthesizerPlaybackObservers;
- (void)didReceiveLoginCancellationForUser:(id)arg1;
- (void)didReceiveLogoutConfirmationForUser:(id)arg1;
- (void)didReceiveWillLogoutConfirmationForUser:(id)arg1;
- (void)didReceiveLoginConfirmationForUser:(id)arg1;
- (void)enableAlexa:(CDUnknownBlockType)arg1;
- (_Bool)isEnabled;
- (_Bool)isAvailable;
- (void)appDidFinishStartup;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
