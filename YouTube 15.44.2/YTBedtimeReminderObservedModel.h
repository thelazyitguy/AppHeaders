//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTBedtimeReminderObservedModel : NSObject
{
    _Bool _bedtimeReminderEnabled;
    _Bool _bedtimeReminderWaitAfterVideoEnds;
    double _bedtimeReminderStartTimeInterval;
    double _bedtimeReminderEndTimeInterval;
}

@property(readonly, nonatomic) _Bool bedtimeReminderWaitAfterVideoEnds; // @synthesize bedtimeReminderWaitAfterVideoEnds=_bedtimeReminderWaitAfterVideoEnds;
@property(readonly, nonatomic) double bedtimeReminderEndTimeInterval; // @synthesize bedtimeReminderEndTimeInterval=_bedtimeReminderEndTimeInterval;
@property(readonly, nonatomic) double bedtimeReminderStartTimeInterval; // @synthesize bedtimeReminderStartTimeInterval=_bedtimeReminderStartTimeInterval;
@property(readonly, nonatomic) _Bool bedtimeReminderEnabled; // @synthesize bedtimeReminderEnabled=_bedtimeReminderEnabled;
- (unsigned long long)hash;
- (_Bool)isEqualToBedtimeReminderObservedModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end

