//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APIStateStore, NSURLComponents, NflxTimer;
@protocol APIClientDelegate, IMslClient, OS_dispatch_queue, UserAuthenticationDataProvider;

@interface APIClient : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NflxTimer *_timer;
    APIStateStore *_stateStore;
    NSObject<UserAuthenticationDataProvider> *_userAuthDataProvider;
    id <APIClientDelegate> _apiClientDelegate;
    NSURLComponents *_baseURLComponents;
    NSObject<IMslClient> *_mslClient;
}

+ (id)bladeRunnerActionHeaderKey;
+ (id)bladeRunnerActionPDSKeepAliveValue;
+ (id)bladeRunnerActionPDSOtherValue;
+ (id)stringForNFLXDRMType:(unsigned long long)arg1;
+ (id)baseQueryKeys;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<IMslClient> *mslClient; // @synthesize mslClient=_mslClient;
@property(readonly, nonatomic) NSURLComponents *baseURLComponents; // @synthesize baseURLComponents=_baseURLComponents;
@property(nonatomic) __weak id <APIClientDelegate> apiClientDelegate; // @synthesize apiClientDelegate=_apiClientDelegate;
@property(retain, nonatomic) NSObject<UserAuthenticationDataProvider> *userAuthDataProvider; // @synthesize userAuthDataProvider=_userAuthDataProvider;
@property(readonly, nonatomic) __weak APIStateStore *stateStore; // @synthesize stateStore=_stateStore;
- (void)tryRequest:(id)arg1 URLComponents:(id)arg2 attemptNumber:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;
- (void)sendRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)ensureUserAuthDataForRequest:(id)arg1;
@property(readonly, nonatomic) NflxTimer *timer; // @synthesize timer=_timer;
- (id)initWithConfiguration:(id)arg1 stateStore:(id)arg2 userAuthDataProvider:(id)arg3 mslClient:(id)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;

@end
