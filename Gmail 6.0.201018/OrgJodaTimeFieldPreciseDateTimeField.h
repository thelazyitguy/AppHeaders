//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeFieldPreciseDurationDateTimeField.h"

@class OrgJodaTimeDurationField;

@interface OrgJodaTimeFieldPreciseDateTimeField : OrgJodaTimeFieldPreciseDurationDateTimeField
{
    int iRange_;
    OrgJodaTimeDurationField *iRangeField_;
}

- (void)dealloc;
- (int)getRange;
- (int)getMaximumValue;
- (id)getRangeDurationField;
- (long long)setWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)addWrapFieldWithLong:(long long)arg1 withInt:(int)arg2;
- (int)getWithLong:(long long)arg1;

@end
