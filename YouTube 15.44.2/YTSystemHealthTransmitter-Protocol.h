//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSDate, YTIDroppedFrames, YTISystemHealthMetricCaptured;
@protocol YTSystemHealthConfig;

@protocol YTSystemHealthTransmitter <NSObject>
- (void)transmitDroppedFramesEvent:(YTIDroppedFrames *)arg1 eventDate:(NSDate *)arg2 error:(id *)arg3;
- (void)transmitSystemHealthMetrics:(YTISystemHealthMetricCaptured *)arg1 error:(id *)arg2;
- (_Bool)isEnabled;
- (void)configureWithConfig:(id <YTSystemHealthConfig>)arg1;
@end

