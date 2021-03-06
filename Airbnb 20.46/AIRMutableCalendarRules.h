//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRCalendarRules.h"

@class NSArray, NSMutableArray, NSNumber;

@interface AIRMutableCalendarRules : AIRCalendarRules
{
    long long _minDaysNotice;
    long long _maxDaysNotice;
    long long _turnoverDays;
    long long _bookingLeadTime;
    NSArray *_seasonalRules;
    NSNumber *_weekendMinNights;
    NSMutableArray *_rules;
}

+ (id)mutableCalendarRulesWithCalendarRules:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *rules; // @synthesize rules=_rules;
@property(retain, nonatomic) NSNumber *weekendMinNights; // @synthesize weekendMinNights=_weekendMinNights;
@property(retain, nonatomic) NSArray *seasonalRules; // @synthesize seasonalRules=_seasonalRules;
@property(nonatomic) long long bookingLeadTime; // @synthesize bookingLeadTime=_bookingLeadTime;
@property(nonatomic) long long turnoverDays; // @synthesize turnoverDays=_turnoverDays;
@property(nonatomic) long long maxDaysNotice; // @synthesize maxDaysNotice=_maxDaysNotice;
@property(nonatomic) long long minDaysNotice; // @synthesize minDaysNotice=_minDaysNotice;
- (id)dictionaryRepresentation;
- (void)updateJSONFromRules;

@end

