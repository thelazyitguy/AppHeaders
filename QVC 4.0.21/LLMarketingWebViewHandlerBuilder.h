//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LLWebViewCampaign, WKWebView;
@protocol LLLocalyticsDelegate;

@interface LLMarketingWebViewHandlerBuilder : NSObject
{
    _Bool _openCustomURLSchemas;
    _Bool _loadUnknownURLSchemas;
    _Bool _testModeEnabled;
    WKWebView *_webView;
    LLWebViewCampaign *_campaign;
    double _videoConversionPercentage;
    id <LLLocalyticsDelegate> _localyticsDelegate;
}

+ (id)userScripts:(id)arg1 localyticsDelegate:(id)arg2 andViewportWidth:(double)arg3 withViewportFit:(id)arg4 videoConversionPercentage:(double)arg5;
+ (id)webViewConfiguration:(id)arg1 localyticsDelegate:(id)arg2 andViewportWidth:(double)arg3 withViewportFit:(id)arg4 videoConversionPercentage:(double)arg5;
- (void).cxx_destruct;
@property(nonatomic) __weak id <LLLocalyticsDelegate> localyticsDelegate; // @synthesize localyticsDelegate=_localyticsDelegate;
@property(nonatomic, getter=isTestModeEnabled) _Bool testModeEnabled; // @synthesize testModeEnabled=_testModeEnabled;
@property(nonatomic) double videoConversionPercentage; // @synthesize videoConversionPercentage=_videoConversionPercentage;
@property(nonatomic) _Bool loadUnknownURLSchemas; // @synthesize loadUnknownURLSchemas=_loadUnknownURLSchemas;
@property(nonatomic) _Bool openCustomURLSchemas; // @synthesize openCustomURLSchemas=_openCustomURLSchemas;
@property(retain, nonatomic) LLWebViewCampaign *campaign; // @synthesize campaign=_campaign;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (id)build;
- (id)init;

@end

