//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRWeeklyTimePoint : NSObject
{
    int _hour;
    int _minute;
}

+ (id)WeeklyTimePointWithHour:(int)arg1 minute:(int)arg2;
@property(readonly, nonatomic) int minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) int hour; // @synthesize hour=_hour;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithHour:(int)arg1 minute:(int)arg2;

@end
