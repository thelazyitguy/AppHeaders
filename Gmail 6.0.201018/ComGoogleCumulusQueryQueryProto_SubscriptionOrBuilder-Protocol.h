//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufGeneratedMessage_ExtendableMessageOrBuilder-Protocol.h"

@class ComGoogleCumulusQueryQueryProto_Query, ComGoogleCumulusQueryQueryProto_Subscription_NotificationState, NSString;

@protocol ComGoogleCumulusQueryQueryProto_SubscriptionOrBuilder <ComGoogleProtobufGeneratedMessage_ExtendableMessageOrBuilder>
- (_Bool)getSendQueryForNotification;
- (_Bool)hasSendQueryForNotification;
- (ComGoogleCumulusQueryQueryProto_Subscription_NotificationState *)getNotificationState;
- (_Bool)hasNotificationState;
- (int)getMaxObjectCountPerRequest;
- (_Bool)hasMaxObjectCountPerRequest;
- (int)getWatermarkVersion;
- (_Bool)hasWatermarkVersion;
- (NSString *)getLowWatermark;
- (_Bool)hasLowWatermark;
- (NSString *)getHighWatermark;
- (_Bool)hasHighWatermark;
- (_Bool)getSendQueryForRange;
- (_Bool)hasSendQueryForRange;
- (ComGoogleCumulusQueryQueryProto_Query *)getQuery;
- (_Bool)hasQuery;
@end
