//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localytics/LLLogging.h>

@interface LLMarketingLogger : LLLogging
{
}

+ (id)sharedInstance;
- (id)convertOpToString:(unsigned long long)arg1;
- (id)getLogType:(id)arg1;
- (id)getCampaignName:(id)arg1;
- (void)logCampaignsDownloaded:(id)arg1 forType:(id)arg2;
- (void)logPlacesCampaignsChosenForDisplay:(id)arg1;
- (void)logPlacesCampaignsDisqualifiedDueToFQ:(id)arg1 region:(id)arg2 event:(long long)arg3;
- (void)logPlacesCampaignsFound:(id)arg1 region:(id)arg2 event:(long long)arg3;
- (void)logPlacesMessageDisplayed:(id)arg1;
- (void)logRichAttachmentDownloading:(id)arg1;
- (void)logRichAttachmentDownloadFailed:(id)arg1;
- (void)logRichAttachmentDownloaded:(id)arg1;
- (void)logNotificationSuppressed:(id)arg1 source:(id)arg2;
- (void)logInboxCampaignDisplayed:(id)arg1;
- (void)logInboxCampaignDeleted:(id)arg1;
- (void)logInboxCampaignRead:(id)arg1 read:(_Bool)arg2;
- (void)logInboxCampaignsQueried:(_Bool)arg1 filter:(id)arg2;
- (void)logPTISaved:(id)arg1;
- (void)logPTIDropped:(long long)arg1 expiration:(id)arg2 deeplink:(id)arg3 reason:(id)arg4;
- (void)logPTIDelete:(id)arg1;
- (void)logPTIMessageReceived;
- (void)logNotificationOpened:(id)arg1 action:(id)arg2 isPush:(_Bool)arg3;
- (void)logNotificationReceived:(id)arg1 isPush:(_Bool)arg2;
- (void)logDeeplinkFired:(id)arg1 toURL:(id)arg2;
- (void)logDeeplinkSuppressed:(id)arg1 toURL:(id)arg2 reason:(id)arg3;
- (void)logInternalWebviewNavigation:(id)arg1 toURL:(id)arg2;
- (void)logSessionStartCampaignsFired:(_Bool)arg1;
- (void)logSessionStartCampaignsDelayed;
- (void)logWebViewImpression:(id)arg1 withAction:(id)arg2 from:(id)arg3;
- (void)logInAppDisplayed:(id)arg1 withConfig:(id)arg2;
- (void)logControlGroup:(id)arg1;
- (void)logInAppSuppressedByListener:(id)arg1;
- (void)logInAppChosenForDisplay:(id)arg1 event:(id)arg2 attribute:(id)arg3;
- (void)logInAppConditionMismatch:(long long)arg1 conditionType:(id)arg2 operator:(unsigned long long)arg3 name:(id)arg4 expected:(id)arg5 actual:(id)arg6;
- (void)logInAppsDisqualified:(id)arg1 forTrigger:(id)arg2;
- (void)logInAppsFound:(id)arg1 forTrigger:(id)arg2;
- (void)logInAppTrigger:(id)arg1 attributes:(id)arg2 type:(id)arg3;

@end
