//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsDynamiteV1SharedSharedDriveSpaceIntegrationPayload, ComGoogleAppsDynamiteV1SharedSpaceIntegrationPayload_PayloadCase, ComGoogleAppsDynamiteV1SharedSpaceIntegrationPayload_PayloadType, ComGoogleAppsDynamiteV1SharedTasksSpaceIntegrationPayload;

@protocol ComGoogleAppsDynamiteV1SharedSpaceIntegrationPayloadOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsDynamiteV1SharedSpaceIntegrationPayload_PayloadCase *)getPayloadCase;
- (long long)getProjectNumber;
- (_Bool)hasProjectNumber;
- (ComGoogleAppsDynamiteV1SharedSharedDriveSpaceIntegrationPayload *)getSharedDriveIntegrationPayload;
- (_Bool)hasSharedDriveIntegrationPayload;
- (ComGoogleAppsDynamiteV1SharedTasksSpaceIntegrationPayload *)getTasksIntegrationPayload;
- (_Bool)hasTasksIntegrationPayload;
- (ComGoogleAppsDynamiteV1SharedSpaceIntegrationPayload_PayloadType *)getType;
- (_Bool)hasType;
@end

