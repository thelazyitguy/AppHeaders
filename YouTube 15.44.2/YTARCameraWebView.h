//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import <Module_Framework/WKNavigationDelegate-Protocol.h>
#import <Module_Framework/WKScriptMessageHandler-Protocol.h>
#import <Module_Framework/YTARCameraWebHandlerDelegate-Protocol.h>

@class GIMMe, NSString, YTARCameraCommandHandler, YTIWebConfig;
@protocol YTARCameraWebViewDelegate;

@interface YTARCameraWebView : WKWebView <WKScriptMessageHandler, WKNavigationDelegate, YTARCameraWebHandlerDelegate>
{
    _Bool _ARForwardShowing;
    _Bool _ARForwardHasAskedForPermission;
    _Bool _useProtoApi;
    GIMMe *_gimme;
    id <YTARCameraWebViewDelegate> _loadingDelegate;
    unsigned long long _loadingState;
    YTARCameraCommandHandler *_commandHandler;
    YTIWebConfig *_webConfig;
}

- (void).cxx_destruct;
@property(nonatomic) __weak YTIWebConfig *webConfig; // @synthesize webConfig=_webConfig;
@property(nonatomic) _Bool useProtoApi; // @synthesize useProtoApi=_useProtoApi;
@property(nonatomic) __weak YTARCameraCommandHandler *commandHandler; // @synthesize commandHandler=_commandHandler;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) __weak id <YTARCameraWebViewDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(nonatomic) _Bool ARForwardHasAskedForPermission; // @synthesize ARForwardHasAskedForPermission=_ARForwardHasAskedForPermission;
@property(nonatomic) _Bool ARForwardShowing; // @synthesize ARForwardShowing=_ARForwardShowing;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)onResetCaptureState;
- (void)onWebLayerLoaded;
- (id)javaScriptWithYTIMessage:(id)arg1;
- (void)sendContext;
- (void)sendConfig;
- (void)sendMessageToWeb:(id)arg1;
- (void)sendToWebWithCommand:(id)arg1 withParameter:(id)arg2;
- (void)webViewLoadingDidFinish;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (_Bool)ARForwardEnabled;
- (void)loadWebUIWithURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

