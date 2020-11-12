//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GRPCInterceptorInterface-Protocol.h>
#import <Module_Framework/GRPCResponseHandler-Protocol.h>

@class GRPCInterceptorManager, NSString;
@protocol OS_dispatch_queue;

@interface GRPCInterceptor : NSObject <GRPCInterceptorInterface, GRPCResponseHandler>
{
    GRPCInterceptorManager *_manager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (void)didWriteData;
- (void)didCloseWithTrailingMetadata:(id)arg1 error:(id)arg2;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveRawMessage:(id)arg1;
- (void)didReceiveInitialMetadata:(id)arg1;
- (void)receiveNextMessages:(unsigned long long)arg1;
- (void)cancel;
- (void)finish;
- (void)writeData:(id)arg1;
- (void)startWithRequestOptions:(id)arg1 callOptions:(id)arg2;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
- (id)initWithInterceptorManager:(id)arg1 dispatchQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
