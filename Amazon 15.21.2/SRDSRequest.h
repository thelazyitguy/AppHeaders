//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequestBase.h"

@class NSString, SRDSClientConfigDefaults;
@protocol SRDSClientConfigRequired;

@interface SRDSRequest : SCRequestBase
{
    struct SRDSClientConfigDefaults *_config;
    NSString *_clientId;
    long long _dataVersion;
    long long _server;
    NSString *_serverOverride;
    long long _marketplace;
}

@property(nonatomic) long long marketplace; // @synthesize marketplace=_marketplace;
@property(retain, nonatomic) NSString *serverOverride; // @synthesize serverOverride=_serverOverride;
@property(nonatomic) long long server; // @synthesize server=_server;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) SRDSClientConfigDefaults<SRDSClientConfigRequired> *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)queryString;
- (id)domain;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *responseJSON;

@end

