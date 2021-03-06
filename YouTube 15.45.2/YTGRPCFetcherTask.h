//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTFetcherTask-Protocol.h>

@class NSArray, NSString, NSURLRequest, YTFetcherTaskConfiguration;
@protocol GRXWriteable, OS_dispatch_queue;

@interface YTGRPCFetcherTask : NSObject <YTFetcherTask>
{
    NSString *_innerTubeDeveloperKey;
    NSURLRequest *_request;
    NSArray *_requestDecorators;
    YTFetcherTaskConfiguration *_configuration;
    id <GRXWriteable> _writeable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)resume;
- (id)initWithInnerTubeDeveloperKey:(id)arg1 request:(id)arg2 requestDecorators:(id)arg3 configuration:(id)arg4 writeable:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

