//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IAVideoPlayerBaseView.h>

#import <Funny/IAInterfaceBuilder-Protocol.h>
#import <Funny/IAInterfaceVideoPlayer-Protocol.h>
#import <Funny/IAVPAIDPlayerBuilder-Protocol.h>
#import <Funny/WKNavigationDelegate-Protocol.h>
#import <Funny/WKUIDelegate-Protocol.h>

@class IAMRAIDProtocolController, IAResizableWebView, IAWeakTimer, NSString, UILabel;
@protocol IAVPAIDPlayerDelegate;

@interface IAVPAIDPlayer : IAVideoPlayerBaseView <WKUIDelegate, WKNavigationDelegate, IAInterfaceBuilder, IAVPAIDPlayerBuilder, IAInterfaceVideoPlayer>
{
    struct CGRect _lastSelfFrame;
    struct CGSize _lastCustomVideoSize;
    _Bool _isInHierarchy;
    _Bool _autoPlay;
    _Bool _startMuted;
    _Bool _isSkippable;
    _Bool _muted;
    _Bool _viewable;
    _Bool _isFullscreen;
    _Bool _startInvoked;
    _Bool _resumeInvoked;
    _Bool _pauseInvoked;
    _Bool _shouldReportClickWasDone;
    _Bool _durationChecked;
    id <IAVPAIDPlayerDelegate> _delegate;
    double _callbackTimeout;
    long long _padding;
    NSString *_unitDisplayType;
    long long _videoType;
    NSString *_spotId;
    unsigned long long _state;
    IAResizableWebView *_webView;
    NSString *_html;
    double _duration;
    double _remainingTime;
    IAWeakTimer *_timeoutTimer;
    IAWeakTimer *_callbackTimeoutTimer;
    UILabel *_errorLabel;
    IAMRAIDProtocolController *_mediaController;
    struct CGSize _customVideoSize;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IAMRAIDProtocolController *mediaController; // @synthesize mediaController=_mediaController;
@property(nonatomic) _Bool durationChecked; // @synthesize durationChecked=_durationChecked;
@property(nonatomic) _Bool shouldReportClickWasDone; // @synthesize shouldReportClickWasDone=_shouldReportClickWasDone;
@property(nonatomic) _Bool pauseInvoked; // @synthesize pauseInvoked=_pauseInvoked;
@property(nonatomic) _Bool resumeInvoked; // @synthesize resumeInvoked=_resumeInvoked;
@property(nonatomic) _Bool startInvoked; // @synthesize startInvoked=_startInvoked;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) IAWeakTimer *callbackTimeoutTimer; // @synthesize callbackTimeoutTimer=_callbackTimeoutTimer;
@property(retain, nonatomic) IAWeakTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(nonatomic) struct CGSize customVideoSize; // @synthesize customVideoSize=_customVideoSize;
@property(nonatomic) _Bool viewable; // @synthesize viewable=_viewable;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool isSkippable; // @synthesize isSkippable=_isSkippable;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *html; // @synthesize html=_html;
@property(retain, nonatomic) IAResizableWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *spotId; // @synthesize spotId=_spotId;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSString *unitDisplayType; // @synthesize unitDisplayType=_unitDisplayType;
@property(nonatomic) long long padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool startMuted; // @synthesize startMuted=_startMuted;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) double callbackTimeout; // @synthesize callbackTimeout=_callbackTimeout;
@property(nonatomic) __weak id <IAVPAIDPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)disposePlayerElements;
- (void)checkDurationFromEventString:(id)arg1;
- (void)updateDurationIfNeeded:(double)arg1;
- (void)enableOutputOfJSConsoleToXCodeConsole;
- (void)updateState:(unsigned long long)arg1 error:(id)arg2;
- (void)playerFailed;
- (void)showErrorMessage;
- (void)handleError:(id)arg1;
- (void)setContentFrame;
- (void)startAd;
- (void)loadCreative;
- (void)treatCallbackTimeout;
- (void)stopCallbackTimer;
- (void)startCallbackTimer;
- (void)treatTimeout;
- (void)stopTimer;
- (void)startTimer;
- (void)setBackgroundColor:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)getAdRemainingTimeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAdSkippableStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAdDuration;
- (void)reportClickWasDone;
- (void)resizeAdToSize:(struct CGSize)arg1;
- (void)skipAd;
- (void)pause;
- (_Bool)isPlaying;
- (void)play;
- (void)collapseAd;
- (void)expandAd;
- (void)loadHTML:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)initMediaController;
- (void)initWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
