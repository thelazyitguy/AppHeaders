//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GCKRequestTracker;

@protocol GCKRequestTrackerDelegate <NSObject>
- (void)requestTracker:(GCKRequestTracker *)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(GCKRequestTracker *)arg1 didTimeOut:(long long)arg2;

@optional
- (void)requestTracker:(GCKRequestTracker *)arg1 didCancel:(long long)arg2;
@end

