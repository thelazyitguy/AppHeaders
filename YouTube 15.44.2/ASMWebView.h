//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/UIScrollViewDelegate-Protocol.h>
#import <Module_Framework/WKNavigationDelegate-Protocol.h>
#import <Module_Framework/WKUIDelegate-Protocol.h>

@class ASMFloatingActivityIndicator, ASMWebViewURLChecker, GIDASCErrorView, NSDate, NSDictionary, NSString, NSURL, QTMPullToRefreshController, UIScrollView, WKWebView;
@protocol ASMOptions, ASMWebViewDelegate, SSOAuthorization, SSOService;

@interface ASMWebView : UIView <WKNavigationDelegate, WKUIDelegate, UIScrollViewDelegate>
{
    ASMFloatingActivityIndicator *_indicator;
    GIDASCErrorView *_errorView;
    UIView *_snapshot;
    NSURL *_authTargetURL;
    NSURL *_lastAllowedURL;
    unsigned long long _itemsBeforeBackStop;
    QTMPullToRefreshController *_pullToRefreshController;
    NSDate *_startRefreshingDate;
    _Bool _bypassAllowlist;
    id <ASMWebViewDelegate> _delegate;
    WKWebView *_webview;
    NSDictionary *_javaScriptBridges;
    id <SSOAuthorization> _authorization;
    id <SSOService> _SSOService;
    ASMWebViewURLChecker *_URLChecker;
    id <ASMOptions> _options;
}

+ (id)processPool;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ASMOptions> options; // @synthesize options=_options;
@property(retain, nonatomic) ASMWebViewURLChecker *URLChecker; // @synthesize URLChecker=_URLChecker;
@property(retain, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(nonatomic) _Bool bypassAllowlist; // @synthesize bypassAllowlist=_bypassAllowlist;
@property(retain, nonatomic) id <SSOAuthorization> authorization; // @synthesize authorization=_authorization;
@property(retain, nonatomic) NSDictionary *javaScriptBridges; // @synthesize javaScriptBridges=_javaScriptBridges;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <ASMWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateJSBridgeDelegates:(id)arg1;
- (CDUnknownBlockType)makeRetryHandler;
- (void)stopRefreshing;
- (void)loadingDidFinish;
- (void)loadingDidStart;
- (void)willMakeDecisionForURL:(id)arg1;
- (id)customUserAgentAddition;
- (void)reallyLoadRequest:(id)arg1;
- (_Bool)hasCloseParameterInURL:(id)arg1;
- (void)reloadCurrentPage;
- (void)handlePullToRefreshAction;
- (void)setUserAgentAndExecuteBlock:(CDUnknownBlockType)arg1;
- (void)updateUserAgent;
- (void)requestTokenAuthURLAndThenLoadRequest:(id)arg1;
- (id)fontZoomFactor;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webViewDidClose:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)updateIndicatorPosition;
- (void)layoutSubviews;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
@property(readonly, nonatomic, getter=hasDisplayedAnyWebpage) _Bool displayedAnyWebpage;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (void)goBack;
- (_Bool)canGoBack;
- (void)setBackStop;
- (void)loadingDidFail:(id)arg1 retryHandler:(CDUnknownBlockType)arg2;
- (void)showError:(id)arg1 retryHandler:(CDUnknownBlockType)arg2;
- (void)unfreeze;
- (void)freeze;
- (void)viewWillReappear;
- (void)viewWillDisappear;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (id)initWithAuthorization:(id)arg1 SSOService:(id)arg2 options:(id)arg3 javaScriptBridges:(id)arg4 URLChecker:(id)arg5 delegate:(id)arg6;
- (void)traitCollectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

