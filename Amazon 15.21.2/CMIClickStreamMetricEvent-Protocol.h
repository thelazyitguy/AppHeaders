//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMIMetricEvent-Protocol.h"

@class CMIECommerceInfo, CMIEventBasedUsageInfo, CMIImpressionTrackingData, CMIUsageInfo, NSString;

@protocol CMIClickStreamMetricEvent <CMIMetricEvent>
@property(retain, nonatomic) CMIEventBasedUsageInfo *eventBasedUsageInfo;
@property(retain, nonatomic) CMIECommerceInfo *eCommerceInfo;
@property(retain, nonatomic) CMIImpressionTrackingData *impressionTrackingData;
@property(retain, nonatomic) CMIUsageInfo *usageInfo;
@property(readonly, copy, nonatomic) NSString *requestId;
- (_Bool)validateMetricEvent;
@end
