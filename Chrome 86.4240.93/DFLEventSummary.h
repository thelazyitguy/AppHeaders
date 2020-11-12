//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DFLEventSummary : NSObject
{
    unsigned long long _severity;
    unsigned long long _eventCount;
    unsigned long long _averageDurationBetweenEventsMs;
}

@property(readonly, nonatomic) unsigned long long averageDurationBetweenEventsMs; // @synthesize averageDurationBetweenEventsMs=_averageDurationBetweenEventsMs;
@property(readonly, nonatomic) unsigned long long eventCount; // @synthesize eventCount=_eventCount;
@property(readonly, nonatomic) unsigned long long severity; // @synthesize severity=_severity;
- (id)description;
- (id)initWithSeverity:(unsigned long long)arg1 eventCount:(unsigned long long)arg2 averageDurationBetweenEventsMs:(unsigned long long)arg3;

@end
