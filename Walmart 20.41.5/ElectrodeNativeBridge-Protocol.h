//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/NSObject-Protocol.h>

@class ElectrodeBridgeEvent, ElectrodeBridgeRequest, NSString, NSUUID;
@protocol ConstantsProvider;

@protocol ElectrodeNativeBridge <NSObject>
- (void)addConstantsProvider:(id <ConstantsProvider>)arg1;
- (void (^)(id))removeEventListnerWithUUID:(NSUUID *)arg1;
- (void)registerEventListenerWithName:(NSString *)arg1 uuid:(NSUUID *)arg2 listener:(void (^)(id))arg3;
- (void)sendEvent:(ElectrodeBridgeEvent *)arg1;
- (void (^)(id, void (^)(id, id <ElectrodeFailureMessage>)))unregisterRequestHandlerWithUUID:(NSUUID *)arg1;
- (void)registerRequestCompletionHandlerWithName:(NSString *)arg1 uuid:(NSUUID *)arg2 completion:(void (^)(id, void (^)(id, id <ElectrodeFailureMessage>)))arg3;
- (void)sendRequest:(ElectrodeBridgeRequest *)arg1 completionHandler:(void (^)(id, id <ElectrodeFailureMessage>))arg2;
@end
