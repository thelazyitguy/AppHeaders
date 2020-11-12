//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SMASHRenderingDetectorCallback-Protocol.h"
#import "SMASHSwizzlingDelegate-Protocol.h"
#import "SMASHTransitioning-Protocol.h"
#import "SMASHURLPreloaderHandler-Protocol.h"
#import "SMASHWebHostingLogic-Protocol.h"

@class NSString, NSURLRequest, SMASHApplication, SMASHBrains, SMASHDispatcher, SMASHNavigationOperationBlockingController, SMASHRenderingDetector, SMASHSceneAnimationMetrics, SMASHStackableBookmarks, SMASHTransitionCoordinator, SMASHWebContainer;
@protocol SMASHActivityIndicatorDelegate, SMASHErrorDelegate, SMASHNavigationStackDelegate;

@interface SMASHWebViewController : UIViewController <SMASHWebHostingLogic, SMASHSwizzlingDelegate, SMASHRenderingDetectorCallback, SMASHURLPreloaderHandler, SMASHTransitioning>
{
    _Bool shouldSyncIntrapageState;
    _Bool _isBlank;
    _Bool _mightBeBlank;
    _Bool _isExpectedToBeBlank;
    _Bool _shouldUseDeltaStrategy;
    _Bool _shouldDelayDeltaDetector;
    _Bool _webContainerNeedsSyncOnFinishLoad;
    _Bool _isFirstAppearance;
    _Bool _shouldShowLoadingIndicatorOnStart;
    _Bool _willDelayLoadingRequestUntilViewWillAppear;
    _Bool _initialLoad;
    _Bool _requestChanged;
    _Bool _didDetectRendering;
    _Bool _shouldInvokeReappearOnNextAppearance;
    SMASHSceneAnimationMetrics *_enteringSMASHAnimationMetrics;
    id <SMASHErrorDelegate> _errorDelegate;
    SMASHNavigationOperationBlockingController *_blockingController;
    SMASHApplication *_smashApplication;
    NSString *_mainDocumentUrl;
    SMASHStackableBookmarks *_bookmarks;
    SMASHBrains *_smashBrains;
    SMASHDispatcher *_dispatcher;
    id <SMASHActivityIndicatorDelegate> _activityIndicator;
    SMASHRenderingDetector *_renderingDetector;
    NSString *_wvcID;
    SMASHTransitionCoordinator *_smashTransitionCoordinator;
    NSString *_appVersion;
    NSString *_osVersion;
    NSString *_appType;
    id <SMASHNavigationStackDelegate> _navigationStackDelegate;
    SMASHWebContainer *_webContainer;
    unsigned long long _csmClickTime;
    unsigned long long _userActionTime;
    struct UIEdgeInsets _webViewInsets;
}

+ (id)allWebViewControllers;
+ (id)SMASHWebViewControllerForUUID:(id)arg1;
+ (_Bool)doesSMASHWebViewControllerHavingMainDocumentUrlExist:(id)arg1;
+ (void)broadcastInsecureRequestError:(id)arg1;
+ (void)load;
+ (void)initialize;
@property(nonatomic) unsigned long long userActionTime; // @synthesize userActionTime=_userActionTime;
@property(nonatomic) unsigned long long csmClickTime; // @synthesize csmClickTime=_csmClickTime;
@property(nonatomic) _Bool shouldInvokeReappearOnNextAppearance; // @synthesize shouldInvokeReappearOnNextAppearance=_shouldInvokeReappearOnNextAppearance;
@property(retain, nonatomic) SMASHWebContainer *webContainer; // @synthesize webContainer=_webContainer;
@property(retain, nonatomic) id <SMASHNavigationStackDelegate> navigationStackDelegate; // @synthesize navigationStackDelegate=_navigationStackDelegate;
@property(retain, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool didDetectRendering; // @synthesize didDetectRendering=_didDetectRendering;
@property(retain, nonatomic) SMASHTransitionCoordinator *smashTransitionCoordinator; // @synthesize smashTransitionCoordinator=_smashTransitionCoordinator;
@property(nonatomic) _Bool requestChanged; // @synthesize requestChanged=_requestChanged;
@property(nonatomic) _Bool initialLoad; // @synthesize initialLoad=_initialLoad;
@property(nonatomic) struct UIEdgeInsets webViewInsets; // @synthesize webViewInsets=_webViewInsets;
@property(nonatomic) _Bool willDelayLoadingRequestUntilViewWillAppear; // @synthesize willDelayLoadingRequestUntilViewWillAppear=_willDelayLoadingRequestUntilViewWillAppear;
@property(nonatomic) _Bool shouldShowLoadingIndicatorOnStart; // @synthesize shouldShowLoadingIndicatorOnStart=_shouldShowLoadingIndicatorOnStart;
@property(nonatomic) _Bool isFirstAppearance; // @synthesize isFirstAppearance=_isFirstAppearance;
@property(readonly, nonatomic) NSString *wvcID; // @synthesize wvcID=_wvcID;
@property(nonatomic) _Bool webContainerNeedsSyncOnFinishLoad; // @synthesize webContainerNeedsSyncOnFinishLoad=_webContainerNeedsSyncOnFinishLoad;
@property(nonatomic) _Bool shouldDelayDeltaDetector; // @synthesize shouldDelayDeltaDetector=_shouldDelayDeltaDetector;
@property(nonatomic) _Bool shouldUseDeltaStrategy; // @synthesize shouldUseDeltaStrategy=_shouldUseDeltaStrategy;
@property(retain, nonatomic) SMASHRenderingDetector *renderingDetector; // @synthesize renderingDetector=_renderingDetector;
@property(retain) id <SMASHActivityIndicatorDelegate> activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) SMASHDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) SMASHBrains *smashBrains; // @synthesize smashBrains=_smashBrains;
@property(retain, nonatomic) SMASHStackableBookmarks *bookmarks; // @synthesize bookmarks=_bookmarks;
@property(nonatomic) _Bool isExpectedToBeBlank; // @synthesize isExpectedToBeBlank=_isExpectedToBeBlank;
@property(nonatomic) _Bool mightBeBlank; // @synthesize mightBeBlank=_mightBeBlank;
@property(nonatomic) _Bool isBlank; // @synthesize isBlank=_isBlank;
@property(retain, nonatomic) NSString *mainDocumentUrl; // @synthesize mainDocumentUrl=_mainDocumentUrl;
@property(readonly, nonatomic) SMASHApplication *smashApplication; // @synthesize smashApplication=_smashApplication;
@property(retain, nonatomic) SMASHNavigationOperationBlockingController *blockingController; // @synthesize blockingController=_blockingController;
@property(retain, nonatomic) id <SMASHErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
@property(retain, nonatomic) SMASHSceneAnimationMetrics *enteringSMASHAnimationMetrics; // @synthesize enteringSMASHAnimationMetrics=_enteringSMASHAnimationMetrics;
@property(nonatomic) _Bool shouldSyncIntrapageState; // @synthesize shouldSyncIntrapageState;
- (void).cxx_destruct;
- (void)evaluateJavascript:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)smashTransitionWillBegin;
- (void)getEnteringTransitionMetricsWithBlock:(CDUnknownBlockType)arg1;
- (void)smashTransitionDidFinishWithTransitionCoordinator:(id)arg1;
- (id)sceneAnimation;
- (id)transitionView;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (_Bool)hasCustomTransitionAnimation;
@property(readonly, nonatomic) _Bool shouldAllowTitleUpdateFromDocumentTitle;
- (_Bool)shouldDelayLoadingRequestUntilViewWillAppear;
- (void)clearHistory;
- (void)stopBlockingUserInteractionAndShowHiddenViewIfApplicable;
- (id)createRenderingDetectorForWebView:(id)arg1;
- (id)createRenderDetectionStrategy;
- (_Bool)shouldAllowUserActionWorkFlow;
- (_Bool)shouldReturnUserActionTime;
- (void)logRealClickTimeValue:(id)arg1 withMetricName:(id)arg2;
@property(readonly, nonatomic) unsigned long long transitionStartTime;
- (id)getErrorType:(id)arg1;
- (id)getMetricNameFromResult:(_Bool)arg1 withError:(id)arg2;
- (void)logSmashWebViewLoadMetricsLoadSuccess:(_Bool)arg1 withError:(id)arg2;
- (void)webKitContentProcessWasTerminated;
- (void)activityIndicatorDidStartLoad;
- (void)reapplyDefaultLoadingIndicatorIfApplicable;
- (_Bool)loading;
- (void)stopLoading;
- (void)webViewDidUpdateScrollInsets;
- (void)smashWebView:(id)arg1 didUpdateTitle:(id)arg2;
- (void)smashWebViewWillLoadNavigationInPlace:(long long)arg1;
- (void)smashWebViewDidReceiveAuthenticationChallenge:(id)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)smashWebView:(id)arg1 shouldLoadRedirectedRequest:(id)arg2;
- (void)smashWebView:(id)arg1 willRedirectToRequest:(id)arg2;
- (void)smashWebView:(id)arg1 didReceiveNetworkError:(id)arg2;
- (void)smashWebView:(id)arg1 didCancelNavigation:(id)arg2;
- (void)smashWebView:(id)arg1 didReceiveHTTPErrorWithResponse:(id)arg2;
- (void)addExtraCSMMetrics;
- (void)smashWebViewDidFinishLoad:(id)arg1;
- (void)smashWebViewDidStopLoading:(id)arg1;
- (void)smashWebView:(id)arg1 didStartLoadInScrollView:(id)arg2;
- (id)getCurrentURL;
- (_Bool)smashShouldAllowRequest:(id)arg1;
- (_Bool)smashShouldLoadRequest:(id)arg1 withNavigationType:(long long)arg2;
- (_Bool)smashShouldLoadRequestWithObligatoryHandlersOnly:(id)arg1 withNavigationType:(long long)arg2;
- (id)addRefererPropertyIfNotExist:(id)arg1;
- (_Bool)smashShouldLoadRequest:(id)arg1 withNavigationType:(long long)arg2 withObligatoryHandlersOnly:(_Bool)arg3;
- (void)smashLoadRequest:(id)arg1;
- (void)updateStoredUAIfNecessary;
- (id)replaceInternalWebProvider:(id)arg1;
- (id)replaceInternalWebProviderWithProxy;
- (void)resetViewControllerState;
- (unsigned long long)makeTimestamp;
- (void)stopRenderDetector;
- (void)startRenderDetectorIfNecessary;
- (void)applicationDidEnterForeground;
- (void)removeHeinousGestureDelays:(id)arg1;
- (void)updateViewBasedOnDocumentTitle;
- (void)markAsExpectedToBeBlank;
- (void)markAsBlank;
- (void)markAsMaybeBlank;
- (void)markAsNotBlank;
- (_Bool)isMarkedAsBlank;
- (_Bool)isPassivated;
- (void)receiveInsecureRequestError:(id)arg1;
- (void)goForward;
- (_Bool)canGoForward;
- (void)goBack;
- (_Bool)canGoBack;
- (void)notifyHashChange;
- (void)notifyPopState;
- (void)intraPageNavigationFinishedPopping;
- (void)intraPageNavigationFinishedShowing;
- (void)prepareForIntrapageNavigationAnimated:(_Bool)arg1;
- (void)intraPageNavigationStarting;
- (_Bool)smashPrepareForSwizzlingPopToViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)smashPrepareForSwizzlingPopViewControllerAnimated:(_Bool)arg1;
- (void)smashPrepareForSwizzlingPushViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)hasHTTPSError:(id)arg1;
- (void)notifyRedirection:(id)arg1;
- (void)askWebViewToLoadRequestIfPossible;
- (void)logHTTPRedirection;
- (id)convertURLtoHTTPS:(id)arg1;
- (void)startLoadingCurrentRequest;
- (void)ensureViewIsLoaded;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1 interceptionBehavior:(int)arg2;
- (void)loadRequest:(id)arg1;
- (void)loadRequestInPlace:(id)arg1 interceptionBehavior:(int)arg2;
- (void)loadRequestInPlace:(id)arg1;
- (id)setCurrentRequest:(id)arg1 interceptionBehavior:(int)arg2;
- (id)setCurrentRequest:(id)arg1;
- (_Bool)hasValidUserActionTime:(double)arg1;
- (void)updateRealClickTime;
- (void)reload;
- (void)callJavascriptAppWillReappearIfAppropriate;
- (void)invokeWillReappearOnNextAppearance;
- (_Bool)handleAmznAppAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)insertBackSwipeBevelIfAllowed;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)callJavascriptAppWillDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didCompleteNavigation;
- (void)didStartNavigation;
- (void)preloadFailedForRequest:(id)arg1;
- (void)preloadSuceededWithHTMLString:(id)arg1 withResponse:(id)arg2 forRequest:(id)arg3;
- (void)dealloc;
- (void)smash_passivate;
- (id)init;
- (id)initWithBuilder:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)view:(id)arg1 didDetectRendering:(_Bool)arg2;
- (long long)getHighestIndexForBookmark:(id)arg1;
- (id)getCurrentBookmarks;
- (void)syncBookmarksToPage;
- (id)transitionViewContainer;
@property(retain, nonatomic) NSURLRequest *request;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
