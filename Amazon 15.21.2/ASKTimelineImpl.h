//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASKTimelineBase.h"

@interface ASKTimelineImpl : ASKTimelineBase
{
}

- (void)validateEventName:(id)arg1;
- (id)addEventWithType:(unsigned long long)arg1 dateInterval:(id)arg2 andEventNameFormat:(id)arg3;
- (id)addEventWithName:(id)arg1 type:(unsigned long long)arg2 dateInterval:(id)arg3;
- (id)startEventWithName:(id)arg1 type:(unsigned long long)arg2 startTime:(double)arg3;
- (id)startEventWithType:(unsigned long long)arg1 andEventNameFormat:(id)arg2;
- (id)startEventWithName:(id)arg1 type:(unsigned long long)arg2;

@end

