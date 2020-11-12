//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/FCDRPCOperation-Protocol.h>

@class FCDRPCBackgroundTask, FCDRPCContext, FCDRPCRequest, FCDRPCService, NSString;
@protocol FCDInterceptorOperation, FCDRPCTransportOperation;

@interface FCDRPCOperation : NSObject <FCDRPCOperation>
{
    _Bool _finished;
    _Bool _cancelled;
    FCDRPCBackgroundTask *_backgroundTask;
    FCDRPCService *_service;
    FCDRPCRequest *_initialRequest;
    FCDRPCContext *_initialContext;
    id <FCDRPCTransportOperation> _transportOperation;
    id <FCDInterceptorOperation> _interceptorOperation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCDInterceptorOperation> interceptorOperation; // @synthesize interceptorOperation=_interceptorOperation;
@property(retain) id <FCDRPCTransportOperation> transportOperation; // @synthesize transportOperation=_transportOperation;
@property(readonly, nonatomic) FCDRPCContext *initialContext; // @synthesize initialContext=_initialContext;
@property(readonly, nonatomic) FCDRPCRequest *initialRequest; // @synthesize initialRequest=_initialRequest;
@property(readonly, nonatomic) FCDRPCService *service; // @synthesize service=_service;
@property(readonly, nonatomic) FCDRPCBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
- (void)finishWithResponse:(id)arg1;
- (void)runUncancellableBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (id)initWithRPCService:(id)arg1 initialRequest:(id)arg2 initialContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
