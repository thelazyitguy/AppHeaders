//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/NSObject-Protocol.h>

@class NSArray;

@protocol TNUTransactionMetricsSynchronizedProperties <NSObject>
@property(nonatomic) unsigned long long retryCount;
@property(copy, nonatomic) NSArray *attemptMetrics;
@property(nonatomic) long long status;
@property(nonatomic) double duration;
@end

