//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthLegacySessionObserver-Protocol.h"
#import "SPTIncognitoModeHandlerObserver-Protocol.h"

@class NSString, SPCore, SPTApplicationStateTracker, SPTAudioVolumeControl, SPTAuthLegacySession, SPTEntityService, SPTIncognitoModeHandler, SPTLocalPlaybackView, SPTLoggerImplementation, SPTOfflineManager, SPTPlayerMftCanPlayChecker, SPTRouterFactory, SPTSocialManager, SPTUserFactory;
@protocol SPTAsyncScheduler, SPTResolver;

@interface SPTCoreAuthenticatedScope : NSObject <SPTIncognitoModeHandlerObserver, SPTAuthLegacySessionObserver>
{
    struct unique_ptr<spotify::client_features::ClientFeatureStack, std::__1::default_delete<spotify::client_features::ClientFeatureStack>> _clientFeatureStack;
    id <SPTResolver> _cosmosRouter;
    SPTApplicationStateTracker *_applicationStateTracker;
    SPTLoggerImplementation *_logger;
    SPTEntityService *_entityService;
    SPTAudioVolumeControl *_audioVolumeControl;
    SPTLocalPlaybackView *_localPlaybackView;
    SPTPlayerMftCanPlayChecker *_mftCanPlayChecker;
    SPTSocialManager *_socialManager;
    SPTUserFactory *_userFactory;
    SPTOfflineManager *_offlineManager;
    SPTIncognitoModeHandler *_incognitoModeHandler;
    SPCore *_core;
    SPTAuthLegacySession *_session;
    id <SPTAsyncScheduler> _scheduler;
    SPTRouterFactory *_routerFactory;
}

+ (id)authenticatedScopeWithConfiguration:(id)arg1 core:(id)arg2 connectivityApplicationScope:(id)arg3 connectivityManager:(id)arg4 session:(id)arg5 connectivityAuthenticatedScope:(id)arg6 coreCreateOptions:(id)arg7 prefs:(id)arg8 scheduler:(id)arg9;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTRouterFactory *routerFactory; // @synthesize routerFactory=_routerFactory;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) __weak SPTAuthLegacySession *session; // @synthesize session=_session;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) SPTIncognitoModeHandler *incognitoModeHandler; // @synthesize incognitoModeHandler=_incognitoModeHandler;
@property(retain, nonatomic) SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) SPTUserFactory *userFactory; // @synthesize userFactory=_userFactory;
@property(retain, nonatomic) SPTSocialManager *socialManager; // @synthesize socialManager=_socialManager;
@property(retain, nonatomic) SPTPlayerMftCanPlayChecker *mftCanPlayChecker; // @synthesize mftCanPlayChecker=_mftCanPlayChecker;
@property(retain, nonatomic) SPTLocalPlaybackView *localPlaybackView; // @synthesize localPlaybackView=_localPlaybackView;
@property(retain, nonatomic) SPTAudioVolumeControl *audioVolumeControl; // @synthesize audioVolumeControl=_audioVolumeControl;
@property(retain, nonatomic) SPTEntityService *entityService; // @synthesize entityService=_entityService;
@property(retain, nonatomic) SPTLoggerImplementation *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTApplicationStateTracker *applicationStateTracker; // @synthesize applicationStateTracker=_applicationStateTracker;
@property(retain, nonatomic) id <SPTResolver> cosmosRouter; // @synthesize cosmosRouter=_cosmosRouter;
- (void)incognitoModeHandler:(id)arg1 incognitoModeChangedByTimeout:(_Bool)arg2;
- (void)sessionLoginModeChanged:(id)arg1;
@property(readonly, nonatomic) const struct ClientFeatureStack *clientFeatureStack;
- (void)updateFromSessionState:(id)arg1;
- (void)prepareForShutdown;
- (void)flushCaches;
- (void)invalidate;
- (id)initWithConfiguration:(id)arg1 core:(struct Core *)arg2 connectivityApplicationScope:(id)arg3 connectivityManager:(id)arg4 session:(id)arg5 connectivityAuthenticatedScope:(id)arg6 prefs:(id)arg7 objcCore:(id)arg8 objcSession:(id)arg9 coreCreateOptions:(id)arg10 coreScheduler:(struct TimerManager *)arg11 scheduler:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
