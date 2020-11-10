//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol YTScrollFocusGlobalStateMonitorObserver;

@protocol YTScrollFocusGlobalStateMonitor <NSObject>
@property(readonly, nonatomic) long long scrollFocusGlobalStateNotificationStatus;
- (_Bool)postImpressionLoggingEnabled;
- (_Bool)optimizedIndexpathVisibilityEnabled;
- (_Bool)visibilityLoggingEnabled;
- (_Bool)activeStateProcessingEnabled;
- (void)notifyWillHideInterstitial;
- (void)notifyWillShowInterstitial;
- (void)removeScrollFocusGlobalStateObserver:(id <YTScrollFocusGlobalStateMonitorObserver>)arg1;
- (void)addScrollFocusGlobalStateObserver:(id <YTScrollFocusGlobalStateMonitorObserver>)arg1;
@end

