//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WJMetricsHelper;

@interface WJSecureSessionMetrics : NSObject
{
    WJMetricsHelper *_metricsHelper;
}

@property(retain, nonatomic) WJMetricsHelper *metricsHelper; // @synthesize metricsHelper=_metricsHelper;
- (void).cxx_destruct;
- (void)trackSecureSessionSetupFailure;
- (void)trackSecureSessionSetupSuccess;
- (id)initWithMetricsHelper:(id)arg1;

@end
