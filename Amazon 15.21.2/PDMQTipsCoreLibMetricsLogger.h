//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDMQTipsCoreLibMetricsLogger : NSObject
{
}

+ (void)addCounterWithName:(id)arg1 triggerName:(id)arg2;
+ (id)generateMetric:(id)arg1;
+ (void)logQTipsFetchElementsNetworkCallFailedEventForPage:(long long)arg1;
+ (void)logQTipsFetchElementsNetworkCallSuccessEventForPage:(long long)arg1;
+ (void)logShoppingAidsFailed:(id)arg1;
+ (void)logShoppingAidsElementShown:(id)arg1;
+ (void)logQTipsElementShownEventForPageType:(long long)arg1;
+ (void)logQTipsEvent:(id)arg1;
+ (void)configureObservers;

@end
