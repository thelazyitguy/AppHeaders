//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGenericLatencyTickLogger.h>

@class GIMMe;

@interface YTWatchLatencyTickLogger : YTGenericLatencyTickLogger
{
    int _setOperation;
}

- (void)startLatencyActionWithTimestamp:(double)arg1 loadType:(int)arg2;
- (id)initWithEndpointSource:(int)arg1;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

