//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SMAPausableTimer, SMAVisibilityTrackerConfiguration, UIView;
@protocol SMAVisibilityTrackerDelegate;

@interface SMAVisibilityTracker : NSObject
{
    _Bool _isPaused;
    _Bool _wasAdViewPreviouslyVisible;
    UIView *_adView;
    id <SMAVisibilityTrackerDelegate> _delegate;
    SMAVisibilityTrackerConfiguration *_configuration;
    SMAPausableTimer *_impressionTimer;
    SMAPausableTimer *_viewHierarchySamplingTimer;
}

@property(nonatomic) _Bool wasAdViewPreviouslyVisible; // @synthesize wasAdViewPreviouslyVisible=_wasAdViewPreviouslyVisible;
@property(retain, nonatomic) SMAPausableTimer *viewHierarchySamplingTimer; // @synthesize viewHierarchySamplingTimer=_viewHierarchySamplingTimer;
@property(retain, nonatomic) SMAPausableTimer *impressionTimer; // @synthesize impressionTimer=_impressionTimer;
@property(copy, nonatomic) SMAVisibilityTrackerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SMAVisibilityTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *adView; // @synthesize adView=_adView;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
- (void).cxx_destruct;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (_Bool)isAdVisible;
- (void)impressionTimerTick;
- (void)viewHierarchySamplingTimerTick;
- (void)tearDown;
- (void)stopOrPauseImpressionTimer;
- (id)newImpressionTimer;
- (void)stop;
- (void)resume;
- (void)pause;
- (id)initWithAdView:(id)arg1 delegate:(id)arg2 configuration:(id)arg3;
- (void)dealloc;

@end
