//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SunUtilCalendarBaseCalendar_Date.h"

@interface SunUtilCalendarImmutableGregorianDate : SunUtilCalendarBaseCalendar_Date
{
    SunUtilCalendarBaseCalendar_Date *date_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)unsupported;
- (void)setNormalizedYearWithInt:(int)arg1;
- (int)getNormalizedYear;
- (void)setDaylightSavingWithInt:(int)arg1;
- (int)getDaylightSaving;
- (void)setZoneOffsetWithInt:(int)arg1;
- (int)getZoneOffset;
- (void)setNormalizedWithBoolean:(_Bool)arg1;
- (void)setDayOfWeekWithInt:(int)arg1;
- (id)description;
- (id)java_clone;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameDateWithSunUtilCalendarCalendarDate:(id)arg1;
- (id)setZoneWithJavaUtilTimeZone:(id)arg1;
- (id)getZone;
- (void)setLocaleWithJavaUtilLocale:(id)arg1;
- (_Bool)isDaylightTime;
- (void)setStandardTimeWithBoolean:(_Bool)arg1;
- (_Bool)isStandardTime;
- (_Bool)isNormalized;
- (void)setTimeOfDayWithLong:(long long)arg1;
- (id)addTimeOfDayWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)setTimeOfDayWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)addDateWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)setDateWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (long long)getTimeOfDay;
- (id)addMillisWithInt:(int)arg1;
- (id)setMillisWithInt:(int)arg1;
- (int)getMillis;
- (id)addSecondsWithInt:(int)arg1;
- (id)setSecondsWithInt:(int)arg1;
- (int)getSeconds;
- (id)addMinutesWithInt:(int)arg1;
- (id)setMinutesWithInt:(int)arg1;
- (int)getMinutes;
- (id)addHoursWithInt:(int)arg1;
- (id)setHoursWithInt:(int)arg1;
- (int)getHours;
- (int)getDayOfWeek;
- (id)addDayOfMonthWithInt:(int)arg1;
- (id)setDayOfMonthWithInt:(int)arg1;
- (int)getDayOfMonth;
- (id)addMonthWithInt:(int)arg1;
- (id)setMonthWithInt:(int)arg1;
- (int)getMonth;
- (void)setLeapYearWithBoolean:(_Bool)arg1;
- (_Bool)isLeapYear;
- (id)addYearWithInt:(int)arg1;
- (id)setYearWithInt:(int)arg1;
- (int)getYear;
- (id)setEraWithSunUtilCalendarEra:(id)arg1;
- (id)getEra;
- (id)initPackagePrivateWithSunUtilCalendarBaseCalendar_Date:(id)arg1;

@end
