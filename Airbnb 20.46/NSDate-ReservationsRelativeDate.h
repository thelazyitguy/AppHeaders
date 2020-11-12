//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (ReservationsRelativeDate)
+ (id)sundayOfCurrentWeek;
+ (long long)weekdayForToday;
+ (double)ari_currentTimeInterval;
+ (id)oss_dateFromString:(id)arg1;
+ (id)oss_clockSkewFixedDate;
+ (void)oss_setClockSkew:(double)arg1;
+ (id)threadsafeNetworkDate;
+ (id)networkDate;
+ (double)timeIntervalSinceNetworkDate;
- (id)res_relativeDateWithUnitFlags:(unsigned long long)arg1;
- (id)res_relativeDate;
- (id)res_relativeDateAgo;
- (id)res_enumerateRelativeDatesUsingBlock:(CDUnknownBlockType)arg1 unitFlags:(unsigned long long)arg2;
- (id)res_enumerateRelativeDatesUsingBlock:(CDUnknownBlockType)arg1;
- (id)DPL_JSONObject;
- (id)airbnb_UTCComponents;
- (id)airbnb_componentsInTimeZone:(id)arg1;
- (_Bool)hh_isSameDay:(id)arg1 timeZone:(id)arg2;
- (_Bool)isLastMinuteDate;
- (_Bool)isTodayWithTimeZone:(id)arg1;
- (_Bool)isSameDay:(id)arg1 timeZone:(id)arg2;
- (_Bool)isToday;
- (_Bool)isSameDay:(id)arg1;
- (_Bool)isAfterTomorrow;
- (_Bool)isTomorrow;
- (_Bool)isBeforeYesterday;
- (_Bool)isYesterday;
- (id)iso8601String;
- (id)fullString;
- (id)extraLongStringInTimeZone:(id)arg1;
- (id)extraLongString;
- (id)dayOfWeekString;
- (id)longStringInTimeZone:(id)arg1;
- (id)longString;
- (id)yearString;
- (id)fullDayOfWeekMediumString;
- (id)dayOfWeekMediumString;
- (id)shortMonthString;
- (id)dayOfMonthStringInTimeZone:(id)arg1;
- (id)dayOfMonthString;
- (id)mediumStringInTimeZone:(id)arg1;
- (id)mediumString;
- (id)shortString;
- (id)monthYearString;
- (id)monthString;
- (id)dayString;
- (id)rubyDateString;
- (id)rubyDateStringWithTimeZone:(id)arg1;
- (long long)numberOfNightsBetweenDate:(id)arg1;
- (long long)numberOfNightsBetweenDate:(id)arg1 timeZone:(id)arg2;
- (int)daysSinceNow;
- (_Bool)isLastDayOfMonth;
- (_Bool)isFirstDayOfMonth;
- (long long)weekday;
- (id)normalizedDate;
- (id)nextMonth;
- (id)previousMonth;
- (id)dateByAddingMonths:(long long)arg1;
- (id)nextDay;
- (id)previousDay;
- (long long)daysBetweenDates:(id)arg1;
- (id)dateByAddingDays:(long long)arg1;
- (id)componentsForGregorianCalendar;
- (id)ari_stringWithRFC1123Format;
- (double)ari_msTimeIntervalSince1970;
- (id)oss_asStringValue;
@property(readonly, nonatomic) double timeIntervalSinceNetworkDate;
@end

