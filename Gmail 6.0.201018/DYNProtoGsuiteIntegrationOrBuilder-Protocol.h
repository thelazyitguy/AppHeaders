//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoGsuiteIntegrationClientType, DYNProtoGsuiteIntegration_DataCase, DYNProtoMeetGsuiteIntegrationData;

@protocol DYNProtoGsuiteIntegrationOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoGsuiteIntegration_DataCase *)getDataCase;
- (DYNProtoMeetGsuiteIntegrationData *)getMeetData;
- (_Bool)hasMeetData;
- (DYNProtoGsuiteIntegrationClientType *)getClientType;
- (_Bool)hasClientType;
@end
