//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeFieldDecoratedDateTimeField.h"

@interface OrgJodaTimeFieldOffsetDateTimeField : OrgJodaTimeFieldDecoratedDateTimeField
{
    int iOffset_;
    int iMin_;
    int iMax_;
}

- (int)getOffset;
- (long long)remainderWithLong:(long long)arg1;
- (long long)roundHalfEvenWithLong:(long long)arg1;
- (long long)roundHalfCeilingWithLong:(long long)arg1;
- (long long)roundHalfFloorWithLong:(long long)arg1;
- (long long)roundCeilingWithLong:(long long)arg1;
- (long long)roundFloorWithLong:(long long)arg1;
- (int)getMaximumValue;
- (int)getMinimumValue;
- (id)getLeapDurationField;
- (int)getLeapAmountWithLong:(long long)arg1;
- (_Bool)isLeapWithLong:(long long)arg1;
- (long long)setWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)addWrapFieldWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)addWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withInt:(int)arg2;
- (int)getWithLong:(long long)arg1;

@end

