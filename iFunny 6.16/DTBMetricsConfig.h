//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DTBMetricsConfig : NSObject
{
    NSDictionary *configuration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cleanup;
- (void)loadWebConfig;
- (id)downloadedConfig;
- (id)sampleRateForWrappingPixel;
- (_Bool)isTypeEnabled:(id)arg1;
- (void)loadConfig;
- (id)init;

@end

