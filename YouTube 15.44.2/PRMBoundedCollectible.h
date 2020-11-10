//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/PRMCollectible.h>

#import <Module_Framework/PRMBoundedCollectible-Protocol.h>

@class NSString, PRMEventContext, PRMMetricExtension;

@interface PRMBoundedCollectible : PRMCollectible <PRMBoundedCollectible>
{
    PRMEventContext *_eventContext;
    PRMMetricExtension *_metricExtension;
}

- (void).cxx_destruct;
- (void)stopCollecting;
- (void)stopCollectingWithMetricExtension:(id)arg1;
- (void)startCollecting;
- (void)startCollectingWithMetricExtension:(id)arg1;
- (id)initWithEventContext:(id)arg1;
- (id)initWithEventContext:(id)arg1 metricExtension:(id)arg2;
- (id)initWithManager:(id)arg1 eventContext:(id)arg2 metricExtension:(id)arg3;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, getter=isCollecting) _Bool collecting;
@property(readonly) _Bool collectionCompleted;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

