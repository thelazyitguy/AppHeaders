//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeFieldPreciseDurationDateTimeField.h"

@class OrgJodaTimeChronoBasicChronology;

@interface OrgJodaTimeChronoBasicWeekOfWeekyearDateTimeField : OrgJodaTimeFieldPreciseDurationDateTimeField
{
    OrgJodaTimeChronoBasicChronology *iChronology_;
}

- (void)dealloc;
- (int)getMaximumValueForSetWithLong:(long long)arg1 withInt:(int)arg2;
- (int)getMaximumValueWithOrgJodaTimeReadablePartial:(id)arg1 withIntArray:(id)arg2;
- (int)getMaximumValueWithOrgJodaTimeReadablePartial:(id)arg1;
- (int)getMaximumValueWithLong:(long long)arg1;
- (int)getMaximumValue;
- (int)getMinimumValue;
- (long long)remainderWithLong:(long long)arg1;
- (long long)roundCeilingWithLong:(long long)arg1;
- (long long)roundFloorWithLong:(long long)arg1;
- (id)getRangeDurationField;
- (int)getWithLong:(long long)arg1;

@end
