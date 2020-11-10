//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APIConfiguration, APIState, NSDictionary, NSNumber, NSString;
@protocol NetflixUserAuthenticationData;

@interface APIRequest : NSObject
{
    _Bool _noRetries;
    unsigned long long _action;
    APIState *_stateData;
    NSNumber *_timeout;
    NSObject<NetflixUserAuthenticationData> *_userAuthData;
    unsigned long long _requestOptions;
    NSDictionary *_arguments;
    APIConfiguration *_configuration;
    NSDictionary *_data;
}

+ (id)bladeRunnerActionFTLBlacklist;
+ (unsigned long long)bladeRunnerActionFromString:(id)arg1;
+ (id)stringForAction:(unsigned long long)arg1;
+ (id)APIV2BatchRequestForAction:(unsigned long long)arg1 href:(id)arg2 configuration:(id)arg3 paramsArray:(id)arg4;
+ (id)APIV2RequestForAction:(unsigned long long)arg1 href:(id)arg2 configuration:(id)arg3 arguments:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) APIConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property(nonatomic) unsigned long long requestOptions; // @synthesize requestOptions=_requestOptions;
@property(retain, nonatomic) NSObject<NetflixUserAuthenticationData> *userAuthData; // @synthesize userAuthData=_userAuthData;
@property(nonatomic) _Bool noRetries; // @synthesize noRetries=_noRetries;
@property(copy, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) APIState *stateData; // @synthesize stateData=_stateData;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
- (id)paramsHeaders;
- (void)setConfigDataObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)serverTimeFromResponseBody:(id)arg1;
- (void)sendWithMslClient:(id)arg1 URLComponents:(id)arg2 headers:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)mslRequestWithURLComponents:(id)arg1 headers:(id)arg2 timeout:(id)arg3;
- (id)mslResponseFromJSON:(id)arg1;
@property(readonly, nonatomic) NSDictionary *message; // @dynamic message;
- (id)initForAction:(unsigned long long)arg1 href:(id)arg2 configuration:(id)arg3 arguments:(id)arg4;
- (id)bladeRunnerActionHeaderValue;
@property(readonly, nonatomic) NSString *actionName; // @dynamic actionName;

@end
