//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTIClientEndpointBuilderData, YTIOfflineFutureUnplayableInfo;

@interface YTIOfflineVideoPolicyEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) long long expirationTimestamp; // @dynamic expirationTimestamp;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasExpirationTimestamp; // @dynamic hasExpirationTimestamp;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasLastUpdatedTimestampSeconds; // @dynamic hasLastUpdatedTimestampSeconds;
@property(nonatomic) _Bool hasOfflineFutureUnplayableInfo; // @dynamic hasOfflineFutureUnplayableInfo;
@property(nonatomic) _Bool hasOfflineStateBytes; // @dynamic hasOfflineStateBytes;
@property(nonatomic) _Bool hasOnTapCommandOverrideData; // @dynamic hasOnTapCommandOverrideData;
@property(nonatomic) _Bool hasShortMessageForDisabledAction; // @dynamic hasShortMessageForDisabledAction;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) long long lastUpdatedTimestampSeconds; // @dynamic lastUpdatedTimestampSeconds;
@property(retain, nonatomic) YTIOfflineFutureUnplayableInfo *offlineFutureUnplayableInfo; // @dynamic offlineFutureUnplayableInfo;
@property(copy, nonatomic) NSData *offlineStateBytes; // @dynamic offlineStateBytes;
@property(retain, nonatomic) YTIClientEndpointBuilderData *onTapCommandOverrideData; // @dynamic onTapCommandOverrideData;
@property(copy, nonatomic) NSString *shortMessageForDisabledAction; // @dynamic shortMessageForDisabledAction;

@end
