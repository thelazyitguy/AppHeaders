//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNTimestampRefreshService-Protocol.h"

@class NSPointerArray, NSString, NSTimer;

@interface DYNTimestampRefreshServiceImpl : NSObject <DYNTimestampRefreshService>
{
    NSTimer *_timestampRefreshTimer;
    NSPointerArray *_listenersByContext[1];
    _Bool _isListenerContextPaused[1];
}

+ (void)manuallyCompactPointersArrayIfNeeded:(id)arg1 withObjectCount:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)resumeAllTimestampNotifications;
- (void)pauseAllTimestampNotifications;
- (void)observeBackgroundForegroundNotifications;
- (void)startTimestampRefreshTimer;
- (id)listenersForContext:(int)arg1;
- (void)informListenersOfTimestampRefreshWithContext:(int)arg1;
- (void)informListenersOfTimestampRefresh;
- (void)resumeTimestampNotificationsWithContext:(int)arg1;
- (void)pauseTimestampNotificationsWithContext:(int)arg1;
- (void)removeTimestampListener:(id)arg1 withContext:(int)arg2;
- (void)registerTimestampListener:(id)arg1 withContext:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
