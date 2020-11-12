//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CyteViewController.h"

#import "CyteWebViewDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSNumber, NSString, UIScrollView;

@interface CyteWebViewController : CyteViewController <CyteWebViewDelegate, MFMailComposeViewControllerDelegate, UIWebViewDelegate>
{
    struct MenesObjectHandle<CyteWebView, 1> webview_;
    UIScrollView *scroller_;
    struct MenesObjectHandle<UIActivityIndicatorView, 0> indicator_;
    struct MenesObjectHandle<IndirectDelegate, 1> indirect_;
    struct MenesObjectHandle<NSURLAuthenticationChallenge, 0> challenge_;
    _Bool error_;
    struct MenesObjectHandle<NSURLRequest, 0> request_;
    _Bool ready_;
    NSNumber *sensitive_;
    struct MenesObjectHandle<NSURL, 0> appstore_;
    struct MenesObjectHandle<NSString, 0> title_;
    struct MenesObjectHandle<NSMutableSet, 0> loading_;
    struct MenesObjectHandle<NSMutableSet, 0> registered_;
    struct MenesObjectHandle<NSTimer, 0> timer_;
    struct MenesObjectHandle<NSObject, 0> custom_;
    struct MenesObjectHandle<NSString, 0> style_;
    struct MenesObjectHandle<WebScriptObject, 0> function_;
    float width_;
    Class class_;
    struct MenesObjectHandle<UIBarButtonItem, 0> reloaditem_;
    struct MenesObjectHandle<UIBarButtonItem, 0> loadingitem_;
    _Bool visible_;
    _Bool hidesNavigationBar_;
    _Bool allowsNavigationAction_;
}

+ (float)defaultWidth;
+ (void)_lockJavaScript:(id)arg1;
+ (void)setApplicationNameForUserAgent:(id)arg1;
+ (void)addDiversion:(id)arg1;
+ (void)_initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)registerFrame:(id)arg1;
- (void)updateHeights:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setScrollIndicatorStyleWithName:(id)arg1;
- (void)setScrollIndicatorStyle:(long long)arg1;
- (void)setScrollAlwaysBounceVerticalNumber:(id)arg1;
- (void)setScrollAlwaysBounceVertical:(_Bool)arg1;
- (void)setHidesNavigationBarByNumber:(id)arg1;
- (void)setHidesNavigationBar:(_Bool)arg1;
- (void)_setHidesNavigationBar:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)hidesNavigationBar;
- (void)dispatchEvent:(id)arg1;
- (void)setHidesBackButtonByNumber:(id)arg1;
- (void)setHidesBackButton:(_Bool)arg1;
- (void)setBadgeValue:(id)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
- (void)setNavigationBarStyle:(id)arg1;
- (void)customButtonClicked;
- (void)_customButtonClicked;
- (void)reloadButtonClicked;
- (void)callFunction:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)initWithWidth:(float)arg1;
- (void)releaseSubviews;
- (void)loadView;
- (id)applicationNameForUserAgent;
- (id)initWithWidth:(float)arg1 ofClass:(Class)arg2;
- (_Bool)isLoading;
- (void)_didFinishLoading;
- (void)didFinishLoading;
- (void)_didStartLoading;
- (void)didStartLoading;
- (void)applyRightButton;
- (void)layoutRightButton;
- (void)applyLoadingTitle;
- (id)rightButton;
- (void)applyLeftButton;
- (id)leftButton;
- (id)customButton;
- (long long)rightButtonStyle;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)close;
- (void)webViewClose:(id)arg1;
- (_Bool)webView:(id)arg1 shouldRunJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (_Bool)webView:(id)arg1 shouldRunJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (_Bool)webView:(id)arg1 shouldRunJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didDecidePolicy:(int)arg2 forNavigationAction:(id)arg3 request:(id)arg4 frame:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2;
- (void)pushRequest:(id)arg1 forAction:(id)arg2 asPop:(_Bool)arg3;
- (void)_didFailWithError:(id)arg1 forFrame:(id)arg2;
- (void)popViewControllerWithNumber:(id)arg1;
- (void)setAllowsNavigationActionByNumber:(id)arg1;
- (void)setAllowsNavigationAction:(_Bool)arg1;
- (_Bool)allowsNavigationAction;
- (_Bool)_allowJavaScriptPanel;
- (void)_openMailToURL:(id)arg1;
- (void)_setupMail:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)webViewUpdateViewSettings:(id)arg1;
- (void)setViewportWidthOnMainThread:(float)arg1;
- (void)_setViewportWidthOnMainThread:(id)arg1;
- (void)setViewportWidth:(float)arg1;
- (void)_setViewportWidth;
- (void)scrollToBottomAnimated:(id)arg1;
- (void)removeButton;
- (void)setButtonTitle:(id)arg1 withStyle:(id)arg2 toFunction:(id)arg3;
- (void)setButtonImage:(id)arg1 withStyle:(id)arg2 toFunction:(id)arg3;
- (void)reloadData;
- (void)reloadURLWithCache:(_Bool)arg1;
- (void)loadRequest:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadURL:(id)arg1 cachePolicy:(unsigned long long)arg2;
- (void)setURL:(id)arg1 withReferrer:(id)arg2;
- (void)setURL:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 referrer:(id)arg3;
- (id)URLWithURL:(id)arg1;
- (id)indirect;
- (id)webView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)releaseNetworkActivityIndicator;
- (_Bool)retainsNetworkActivityIndicator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
