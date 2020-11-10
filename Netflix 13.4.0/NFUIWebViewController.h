//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class LoadingViewController, NSString, NSURL, UIButton, UILabel, WKWebView;

@interface NFUIWebViewController : UIViewController <WKNavigationDelegate, WKUIDelegate>
{
    WKWebView *_webView;
    UIButton *_backButton;
    UILabel *_logo;
    NSURL *_rootURL;
    LoadingViewController *_currentLoadingVC;
}

+ (id)webViewControllerWithURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) LoadingViewController *currentLoadingVC; // @synthesize currentLoadingVC=_currentLoadingVC;
@property(retain, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
@property(nonatomic) __weak UILabel *logo; // @synthesize logo=_logo;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)clickedBack:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

