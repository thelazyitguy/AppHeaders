//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopCommonLoggingBigtopVisualElementEvent_BigTopVisualElementEvent, ComGoogleAppsBigtopCommonLoggingBigtopVisualElementEvent_BigTopVisualElementMetadata, ComGoogleAppsBigtopCommonLoggingCountersMetadata, ComGoogleCommonLoggingAncestryVisualElement_AncestryVisualElementProto, ComGoogleCommonLoggingNotificationEventProto_ClientNotificationsSettings, ComGoogleCommonLoggingNotificationEventProto_NotificationEvent, ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfo, ComGoogleProtosBigtopLoggingClientMemoryInfoOuterClass_ClientMemoryInfo, JBTLAccountInfo, JBTLBigtopClientExtension_BigTopClientEntry_MolesMetadata, JBTLBigtopClientExtension_MessageDeliveryEvent, JBTLBigtopClientExtension_SyncHealth, JBTLCounterGroup, JBTLIosClientHealthEvent, JBTLLatencyMeasurementGroup, JBTLUserAction;
@protocol JavaUtilList;

@protocol JBTLBigtopClientExtension_BigTopClientEntryOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopCommonLoggingBigtopVisualElementEvent_BigTopVisualElementEvent *)getVisualElementEvent;
- (_Bool)hasVisualElementEvent;
- (ComGoogleAppsBigtopCommonLoggingCountersMetadata *)getCountersMetadata;
- (_Bool)hasCountersMetadata;
- (ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfo *)getClientFrameRateInfo;
- (_Bool)hasClientFrameRateInfo;
- (JBTLBigtopClientExtension_BigTopClientEntry_MolesMetadata *)getMolesMetadata;
- (_Bool)hasMolesMetadata;
- (ComGoogleProtosBigtopLoggingClientMemoryInfoOuterClass_ClientMemoryInfo *)getClientMemoryInfo;
- (_Bool)hasClientMemoryInfo;
- (JBTLBigtopClientExtension_MessageDeliveryEvent *)getMessageDeliveryEvent;
- (_Bool)hasMessageDeliveryEvent;
- (JBTLIosClientHealthEvent *)getIosClientHealthEvent;
- (_Bool)hasIosClientHealthEvent;
- (JBTLAccountInfo *)getAccountsAtAppStartWithInt:(int)arg1;
- (id <JavaUtilList>)getAccountsAtAppStartList;
- (int)getAccountsAtAppStartCount;
- (JBTLUserAction *)getUserActionsWithInt:(int)arg1;
- (id <JavaUtilList>)getUserActionsList;
- (int)getUserActionsCount;
- (JBTLCounterGroup *)getCounterGroupsWithInt:(int)arg1;
- (id <JavaUtilList>)getCounterGroupsList;
- (int)getCounterGroupsCount;
- (JBTLLatencyMeasurementGroup *)getLatencyMeasurementGroupsWithInt:(int)arg1;
- (id <JavaUtilList>)getLatencyMeasurementGroupsList;
- (int)getLatencyMeasurementGroupsCount;
- (ComGoogleCommonLoggingNotificationEventProto_ClientNotificationsSettings *)getClientNotificationsSettings;
- (_Bool)hasClientNotificationsSettings;
- (ComGoogleCommonLoggingNotificationEventProto_NotificationEvent *)getNotificationEvent;
- (_Bool)hasNotificationEvent;
- (JBTLBigtopClientExtension_SyncHealth *)getSyncHealth;
- (_Bool)hasSyncHealth;
- (ComGoogleAppsBigtopCommonLoggingBigtopVisualElementEvent_BigTopVisualElementMetadata *)getVisualElementMetadata;
- (_Bool)hasVisualElementMetadata;
- (ComGoogleCommonLoggingAncestryVisualElement_AncestryVisualElementProto *)getAncestryVisualElement;
- (_Bool)hasAncestryVisualElement;
@end
