//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GBTAppStatus : NSObject
{
    _Bool _backgroundSyncPending;
    _Bool _backgroundTaskPending;
    _Bool _foregroundedAtLeastOnce;
    long long _state;
    long long _notificationProcessingCount;
    double _uptime;
}

@property(nonatomic) _Bool foregroundedAtLeastOnce; // @synthesize foregroundedAtLeastOnce=_foregroundedAtLeastOnce;
@property(nonatomic) double uptime; // @synthesize uptime=_uptime;
@property(nonatomic) _Bool backgroundTaskPending; // @synthesize backgroundTaskPending=_backgroundTaskPending;
@property(nonatomic) _Bool backgroundSyncPending; // @synthesize backgroundSyncPending=_backgroundSyncPending;
@property(nonatomic) long long notificationProcessingCount; // @synthesize notificationProcessingCount=_notificationProcessingCount;
@property(nonatomic) long long state; // @synthesize state=_state;

@end
