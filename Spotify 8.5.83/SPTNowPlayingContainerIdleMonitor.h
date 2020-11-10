//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingContainerIdleMonitorObservable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SPTObserverManager, UITapGestureRecognizer;
@protocol SPTNowPlayingContainerIdleMonitorLoggingDelegate;

@interface SPTNowPlayingContainerIdleMonitor : NSObject <UIGestureRecognizerDelegate, SPTNowPlayingContainerIdleMonitorObservable>
{
    _Bool _idle;
    _Bool _monitoring;
    id <SPTNowPlayingContainerIdleMonitorLoggingDelegate> _loggingDelegate;
    UITapGestureRecognizer *_gestureRecognizer;
    SPTObserverManager *_observerManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak id <SPTNowPlayingContainerIdleMonitorLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic, getter=isIdle) _Bool idle; // @synthesize idle=_idle;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)notifyIdlePeriodDidEnd:(_Bool)arg1;
- (void)notifyIdlePeriodDidBegin:(_Bool)arg1;
- (void)notifyCurrentStateToObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)forceIdle:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (void)endIdlePeriod:(_Bool)arg1;
- (void)beginIdlePeriod:(_Bool)arg1;
- (void)updateForVoiceOverStatus;
- (_Bool)isIdleMonitoringEnabled;
- (void)pauseMonitoring;
- (_Bool)startMonitoring;
- (void)tap;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

