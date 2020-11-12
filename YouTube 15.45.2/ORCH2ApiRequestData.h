//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData;

@interface ORCH2ApiRequestData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int HTTPStatusCode; // @dynamic HTTPStatusCode;
@property(copy, nonatomic) NSData *clientLogToken; // @dynamic clientLogToken;
@property(copy, nonatomic) NSData *clientRenderingLogToken; // @dynamic clientRenderingLogToken;
@property(nonatomic) long long clientRequestId; // @dynamic clientRequestId;
@property(nonatomic) int endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasClientLogToken; // @dynamic hasClientLogToken;
@property(nonatomic) _Bool hasClientRenderingLogToken; // @dynamic hasClientRenderingLogToken;
@property(nonatomic) _Bool hasClientRequestId; // @dynamic hasClientRequestId;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasHTTPStatusCode; // @dynamic hasHTTPStatusCode;
@property(nonatomic) _Bool hasTemplateUsage; // @dynamic hasTemplateUsage;
@property(nonatomic) int templateUsage; // @dynamic templateUsage;

@end
