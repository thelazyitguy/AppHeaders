//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/FCDRPCRequestBase.h>

#import <ChromeInternal/FCDStreamingResponse-Protocol.h>

@class NSString;
@protocol FCDStreamingResponseHandler;

@interface FCDBidirectionalStreamingRPCRequest : FCDRPCRequestBase <FCDStreamingResponse>
{
    id <FCDStreamingResponseHandler> _streamingResponseHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCDStreamingResponseHandler> streamingResponseHandler; // @synthesize streamingResponseHandler=_streamingResponseHandler;
@property(readonly, copy) NSString *description;
- (id)initWithRPC:(id)arg1 responseHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
