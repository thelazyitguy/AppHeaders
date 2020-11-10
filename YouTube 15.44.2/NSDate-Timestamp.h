//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Timestamp)
+ (long long)gsc_msecForSeconds:(double)arg1;
+ (double)gsc_secondsForMsec:(long long)arg1;
+ (long long)gsc_timestampNowMsec;
+ (id)gsc_dateWithTimestampValue:(long long)arg1;
+ (id)gsc_dateWithTimestamp:(id)arg1;
+ (id)expiryDateStringFromDate:(id)arg1 toDate:(id)arg2;
+ (id)ham_dateWithNTPTimestamp:(unsigned long long)arg1;
+ (id)yt_earliestOfDate:(id)arg1 date:(id)arg2;
+ (id)yt_tomorrow;
+ (id)yt_yesterday;
- (id)gsc_timestampMsec;
- (long long)gsc_timestampMsecValue;
- (_Bool)isDayComplete:(id)arg1;
- (_Bool)isMonthComplete:(id)arg1;
- (_Bool)isDayCompleteWithDateFormat:(id)arg1;
- (_Bool)isMonthCompleteWithDateFormat:(id)arg1;
- (_Bool)isYearCompleteWithDateFormat:(id)arg1 forNumberOfDigits:(int)arg2;
- (_Bool)isDayOutsideOfRangeWithDateFormat:(id)arg1 minDate:(id)arg2 maxDate:(id)arg3;
- (_Bool)isYearOutsideOfRangeWithMinDate:(id)arg1 maxDate:(id)arg2;
- (_Bool)yt_isEarlierThanOrAlmostEqualTo:(id)arg1;
- (_Bool)yt_isEarlierThan:(id)arg1;
- (_Bool)yt_isLaterThanOrAlmostEqualTo:(id)arg1;
- (_Bool)yt_isLaterThan:(id)arg1;
- (_Bool)yt_isAlmostEqualTo:(id)arg1;
- (double)yt_absoluteTimeWithClock:(id)arg1;
- (_Bool)yt_isAfterDate:(id)arg1;
- (_Bool)yt_isBeforeDate:(id)arg1;
- (_Bool)yt_isAfterToday;
- (_Bool)yt_isBeforeToday;
- (id)yt_dateByRemovingTimeComponents;
@end

