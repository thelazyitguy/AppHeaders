//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JAddOnsAddOnData, JAddOnsAddOnsManifest, JAddOnsOpenLink, JAddOnsSubmitFormResponse_Notification, JAddOnsUniversalAction, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataItemsItemsProto_AddOnDataForMessageOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JAddOnsAddOnsManifest *)getManifest;
- (_Bool)hasManifest;
- (int)getCacheTimeToLiveMillis;
- (_Bool)hasCacheTimeToLiveMillis;
- (NSString *)getDisplayName;
- (_Bool)hasDisplayName;
- (int)getPrimaryColor;
- (_Bool)hasPrimaryColor;
- (NSString *)getIconUrl;
- (_Bool)hasIconUrl;
- (JAddOnsSubmitFormResponse_Notification *)getNotification;
- (_Bool)hasNotification;
- (JAddOnsOpenLink *)getOpenLink;
- (_Bool)hasOpenLink;
- (NSString *)getAddOnId;
- (_Bool)hasAddOnId;
- (JAddOnsUniversalAction *)getUniversalActionsWithInt:(int)arg1;
- (id <JavaUtilList>)getUniversalActionsList;
- (int)getUniversalActionsCount;
- (JAddOnsAddOnData *)getContextualAddOn;
- (_Bool)hasContextualAddOn;
@end

