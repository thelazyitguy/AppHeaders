//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ComGoogleAppsXplatObserveSettable;

@interface ComGoogleAppsBigtopDataEventEventComponent : NSObject
{
    id <ComGoogleAppsXplatObserveSettable> changeRequestedSettable_;
    id <ComGoogleAppsXplatObserveSettable> nonOptimisticChangeRequestedSettable_;
    id <ComGoogleAppsXplatObserveSettable> begunProcessingMessageDetailsFetchQueueSettable_;
    id <ComGoogleAppsXplatObserveSettable> processedInitialMessageDetailsFetchesInQueueSettable_;
}

- (void)dealloc;
- (id)getProcessedInitialMessageDetailsFetchesInQueueObservable;
- (id)getProcessedInitialMessageDetailsFetchesInQueueSettable;
- (id)getBegunProcessingMessageDetailsFetchQueueObservable;
- (id)getBegunProcessingMessageDetailsFetchQueueSettable;
- (id)getNonOptimisticChangeRequestedObservable;
- (id)getNonOptimisticChangeRequestedSettable;
- (id)getChangeRequestedObservable;
- (id)getChangeRequestedSettable;

@end
