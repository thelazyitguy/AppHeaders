//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationModalPresentationMonitor-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTInstrumentationModalPresentationMonitor;

@interface SPTObservableInstrumentationModalPresentationMonitor : NSObject <SPTInstrumentationModalPresentationMonitor>
{
    id <SPTInstrumentationModalPresentationMonitor> _passThroughMonitor;
    SPTObserverManager *_observerManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTInstrumentationModalPresentationMonitor> passThroughMonitor; // @synthesize passThroughMonitor=_passThroughMonitor;
- (void)didDismissModalViewController:(id)arg1;
- (void)didPresentModalViewController:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPassThroughMonitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

