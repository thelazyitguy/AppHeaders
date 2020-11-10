//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DataBrokerObjectContext;
@protocol BillboardPredictionDataUpdateDelegate;

@interface BillboardPredictionFetcher : NSObject
{
    long long expiryTimeInMsec;
    id <BillboardPredictionDataUpdateDelegate> _delegate;
    double _delay;
    DataBrokerObjectContext *_objectContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DataBrokerObjectContext *objectContext; // @synthesize objectContext=_objectContext;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) __weak id <BillboardPredictionDataUpdateDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getPredictedVideoSchedules;
- (void)successCallback;
- (void)performFetch;
- (void)fetch;
- (id)getPredictionKeyPaths;
- (id)initWithObjectContext:(id)arg1 debounceInterval:(double)arg2;

@end
