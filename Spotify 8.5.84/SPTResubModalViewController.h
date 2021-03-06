//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSString, NSURL, SPTResubModalViewModel, WKWebView;
@protocol SPTPageContainer;

@interface SPTResubModalViewController : UIViewController <WKNavigationDelegate, SPTPageController>
{
    SPTResubModalViewModel *_viewModel;
    WKWebView *_webview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) SPTResubModalViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)startLoadingData;
- (void)cancelButtonPressed;
- (void)logModalDismissedBecauseOfError:(_Bool)arg1;
- (void)hideBecauseOfError:(_Bool)arg1;
- (void)setupDoneButton;
- (void)setupWebView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

