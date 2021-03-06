//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASMDataProvider-Protocol.h"

@class NSString;
@protocol ASMEventLogger, ASMRPCService;

@interface ASMDataProviderImplementation : NSObject <ASMDataProvider>
{
    id <ASMEventLogger> _eventLogger;
    id <ASMRPCService> _rpcService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <ASMRPCService> rpcService; // @synthesize rpcService=_rpcService;
@property(readonly, nonatomic) id <ASMEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
- (id)hostnameForEnvironment:(long long)arg1;
- (id)contextForOptions:(id)arg1;
- (void)getResource:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getClientConfig:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithEventLogger:(id)arg1 RPCService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

