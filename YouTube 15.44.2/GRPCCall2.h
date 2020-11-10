//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRPCCallOptions, GRPCRequestOptions;
@protocol GRPCInterceptorInterface, GRPCResponseHandler;

@interface GRPCCall2 : NSObject
{
    id <GRPCResponseHandler> _responseHandler;
    id <GRPCInterceptorInterface> _firstInterceptor;
    GRPCCallOptions *_actualCallOptions;
    GRPCCallOptions *_callOptions;
    GRPCRequestOptions *_requestOptions;
}

+ (id)globalInterceptorFactory;
+ (void)registerGlobalInterceptor:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) GRPCRequestOptions *requestOptions; // @synthesize requestOptions=_requestOptions;
@property(readonly, copy) GRPCCallOptions *callOptions; // @synthesize callOptions=_callOptions;
- (void)receiveNextMessages:(unsigned long long)arg1;
- (void)finish;
- (void)writeData:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithRequestOptions:(id)arg1 responseHandler:(id)arg2;
- (id)initWithRequestOptions:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;

@end

