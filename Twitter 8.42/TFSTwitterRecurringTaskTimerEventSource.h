//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSTwitterDeferrableRecurringTaskEventSource-Protocol.h>

@class NSString, TFSTimer;

@interface TFSTwitterRecurringTaskTimerEventSource : NSObject <TFSTwitterDeferrableRecurringTaskEventSource>
{
    TFSTimer *_timer;
    double _timeInterval;
    _Bool _enabled;
    CDUnknownBlockType _trigger;
    _Bool _recurring;
    _Bool _restartOnAlternativeEventSourceBeingTriggered;
    long long _backgroundingBehavior;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool restartOnAlternativeEventSourceBeingTriggered; // @synthesize restartOnAlternativeEventSourceBeingTriggered=_restartOnAlternativeEventSourceBeingTriggered;
@property(readonly, nonatomic) long long backgroundingBehavior; // @synthesize backgroundingBehavior=_backgroundingBehavior;
@property(readonly, nonatomic) _Bool recurring; // @synthesize recurring=_recurring;
- (void)_tfs_queued_updateObserving;
- (void)_tfs_queued_stopObserving;
- (_Bool)tfs_shouldDeferObservingEventWhenAlternateEventSourceIsTriggeredForTask:(id)arg1;
- (void)tfs_deferObservingEventForTask:(id)arg1;
- (void)tfs_stopObservingEventForTask:(id)arg1;
- (void)tfs_startObservingEventForTask:(id)arg1 eventTrigger:(CDUnknownBlockType)arg2;
- (void)_tfs_fire:(id)arg1;
@property double timeInterval;
@property(getter=isEnabled) _Bool enabled;
- (id)initWithTimeInterval:(double)arg1 recurring:(_Bool)arg2 backgroundingBehavior:(long long)arg3 restartOnAlternativeEventSourceBeingTriggered:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

