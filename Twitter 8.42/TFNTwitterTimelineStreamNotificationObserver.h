//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TFNTwitterTimeline;

@interface TFNTwitterTimelineStreamNotificationObserver : NSObject
{
    TFNTwitterTimeline *_weakTimeline;
    NSArray *_notificationNames;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *notificationNames; // @synthesize notificationNames=_notificationNames;
@property(readonly, nonatomic) __weak TFNTwitterTimeline *weakTimeline; // @synthesize weakTimeline=_weakTimeline;
- (void)_unsubscribeFromStreamNotifications;
- (void)_subscribeToStreamNotificationsForTimeline:(id)arg1;
- (void)_timelineStreamDidUpdate:(id)arg1;
- (void)timelineStreamChanged;
- (void)lifetimePreserveringNoOp;
- (void)dealloc;
- (id)initWithTimeline:(id)arg1;

@end

