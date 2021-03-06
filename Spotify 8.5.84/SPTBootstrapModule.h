//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityServiceBootstrapDelegate-Protocol.h"

@class NSData, SPTBootstrapTestManager, SPTWebGate;
@protocol SPTEventSender, SPTRemoteConfigurationContext, SPTRemoteConfigurationCore;

@interface SPTBootstrapModule : NSObject <SPTConnectivityServiceBootstrapDelegate>
{
    SPTBootstrapTestManager *_testManager;
    id <SPTRemoteConfigurationContext> _remoteConfigurationContext;
    id <SPTEventSender> _eventSender;
    SPTWebGate *_webGate;
    id <SPTRemoteConfigurationCore> _remoteConfigurationCore;
    NSData *_remoteConfigurationData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *remoteConfigurationData; // @synthesize remoteConfigurationData=_remoteConfigurationData;
@property(retain, nonatomic) id <SPTRemoteConfigurationCore> remoteConfigurationCore; // @synthesize remoteConfigurationCore=_remoteConfigurationCore;
@property(retain, nonatomic) SPTWebGate *webGate; // @synthesize webGate=_webGate;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) id <SPTRemoteConfigurationContext> remoteConfigurationContext; // @synthesize remoteConfigurationContext=_remoteConfigurationContext;
@property(retain, nonatomic) SPTBootstrapTestManager *testManager; // @synthesize testManager=_testManager;
- (void)sendNonAuthenticatedEventWithProtobuf:(id)arg1;
- (id)createBootstrapRequestNonAuthWithErrorMessage:(id)arg1 httpCode:(int)arg2 errorReason:(id)arg3 latencyInSeconds:(double)arg4 payloadSize:(long long)arg5;
- (id)createBootstrapRequestNonAuthSuccess:(double)arg1 payloadSize:(long long)arg2;
- (id)responseFailureReason:(int)arg1;
- (void)parseWebGateResponse:(id)arg1 latencyInSeconds:(double)arg2;
- (id)createBootStrapRequestPayload;
- (id)createWebGateRequest;
- (void)connectivityServiceDidRequireBootstrapWithWebgate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)provideRemoteConfigurationPayload;
- (id)initWithRemoteConfigurationContext:(id)arg1 eventSender:(id)arg2 remoteConfigurationCore:(id)arg3 testManager:(id)arg4;

@end

