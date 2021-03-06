//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localytics/NSObject-Protocol.h>

@class CLLocationManager, LLCampaignBase, NSURL;

@protocol LLCallToActionDelegate <NSObject>

@optional
- (void)requestWhenInUseAuthorization:(CLLocationManager *)arg1;
- (void)requestAlwaysAuthorization:(CLLocationManager *)arg1;
- (_Bool)localyticsShouldDeeplinkToSettings:(LLCampaignBase *)arg1;
- (_Bool)localyticsShouldPromptForNotificationPermissions:(LLCampaignBase *)arg1;
- (_Bool)localyticsShouldPromptForLocationAlwaysPermissions:(LLCampaignBase *)arg1;
- (_Bool)localyticsShouldPromptForLocationWhenInUsePermissions:(LLCampaignBase *)arg1;
- (void)localyticsDidPrivacyOptOut:(_Bool)arg1 campaign:(LLCampaignBase *)arg2;
- (void)localyticsDidOptOut:(_Bool)arg1 campaign:(LLCampaignBase *)arg2;
- (_Bool)localyticsShouldDeeplink:(NSURL *)arg1 campaign:(LLCampaignBase *)arg2;
@end

