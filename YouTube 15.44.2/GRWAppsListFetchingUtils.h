//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRWAppsListFetchingUtils : NSObject
{
}

+ (void)setLastFetchDateSystemAppsListAPI:(id)arg1;
+ (id)lastFetchDateSystemAppsListAPI;
+ (void)setLastFetchDateAppsListAPI:(id)arg1;
+ (id)lastFetchDateAppsListAPI;
+ (double)appsListFetchingCooldownInterval;
+ (void)saveLastLanguageAndLocaleUsedWithSystemAppsListFetch;
+ (void)saveLastLanguageAndLocaleUsedWithAppsListFetch;
+ (_Bool)shouldLoadSystemApps;
+ (_Bool)shouldFetchFromAppsListAPI;

@end

