//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GPBMethodOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientLogging; // @dynamic clientLogging;
@property(nonatomic) _Bool clientStreaming; // @dynamic clientStreaming;
@property(nonatomic) double deadline; // @dynamic deadline;
@property(nonatomic) _Bool deprecated; // @dynamic deprecated;
@property(nonatomic) _Bool duplicateSuppression; // @dynamic duplicateSuppression;
@property(nonatomic) _Bool endUserCredsRequested; // @dynamic endUserCredsRequested;
@property(nonatomic) _Bool failFast; // @dynamic failFast;
@property(nonatomic) _Bool goLegacyChannelApi; // @dynamic goLegacyChannelApi;
@property(nonatomic) _Bool hasClientLogging; // @dynamic hasClientLogging;
@property(nonatomic) _Bool hasClientStreaming; // @dynamic hasClientStreaming;
@property(nonatomic) _Bool hasDeadline; // @dynamic hasDeadline;
@property(nonatomic) _Bool hasDeprecated; // @dynamic hasDeprecated;
@property(nonatomic) _Bool hasDuplicateSuppression; // @dynamic hasDuplicateSuppression;
@property(nonatomic) _Bool hasEndUserCredsRequested; // @dynamic hasEndUserCredsRequested;
@property(nonatomic) _Bool hasFailFast; // @dynamic hasFailFast;
@property(nonatomic) _Bool hasGoLegacyChannelApi; // @dynamic hasGoLegacyChannelApi;
@property(nonatomic) _Bool hasIdempotencyLevel; // @dynamic hasIdempotencyLevel;
@property(nonatomic) _Bool hasLegacyClientInitialTokens; // @dynamic hasLegacyClientInitialTokens;
@property(nonatomic) _Bool hasLegacyResultType; // @dynamic hasLegacyResultType;
@property(nonatomic) _Bool hasLegacyServerInitialTokens; // @dynamic hasLegacyServerInitialTokens;
@property(nonatomic) _Bool hasLegacyStreamType; // @dynamic hasLegacyStreamType;
@property(nonatomic) _Bool hasLegacyTokenUnit; // @dynamic hasLegacyTokenUnit;
@property(nonatomic) _Bool hasLogLevel; // @dynamic hasLogLevel;
@property(nonatomic) _Bool hasProtocol; // @dynamic hasProtocol;
@property(nonatomic) _Bool hasRequestFormat; // @dynamic hasRequestFormat;
@property(nonatomic) _Bool hasResponseFormat; // @dynamic hasResponseFormat;
@property(nonatomic) _Bool hasSecurityLabel; // @dynamic hasSecurityLabel;
@property(nonatomic) _Bool hasSecurityLevel; // @dynamic hasSecurityLevel;
@property(nonatomic) _Bool hasServerLogging; // @dynamic hasServerLogging;
@property(nonatomic) _Bool hasServerStreaming; // @dynamic hasServerStreaming;
@property(nonatomic) _Bool hasStreamType; // @dynamic hasStreamType;
@property(nonatomic) int idempotencyLevel; // @dynamic idempotencyLevel;
@property(nonatomic) long long legacyClientInitialTokens; // @dynamic legacyClientInitialTokens;
@property(copy, nonatomic) NSString *legacyResultType; // @dynamic legacyResultType;
@property(nonatomic) long long legacyServerInitialTokens; // @dynamic legacyServerInitialTokens;
@property(copy, nonatomic) NSString *legacyStreamType; // @dynamic legacyStreamType;
@property(nonatomic) int legacyTokenUnit; // @dynamic legacyTokenUnit;
@property(nonatomic) int logLevel; // @dynamic logLevel;
@property(nonatomic) int protocol; // @dynamic protocol;
@property(nonatomic) int requestFormat; // @dynamic requestFormat;
@property(nonatomic) int responseFormat; // @dynamic responseFormat;
@property(copy, nonatomic) NSString *securityLabel; // @dynamic securityLabel;
@property(nonatomic) int securityLevel; // @dynamic securityLevel;
@property(nonatomic) int serverLogging; // @dynamic serverLogging;
@property(nonatomic) _Bool serverStreaming; // @dynamic serverStreaming;
@property(copy, nonatomic) NSString *streamType; // @dynamic streamType;
@property(retain, nonatomic) NSMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;
@property(readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count; // @dynamic uninterpretedOptionArray_Count;

@end

