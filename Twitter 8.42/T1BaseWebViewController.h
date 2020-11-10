//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/PKAddPassesViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/TNLRequestDelegate-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>
#import <T1Twitter/WKNavigationDelegate-Protocol.h>
#import <T1Twitter/WKUIDelegate-Protocol.h>

@class NSString, NSURL, NSURLRequest, T1OpenExternalURLSessionManager, TFNTwitterAccount, TFSKVODispatcher, TNLRequestOperation, UIBarButtonItem, UIProgressView, UIWindow, WKWebView;

@interface T1BaseWebViewController : TFNViewController <PKAddPassesViewControllerDelegate, WKNavigationDelegate, WKUIDelegate, UIScrollViewDelegate, TFNLayoutMetricsEnvironment, TNLRequestDelegate>
{
    UIWindow *_originalWindow;
    TFNTwitterAccount *_account;
    TFSKVODispatcher *_titleKVOer;
    TFSKVODispatcher *_URLKVOer;
    TFSKVODispatcher *_estimatedProgressKVOer;
    TFSKVODispatcher *_canGoBackKVOer;
    TFSKVODispatcher *_canGoForwardKVOer;
    _Bool _silenceNetworkActivity;
    _Bool _showingAlertView;
    _Bool _dismissAfterAppleDeepLink;
    long long _activeRequests;
    double _lastWebPopoverPresentationTime;
    _Bool _hasWebViewStartedLoadingHTMLContent;
    _Bool _didLoadOnce;
    _Bool _usingNonPersistentDataStore;
    _Bool _shouldCustomizeProgressBar;
    _Bool _shouldRefreshByCommand;
    _Bool _forceReloadCurrentURLOnBecomeActive;
    _Bool _isAuthenticated;
    NSString *_webViewHTMLTitle;
    unsigned long long _loadsMadeForCurrentNavigation;
    WKWebView *_webView;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_actionItemWithIcon;
    UIBarButtonItem *_actionItemWithTextTitle;
    UIBarButtonItem *_tweetItem;
    UIBarButtonItem *_closeItem;
    UIProgressView *_progressView;
    TNLRequestOperation *_passbookCheckOperation;
    T1OpenExternalURLSessionManager *_openExternalURLSessionManager;
    NSURLRequest *_currentURLRequest;
    NSURLRequest *_rootURLRequest;
}

+ (id)closeButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)_processPoolSharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAuthenticated; // @synthesize isAuthenticated=_isAuthenticated;
@property(copy, nonatomic) NSURLRequest *rootURLRequest; // @synthesize rootURLRequest=_rootURLRequest;
@property(copy, nonatomic) NSURLRequest *currentURLRequest; // @synthesize currentURLRequest=_currentURLRequest;
@property(retain, nonatomic) T1OpenExternalURLSessionManager *openExternalURLSessionManager; // @synthesize openExternalURLSessionManager=_openExternalURLSessionManager;
@property(nonatomic, getter=shouldForceReloadCurrentURLOnBecomeActive) _Bool forceReloadCurrentURLOnBecomeActive; // @synthesize forceReloadCurrentURLOnBecomeActive=_forceReloadCurrentURLOnBecomeActive;
@property(retain, nonatomic) TNLRequestOperation *passbookCheckOperation; // @synthesize passbookCheckOperation=_passbookCheckOperation;
@property(nonatomic) _Bool shouldRefreshByCommand; // @synthesize shouldRefreshByCommand=_shouldRefreshByCommand;
@property(nonatomic) _Bool shouldCustomizeProgressBar; // @synthesize shouldCustomizeProgressBar=_shouldCustomizeProgressBar;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIBarButtonItem *closeItem; // @synthesize closeItem=_closeItem;
@property(retain, nonatomic) UIBarButtonItem *tweetItem; // @synthesize tweetItem=_tweetItem;
@property(retain, nonatomic) UIBarButtonItem *actionItemWithTextTitle; // @synthesize actionItemWithTextTitle=_actionItemWithTextTitle;
@property(retain, nonatomic) UIBarButtonItem *actionItemWithIcon; // @synthesize actionItemWithIcon=_actionItemWithIcon;
@property(retain, nonatomic) UIBarButtonItem *forwardItem; // @synthesize forwardItem=_forwardItem;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic, getter=isUsingNonPersistentDataStore) _Bool usingNonPersistentDataStore; // @synthesize usingNonPersistentDataStore=_usingNonPersistentDataStore;
@property(readonly, nonatomic) _Bool didLoadOnce; // @synthesize didLoadOnce=_didLoadOnce;
@property(readonly, nonatomic) _Bool hasWebViewStartedLoadingHTMLContent; // @synthesize hasWebViewStartedLoadingHTMLContent=_hasWebViewStartedLoadingHTMLContent;
@property(readonly, nonatomic) unsigned long long loadsMadeForCurrentNavigation; // @synthesize loadsMadeForCurrentNavigation=_loadsMadeForCurrentNavigation;
@property(copy, nonatomic) NSString *webViewHTMLTitle; // @synthesize webViewHTMLTitle=_webViewHTMLTitle;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)viewControllerDidPresent:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)shouldStartLoadingRequest:(id)arg1 navigationType:(long long)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (long long)unifiedWebView:(id)arg1 handleFinishingLoadWithError:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)tnl_requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2;
- (_Bool)_installPassbookPassFromData:(id)arg1;
- (_Bool)_loadPassbookPassWithResponse:(id)arg1 data:(id)arg2;
- (void)_checkURLForPassbookContent:(id)arg1 sourceError:(id)arg2;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)didUpdateCurrentURL;
- (void)didUpdateCanGoBack;
- (void)logWebViewProgressWithEstimatedProgressValue:(double)arg1;
- (void)didFinishLoadingWithError:(id)arg1;
- (void)didStartLoading;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)willStartLoadingNavigationRequestOfType:(long long)arg1;
- (void)didReceiveNavigationRequestOfType:(long long)arg1;
- (void)_resetCurrentNavigationLoadState;
- (void)_layoutWebView;
- (void)_layoutWebViewAtNewOrigin:(double)arg1;
- (void)_layoutProgressView;
- (_Bool)_isGoogleAuthenticatorScheme:(id)arg1;
- (_Bool)_shouldDismissAfterOpenExternalURWithURL:(id)arg1 result:(unsigned long long)arg2;
- (unsigned long long)openExternalURLAndDismissOnSuccess:(id)arg1;
- (id)protocolHandlerContext;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)handleRefreshKeyCommand;
- (void)close:(id)arg1;
- (void)tweet:(id)arg1;
- (void)action:(id)arg1;
- (void)load:(id)arg1 sender:(id)arg2;
- (void)reload:(id)arg1;
- (void)refresh:(id)arg1;
- (void)forward:(id)arg1;
- (void)back:(id)arg1;
- (void)_t1_loadInitialURL;
- (void)loadInitialURLIfRequired;
- (void)_t1_stopLoadingForDisappearance;
- (void)tfn_previewingStateDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (void)_updateWebNavigation;
- (void)_updateWebNavigationForwardButton;
- (void)_updateWebNavigationBackButton;
@property(retain, nonatomic) id webViewDelegate;
@property(copy, nonatomic) NSURL *currentURL;
@property(copy, nonatomic) NSURL *rootURL;
@property(readonly, nonatomic, getter=isNavigationControllerParentFloatingModal) _Bool navigationControllerParentFloatingModal;
@property(readonly, nonatomic, getter=isNavigationControllerParentAttachedModal) _Bool navigationControllerParentAttachedModal;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

