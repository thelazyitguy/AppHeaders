//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncCallable-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplProducersAbstractBtdElementProducer, ComGoogleAppsBigtopSyncClientImplProducersAbstractBtdElementProducer_UpdateReason, ComGoogleCommonBaseOptional, NSString;
@protocol JBTSpan;

@interface ComGoogleAppsBigtopSyncClientImplProducersAbstractBtdElementProducer_2 : NSObject <ComGoogleCommonUtilConcurrentAsyncCallable>
{
    ComGoogleAppsBigtopSyncClientImplProducersAbstractBtdElementProducer *this$0_;
    ComGoogleAppsBigtopSyncClientImplProducersAbstractBtdElementProducer_UpdateReason *val$reason_;
    ComGoogleCommonBaseOptional *val$update_;
    id <JBTSpan> val$span_;
}

- (void)dealloc;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

