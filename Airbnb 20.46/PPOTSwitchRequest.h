//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PPOTSwitchRequest : NSObject
{
    NSNumber *_protocolVersion;
    NSString *_appGuid;
    NSString *_clientID;
    NSString *_environment;
    NSString *_callbackURLScheme;
    NSString *_clientMetadataID;
    NSString *_targetAppURLScheme;
    unsigned long long _responseType;
    NSString *_customURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customURL; // @synthesize customURL=_customURL;
@property(nonatomic) unsigned long long responseType; // @synthesize responseType=_responseType;
@property(retain, nonatomic) NSString *targetAppURLScheme; // @synthesize targetAppURLScheme=_targetAppURLScheme;
@property(readonly, nonatomic) NSString *clientMetadataID; // @synthesize clientMetadataID=_clientMetadataID;
@property(readonly, nonatomic) NSString *callbackURLScheme; // @synthesize callbackURLScheme=_callbackURLScheme;
@property(readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSString *appGuid; // @synthesize appGuid=_appGuid;
@property(readonly, nonatomic) NSNumber *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)addDataToPersistentRequestDataDictionary:(id)arg1;
- (id)encodedURL;
- (id)payloadDictionary;
- (id)initWithProtocolVersion:(id)arg1 appGuid:(id)arg2 clientID:(id)arg3 environment:(id)arg4 callbackURLScheme:(id)arg5 pairingId:(id)arg6;
- (id)initWithProtocolVersion:(id)arg1 appGuid:(id)arg2 clientID:(id)arg3 environment:(id)arg4 callbackURLScheme:(id)arg5;

@end
