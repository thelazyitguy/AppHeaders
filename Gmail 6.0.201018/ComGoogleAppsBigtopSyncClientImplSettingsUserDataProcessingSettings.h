//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ComGoogleCommonTimeClock, JBTSettingsClient;

@interface ComGoogleAppsBigtopSyncClientImplSettingsUserDataProcessingSettings : NSObject
{
    id <JBTSettingsClient> settingsClient_;
    id <ComGoogleCommonTimeClock> clock_;
}

+ (void)initialize;
- (void)dealloc;
- (id)dismissPostPermissionsSearchBanner;
- (_Bool)shouldShowPostPermissionsSearchBanner;
- (_Bool)shouldDisableSmartInboxConfigurationTypes;
- (_Bool)shouldShowPostPermissionsBannerInAllInboxes;
- (id)dismissPostPermissionsBanner;
- (_Bool)isPostPermissionsBannerDismissibleWithNSString:(id)arg1;
- (_Bool)shouldShowPostPermissionsBannerWithNSString:(id)arg1;
- (id)setUserDataProcessingWithJBTUserDataProcessing_ProcessingState:(id)arg1 withJBTUserDataProcessing_ProcessingState:(id)arg2;
- (id)getUserDataProcessing;

@end
