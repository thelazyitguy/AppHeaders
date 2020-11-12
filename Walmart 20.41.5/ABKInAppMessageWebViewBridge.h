//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Appboy_iOS_SDK/WKScriptMessageHandler-Protocol.h>

@class ABKInAppMessageHTML, Appboy, NSString, WKWebView;
@protocol ABKInAppMessageWebViewBridgeDelegate;

@interface ABKInAppMessageWebViewBridge : NSObject <WKScriptMessageHandler>
{
    id <ABKInAppMessageWebViewBridgeDelegate> _delegate;
    WKWebView *_webView;
    ABKInAppMessageHTML *_inAppMessage;
    Appboy *_appboy;
}

+ (id)parseDateOrThrowWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (long long)parseSubscriptionTypeFromStringOrThrow:(id)arg1;
+ (long long)parseGenderFromStringOrThrow:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) Appboy *appboy; // @synthesize appboy=_appboy;
@property(retain, nonatomic) ABKInAppMessageHTML *inAppMessage; // @synthesize inAppMessage=_inAppMessage;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <ABKInAppMessageWebViewBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)logPurchase:(id)arg1;
- (void)setUserCustomAttributeOrThrow:(id)arg1;
- (void)handleBridgeMethod:(long long)arg1 withArgs:(id)arg2;
- (void)teardownBridge;
- (void)setupBridge;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 inAppMessage:(id)arg2 appboyInstance:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
