//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface GDKOffsetDateRange : NSObject
{
    NSNumber *_startDateOffset;
    NSNumber *_endDateOffset;
}

+ (id)updateRange:(id)arg1 withEndDateOffset:(id)arg2;
+ (id)updateRange:(id)arg1 withStartDateOffset:(id)arg2;
+ (id)rangeWithStartDateOffset:(id)arg1 endDateOffset:(id)arg2;
+ (id)rangeWithEndDateOffset:(id)arg1;
+ (id)rangeWithStartDateOffset:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *endDateOffset; // @synthesize endDateOffset=_endDateOffset;
@property(readonly, nonatomic) NSNumber *startDateOffset; // @synthesize startDateOffset=_startDateOffset;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)offsetDate:(id)arg1 withOffset:(id)arg2;
- (id)dateRangeRelativeToDate:(id)arg1;
- (id)initWithStartDateOffset:(id)arg1 endDateOffset:(id)arg2;

@end
