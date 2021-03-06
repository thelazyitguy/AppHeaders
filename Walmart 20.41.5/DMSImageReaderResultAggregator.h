//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DMSDK/DMSImageDetectorResultAggregator-Protocol.h>

@class DMSReaderResult, NSCache, NSString;

@interface DMSImageReaderResultAggregator : NSObject <DMSImageDetectorResultAggregator>
{
    NSCache *_payloadCache;
    DMSReaderResult *_readerResult;
}

@property(retain) DMSReaderResult *readerResult; // @synthesize readerResult=_readerResult;
@property(retain) NSCache *payloadCache; // @synthesize payloadCache=_payloadCache;
- (void).cxx_destruct;
- (void)addOperation:(id)arg1 fromDetector:(id)arg2;
- (void)addError:(id)arg1 fromDetector:(id)arg2;
- (void)addPayload:(id)arg1 payloadMetadata:(id)arg2 fromDetector:(id)arg3;
- (id)initWithReaderResult:(id)arg1 payloadCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

