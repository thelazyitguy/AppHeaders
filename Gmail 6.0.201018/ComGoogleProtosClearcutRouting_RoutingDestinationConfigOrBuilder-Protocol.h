//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleProtosClearcutRouting_FootprintsRoutingDestination, ComGoogleProtosClearcutRouting_LogSamplingConfig, ComGoogleProtosClearcutRouting_Pubsub2RoutingDestination, ComGoogleProtosClearcutRouting_RoutingDestinationConfig_BackendCase, ComGoogleProtosClearcutRouting_RoutingDestinationConfig_OnOffState, ComGoogleProtosClearcutRouting_RpcBackendServerRoutingConfig, ComGoogleProtosClearcutRouting_SawmillRoutingDestination, NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol ComGoogleProtosClearcutRouting_RoutingDestinationConfigOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleProtosClearcutRouting_RoutingDestinationConfig_BackendCase *)getBackendCase;
- (ComGoogleProtosClearcutRouting_RpcBackendServerRoutingConfig *)getRpcBackendServerRoutingConfig;
- (_Bool)hasRpcBackendServerRoutingConfig;
- (ComGoogleProtosClearcutRouting_Pubsub2RoutingDestination *)getPubsub2;
- (_Bool)hasPubsub2;
- (ComGoogleProtosClearcutRouting_FootprintsRoutingDestination *)getFootprints;
- (_Bool)hasFootprints;
- (ComGoogleProtosClearcutRouting_SawmillRoutingDestination *)getSawmill;
- (_Bool)hasSawmill;
- (NSString *)getClientTypeWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getClientTypeList;
- (int)getClientTypeCount;
- (ComGoogleProtosClearcutRouting_LogSamplingConfig *)getManualSampling;
- (_Bool)hasManualSampling;
- (ComGoogleProtosClearcutRouting_LogSamplingConfig *)getSampling;
- (_Bool)hasSampling;
- (ComGoogleProtosClearcutRouting_RoutingDestinationConfig_OnOffState *)getWhenZwiebackIdIs;
- (_Bool)hasWhenZwiebackIdIs;
- (ComGoogleProtosClearcutRouting_RoutingDestinationConfig_OnOffState *)getWhenGaiaIdIs;
- (_Bool)hasWhenGaiaIdIs;
- (ComGoogleProtosClearcutRouting_RoutingDestinationConfig_OnOffState *)getWhenWebHistoryIs;
- (_Bool)hasWhenWebHistoryIs;
- (NSString *)getName;
- (_Bool)hasName;
@end

