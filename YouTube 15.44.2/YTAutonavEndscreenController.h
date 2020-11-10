//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAutonavCountdownObserver-Protocol.h>
#import <Module_Framework/YTAutonavEndscreenViewDelegate-Protocol.h>
#import <Module_Framework/YTAutonavPauseControllerDelegate-Protocol.h>
#import <Module_Framework/YTPlayerHeartbeatResponseHandlerProtocol-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTUpdatedMetadataServiceObserver-Protocol.h>

@class GIMMe, NSString, UIView, YTAutonavBackgroundView, YTICommand, YTIPlayerOverlayAutoplayRenderer, YTImageService, YTLastActionController;
@protocol YTAudioSession, YTAutonavControllerProtocol, YTAutonavEndscreenControllerDelegate, YTAutonavEndscreenViewProtocol, YTPlayerViewControllerConfig, YTReachabilityController, YTResponder, YTSingleVideoObservable;

@interface YTAutonavEndscreenController : NSObject <YTAutonavPauseControllerDelegate, YTAutonavCountdownObserver, YTAutonavEndscreenViewDelegate, YTResponder, YTPlayerHeartbeatResponseHandlerProtocol, YTUpdatedMetadataServiceObserver>
{
    _Bool _imageLoaded;
    unsigned long long _imageRequestID;
    YTImageService *_imageService;
    id <YTPlayerViewControllerConfig> _config;
    YTLastActionController *_lastActionController;
    id <YTReachabilityController> _reachabilityController;
    id <YTAudioSession> _audioSession;
    _Bool _endscreenActivated;
    YTICommand *_heartbeatEndpointAtStreamEnd;
    id <YTSingleVideoObservable> _contentVideo;
    int _playerViewLayout;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTAutonavBackgroundView *_autonavBackgroundView;
    UIView<YTAutonavEndscreenViewProtocol> *_autonavEndscreenView;
    double _mediaTime;
    id <YTAutonavEndscreenControllerDelegate> _endscreenDelegate;
    YTIPlayerOverlayAutoplayRenderer *_autonavRenderer;
    id <YTAutonavControllerProtocol> _autonavController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTAutonavControllerProtocol> autonavController; // @synthesize autonavController=_autonavController;
@property(nonatomic) int playerViewLayout; // @synthesize playerViewLayout=_playerViewLayout;
@property(retain, nonatomic) YTIPlayerOverlayAutoplayRenderer *autonavRenderer; // @synthesize autonavRenderer=_autonavRenderer;
@property(nonatomic) __weak id <YTAutonavEndscreenControllerDelegate> endscreenDelegate; // @synthesize endscreenDelegate=_endscreenDelegate;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(retain, nonatomic) UIView<YTAutonavEndscreenViewProtocol> *autonavEndscreenView; // @synthesize autonavEndscreenView=_autonavEndscreenView;
@property(retain, nonatomic) YTAutonavBackgroundView *autonavBackgroundView; // @synthesize autonavBackgroundView=_autonavBackgroundView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)didUpdateAutoplayRenderer:(id)arg1 playerOverlayAutoplayRenderer:(id)arg2 forVideoID:(id)arg3;
- (void)didUpdateDonationProgress:(float)arg1 donatedAmount:(id)arg2 forVideoID:(id)arg3;
- (void)didUpdateExtraShortVideoViewCount:(id)arg1 forVideoID:(id)arg2;
- (_Bool)willHandleStreamTransitionEndpoint:(id)arg1 timing:(int)arg2 video:(id)arg3;
- (void)populateHeartbeatRequestParams:(id)arg1;
- (void)processPlayabilityStatus:(id)arg1 heartbeatParams:(id)arg2;
- (_Bool)heartbeatShouldRunForPlayabilityStatus:(id)arg1;
- (void)autonavCountdownDidStopWithEndscreenCancelled:(_Bool)arg1;
- (void)autonavCountdownDidUpdateWithRemainingInterval:(long long)arg1;
- (void)autonavCountdownDidStartWithSeconds:(double)arg1;
- (void)playAutonavEndscreenCountdown;
- (void)playAutonav;
- (void)autonavCountdownDidReachTriggerWindow;
- (_Bool)isBackground;
- (_Bool)isMuted;
- (_Bool)shouldAutonavInBackground;
- (_Bool)shouldStartCountdown;
- (_Bool)shouldShowEndscreen;
- (void)showEndscreenControlsInPlayerBar:(_Bool)arg1;
- (void)loadImageIfNeeded;
- (void)hideEndscreen;
- (void)showEndscreen;
- (_Bool)isAutonavEnabled;
- (void)setupAutonavEndscreenViewIfReady;
- (_Bool)isUserInactive;
- (void)restartAutonavCountdown;
- (void)cancelAutonavCountdown;
- (void)didPressPlay;
- (void)didPressCancel;
- (void)startCountdownAndShowIfEndscreenActive;
- (void)stopCountdownAndHideIfEndscreenActive;
- (void)startCountdownIfEndscreenActive;
- (void)stopCountdownIfEndscreenActive;
- (_Bool)hasImmediateRedirect;
- (_Bool)isEndscreenCancelled;
- (_Bool)isEndscreenReady;
- (_Bool)isEndscreenActivated;
- (long long)playerControlsVisibility;
- (long long)playerControlsBehavior;
- (void)reset;
- (void)videoDidFinish;
- (void)didReceivePlayerResponse;
- (void)setContentVideo:(id)arg1;
- (id)initWithParentResponder:(id)arg1 config:(id)arg2 imageService:(id)arg3 lastActionController:(id)arg4 reachabilityController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

