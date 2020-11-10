//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTLiveVideoPlayerContextFactory-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTDataLoaderCancellationToken;

@interface SPTLiveVideoPlayerContextFactoryImpl : NSObject <SPTDataLoaderDelegate, SPTLiveVideoPlayerContextFactory>
{
    NSString *_eventId;
    CDUnknownBlockType _asyncContextCallback;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _dataLoaderCancellationToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> dataLoaderCancellationToken; // @synthesize dataLoaderCancellationToken=_dataLoaderCancellationToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) CDUnknownBlockType asyncContextCallback; // @synthesize asyncContextCallback=_asyncContextCallback;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (id)provideContextRestrictions;
- (id)formatMetadata:(id)arg1 forEventId:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)createPlayerContextAsyncWithEventId:(id)arg1 ctxCallback:(CDUnknownBlockType)arg2;
- (id)createPlayerContextWithEventId:(id)arg1 metadata:(id)arg2;
- (id)provideDefaultMetadata;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
