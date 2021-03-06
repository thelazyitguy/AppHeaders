//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ANXMetricsService, ANXWeblabTriggerService;

@interface WonderlandChevronUtil : NSObject
{
    unsigned char _chevronShown;
    id <ANXMetricsService> _metricsService;
    id <ANXWeblabTriggerService> _weblabService;
}

+ (id)sharedChevronUtil;
@property(retain, nonatomic) id <ANXWeblabTriggerService> weblabService; // @synthesize weblabService=_weblabService;
@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(nonatomic) unsigned char chevronShown; // @synthesize chevronShown=_chevronShown;
- (void).cxx_destruct;
- (void)logChevronShowCountExhaustedMetrics;
- (void)logChevronHideMetrics;
- (void)logChevronClickMetrics;
- (void)logChevronShownMetrics;
- (void)updateChevronServerConfig:(id)arg1;
- (void)updateChevronShownCount;
- (void)updateLastWonderlandShownDate;
- (void)checkAndResetChevronPreference:(long long)arg1;
- (unsigned char)chevronValid;
- (unsigned char)chevronV2WeblabEnabled;
- (unsigned char)chevronWeblabEnabled;
- (id)chevronV2TreatmentAndTrigger;
- (id)chevronV1TreatmentAndTrigger;
- (id)init;

@end

