//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@protocol SMAViewabilityTracking;

@protocol SMAViewabilityCombining <NSObject>
- (_Bool)isValidTracker;
- (void)removeAllTrackers;
- (void)removeTracker:(id <SMAViewabilityTracking>)arg1;
- (void)addTracker:(id <SMAViewabilityTracking>)arg1;
@end
