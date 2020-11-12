//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTIMAPWebViewController.h"

#import "WKNavigationDelegate-Protocol.h"

@class ExternalOAuthServiceProvider, NSRegularExpression, NSString, OIDAuthorizationRequest;

@interface GBTExternalOAuthLoginViewController : GBTIMAPWebViewController <WKNavigationDelegate>
{
    OIDAuthorizationRequest *_authorizationRequest;
    NSString *_emailAddress;
    NSRegularExpression *_hostWhitelistRegex;
    ExternalOAuthServiceProvider *_oauthServiceProvider;
    NSRegularExpression *_pathBlacklistRegex;
}

- (void).cxx_destruct;
- (void)handleAuthenticationCompleteWithURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)initWithEmailAddress:(id)arg1 oauthServiceProvider:(id)arg2 parentVisualElement:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
