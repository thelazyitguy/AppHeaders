//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface A9VSEngineMetricsLogger : NSObject
{
}

+ (id)defaultLogger;
- (void)logPageAction:(id)arg1 withMetadata:(id)arg2;
- (void)logPageAction:(id)arg1 forASIN:(id)arg2 withMetadata:(id)arg3;
- (void)logPageAction:(id)arg1 forASIN:(id)arg2 withDoubleValue:(id)arg3;
- (void)logPageAction:(id)arg1 forASIN:(id)arg2 withIntegerValue:(id)arg3;
- (void)logEngineMetrics:(id)arg1 forASIN:(id)arg2;

@end
