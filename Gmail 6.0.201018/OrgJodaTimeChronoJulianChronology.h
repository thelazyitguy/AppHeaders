//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeChronoBasicGJChronology.h"

@interface OrgJodaTimeChronoJulianChronology : OrgJodaTimeChronoBasicGJChronology
{
}

+ (void)initialize;
- (void)assembleWithOrgJodaTimeChronoAssembledChronology_Fields:(id)arg1;
- (long long)getApproxMillisAtEpochDividedByTwo;
- (long long)getAverageMillisPerMonth;
- (long long)getAverageMillisPerYearDividedByTwo;
- (long long)getAverageMillisPerYear;
- (int)getMaxYear;
- (int)getMinYear;
- (long long)calculateFirstDayOfYearMillisWithInt:(int)arg1;
- (_Bool)isLeapYearWithInt:(int)arg1;
- (long long)getDateMidnightMillisWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)withZoneWithOrgJodaTimeDateTimeZone:(id)arg1;
- (id)withUTC;

@end
