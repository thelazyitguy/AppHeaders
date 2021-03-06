//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMAMetricManager, NSMutableData, NSString;

@interface AMABaseAdManager : NSObject
{
    int _loadStatus;
    int _creativeType;
    NSString *_impressionPixelUrl;
    NSString *_metricTrackingPixelUrl;
    NSMutableData *_data;
    NSString *_slotID;
    AMAMetricManager *_metricManager;
}

+ (id)adManager;
@property(retain, nonatomic) AMAMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property(retain, nonatomic) NSString *slotID; // @synthesize slotID=_slotID;
@property(nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *metricTrackingPixelUrl; // @synthesize metricTrackingPixelUrl=_metricTrackingPixelUrl;
@property(copy, nonatomic) NSString *impressionPixelUrl; // @synthesize impressionPixelUrl=_impressionPixelUrl;
@property int loadStatus; // @synthesize loadStatus=_loadStatus;
- (void).cxx_destruct;
- (void)extractSpecialAdvTargetingOptions:(id)arg1;
- (void)errorHandler:(id)arg1;
- (_Bool)invalidSizeRequest:(id)arg1 containerSize:(id)arg2;
- (_Bool)invalidApplicationId:(id)arg1;
- (_Bool)noRetryForTTL:(id)arg1;
- (_Bool)invalidRequest:(id)arg1 adSize:(id)arg2 containerSize:(id)arg3;
- (void)recordMetricOnLoadAdFailure:(int)arg1;
- (int)retrieveLoadAdFailureMetricName:(int)arg1;
- (void)fireImpressionPixel;
- (void)openPrivateURL:(id)arg1;
- (_Bool)isAdExpanded;
- (void)didFailToLoadWithError:(id)arg1;
- (void)didLoad;
- (void)recordMetricsOnLoadAttempt;
- (void)loadAdWithRequest:(id)arg1;
- (void)loadWithOptions:(id)arg1 size:(id)arg2 containerSize:(id)arg3 forAd:(id)arg4;
- (void)loadWithOptions:(id)arg1 size:(id)arg2 forAd:(id)arg3;
- (id)init;

@end

