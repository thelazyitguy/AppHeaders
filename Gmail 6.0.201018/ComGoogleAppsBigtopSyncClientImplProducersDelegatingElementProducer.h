//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducer-Protocol.h"

@class ComGoogleAppsBigtopCommonUtilLifecycleTracker, ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory, ComGoogleAppsBigtopSyncClientImplProducersDelegatingElementProducer_StartConfig, ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, ComGoogleCommonBaseOptional, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplProducersElementProducerDelegate, JavaUtilMap, JavaUtilSet;

@interface ComGoogleAppsBigtopSyncClientImplProducersDelegatingElementProducer : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducer>
{
    id <JavaUtilMap> elementsMap_;
    _Bool hasMore_;
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *config_;
    ComGoogleCommonBaseOptional *listener_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducerDelegate> delegate_;
    ComGoogleAppsBigtopCommonUtilLifecycleTracker *lifecycleTracker_;
    id <JavaUtilSet> outstandingCallbacks_;
    ComGoogleAppsBigtopSyncClientImplProducersDelegatingElementProducer_StartConfig *startConfig_;
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory *messageVisibilityHelperFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (void)updateElementsWithComGoogleAppsBigtopSyncClientImplProducersElementProducerDelegate_ElementsResult:(id)arg1 withJBTSpan:(id)arg2;
- (id)acceptVisitorWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor:(id)arg1;
- (_Bool)isExpectingRemoteResults;
- (_Bool)isExpectingMoreChanges;
- (id)getQueryStrings;
- (id)getConfig;
- (void)updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)hasMore;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;
- (void)clearListener;
- (void)setListenerWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
