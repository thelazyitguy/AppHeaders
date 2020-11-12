//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <APIGuard/WKNavigationDelegate-Protocol.h>
#import <APIGuard/WKScriptMessageHandler-Protocol.h>

@class  0,  4,  5, NSString, UIWindow, WKWebView;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface  u : NSObject <WKScriptMessageHandler, WKNavigationDelegate>
{
    _Bool _isBaseKernel;
    _Bool _isValidationSucc;
     4 *_configManager;
     0 *_payloadStore;
     5 *_sensorAgent;
    NSObject<OS_dispatch_queue> *_scriptMsgQueue;
    WKWebView *_webview;
    UIWindow *_window;
    NSString *_kernelCode;
    NSObject<OS_dispatch_semaphore> *_sem;
    long long _jsContext;
}

@property long long jsContext; // @synthesize jsContext=_jsContext;
@property _Bool isValidationSucc; // @synthesize isValidationSucc=_isValidationSucc;
@property _Bool isBaseKernel; // @synthesize isBaseKernel=_isBaseKernel;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(retain, nonatomic) NSString *kernelCode; // @synthesize kernelCode=_kernelCode;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *scriptMsgQueue; // @synthesize scriptMsgQueue=_scriptMsgQueue;
@property(retain, nonatomic)  5 *sensorAgent; // @synthesize sensorAgent=_sensorAgent;
@property(retain, nonatomic)  0 *payloadStore; // @synthesize payloadStore=_payloadStore;
- (void)setConfigManager:(id)arg1;
- (id)configManager;
- (void).cxx_destruct;
- (void)ar;
- (void)1R;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)handleSend:(id)arg1 withJSContext:(long long)arg2;
- (void)dealloc;
- (void)Sr;
- (void)t;
- (void)qp;
- (void)hj;
- (void)aW;
- (id)ez;
- (void)UT;
- (void)Bb;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)d5;
- (id)cr;
- (id)s;
- (id)zA;
- (id)init;

// Remaining properties
@property(retain, nonatomic)  4 * yManager; // @synthesize  yManager=_configManager;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
