//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SMASHLatency : NSObject
{
    _Bool _enabled;
    NSMutableDictionary *_webViewMetrics;
    double _appStartTime;
}

+ (id)sharedInstance;
@property(nonatomic) double appStartTime; // @synthesize appStartTime=_appStartTime;
@property(retain, nonatomic) NSMutableDictionary *webViewMetrics; // @synthesize webViewMetrics=_webViewMetrics;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)copyReportToPasteBoard:(id)arg1;
- (void)logMetric:(id)arg1;
- (id)getFileHandle;
- (id)getLogFilePath;
- (id)getMetric:(id)arg1;
- (id)generateReport;
- (void)reset;
- (void)attributeWebViewController:(id)arg1 withURL:(id)arg2;
- (void)logWebViewController:(id)arg1 didFinishLoadTime:(double)arg2;
- (void)logWebViewController:(id)arg1 renderTime:(double)arg2;
- (void)logWebViewController:(id)arg1 didStartLoadTime:(double)arg2;
- (void)logWebViewController:(id)arg1 initTime:(double)arg2;
- (void)attachURL:(id)arg1 toWebViewID:(id)arg2;
- (void)logAppStartTime:(double)arg1;
- (id)initFromDefaults;

@end
