//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class PRMMetricKitHistogram;

@interface PRMMetricKitAppLaunchMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHistogrammedApplicationResumeTimeMs; // @dynamic hasHistogrammedApplicationResumeTimeMs;
@property(nonatomic) _Bool hasHistogrammedTimeToFirstDrawMs; // @dynamic hasHistogrammedTimeToFirstDrawMs;
@property(retain, nonatomic) PRMMetricKitHistogram *histogrammedApplicationResumeTimeMs; // @dynamic histogrammedApplicationResumeTimeMs;
@property(retain, nonatomic) PRMMetricKitHistogram *histogrammedTimeToFirstDrawMs; // @dynamic histogrammedTimeToFirstDrawMs;

@end

