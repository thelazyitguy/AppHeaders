//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LocalNotificationEventListener;
@protocol JBTEvent;

@protocol LocalNotificationEventListenerDelegate <NSObject>
- (void)localNotificationEventListener:(LocalNotificationEventListener *)arg1 didReceiveEvent:(id <JBTEvent>)arg2;
@end
