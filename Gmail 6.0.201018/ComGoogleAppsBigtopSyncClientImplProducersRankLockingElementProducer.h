//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplProducersFilteringElementProducer.h"

@class ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory;
@protocol ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor, JavaUtilMap;

@interface ComGoogleAppsBigtopSyncClientImplProducersRankLockingElementProducer : ComGoogleAppsBigtopSyncClientImplProducersFilteringElementProducer
{
    id <JavaUtilMap> lockedElements_;
    id <ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor> liveListAdaptor_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory *messageVisibilityHelperFactory_;
    _Bool isStarted_;
}

+ (void)initialize;
- (void)dealloc;
- (id)filterWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1;
- (_Bool)doesElementHaveDeferredRankChangeWithJBTId:(id)arg1;
- (void)unlockWithJBTId:(id)arg1 withJBTSpan:(id)arg2;
- (void)lockWithJBTId:(id)arg1 withNSString:(id)arg2;
- (_Bool)isElementLockedWithJBTId:(id)arg1;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;

@end
