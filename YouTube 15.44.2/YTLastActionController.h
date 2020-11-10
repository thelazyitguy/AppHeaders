//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAudioSessionVolumeChangeObserver-Protocol.h>
#import <Module_Framework/YTLastActionProvider-Protocol.h>
#import <Module_Framework/YTMainWindowObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class NSHashTable, NSString, YTMonotonicDate;

@interface YTLastActionController : NSObject <YTAudioSessionVolumeChangeObserver, YTSystemNotificationsObserver, YTLastActionProvider, YTMainWindowObserver>
{
    NSHashTable *_lastActionObservers;
    YTMonotonicDate *_timeOfLastUserAction;
}

+ (_Bool)enableAudioObserver;
- (void).cxx_destruct;
- (void)windowDidUpdateFrame:(id)arg1;
- (void)window:(id)arg1 willSendTouchEvent:(id)arg2;
- (void)userDidTakeScreenshot;
- (void)appDidChangeDeviceOrientation;
- (void)appDidBecomeActive:(id)arg1;
- (void)systemOutputVolumeDidChange:(float)arg1;
- (double)lastActionIntervalSinceDate:(id)arg1;
- (double)millisecondsSinceLastUserAction;
- (void)removeLastActionObserver:(id)arg1;
- (void)addLastActionObserver:(id)arg1;
@property(readonly, nonatomic) YTMonotonicDate *timeOfLastUserAction; // @synthesize timeOfLastUserAction=_timeOfLastUserAction;
- (void)actionDidOccur;
- (id)init;
- (id)initWithSystemNotifications:(id)arg1 audioObserverDelay:(double)arg2;
- (id)initWithSystemNotifications:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

