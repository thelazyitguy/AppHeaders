//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNNowCache, NSCache;

@interface DYNDateFormatter : NSObject
{
    DYNNowCache *_relativeSingleUnitFormatCache;
    NSCache *_timeOnlyFormatCache;
    DYNNowCache *_yesterdayFormatCache;
    NSCache *_dayOfWeekAndTimeFormatCache;
    DYNNowCache *_otherYearDayOfWeekFormatCache;
    DYNNowCache *_sameYearDateTimeFormatCache;
    DYNNowCache *_otherYearDateTimeFormatCache;
}

+ (void)setShared:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (_Bool)shouldShowDateDividerBetweenDate:(id)arg1 date:(id)arg2;
- (id)now;
- (id)sameYearDateDayOfWeekFormatWithDate:(id)arg1;
- (id)sameYearDateFormatWithDate:(id)arg1;
- (id)sameYearDateTimeFormatWithDate:(id)arg1 nowMonthResolution:(id)arg2 dateMinuteResolution:(id)arg3;
- (id)otherYearDayOfWeekFormatWithDate:(id)arg1 nowMonthResolution:(id)arg2 dateDayResolution:(id)arg3;
- (id)otherYearDateFormatWithDate:(id)arg1 nowMonthResolution:(id)arg2 dateMinuteResolution:(id)arg3;
- (id)otherYearGroupFormatWithDate:(id)arg1;
- (id)dayOfWeekFullFormatWithDate:(id)arg1;
- (id)dayOfWeekFormatWithDate:(id)arg1;
- (id)dayOfWeekAndTimeFormatWithDate:(id)arg1 dateMinuteResolution:(id)arg2;
- (id)yesterdayFormatWithDate:(id)arg1 dateMinuteResolution:(id)arg2 nowDayResolution:(id)arg3;
- (id)monthAndDayFormatWithDate:(id)arg1;
- (id)timeOnlyFormatWithDate:(id)arg1;
- (id)relativeSingleUnitFormatWithDateMinuteResolution:(id)arg1 futureMinuteResolution:(id)arg2;
- (id)formatMessageTimeForFileTextWithMicros:(long long)arg1;
- (id)formatMessageTimeForDividerTextWithMicros:(long long)arg1;
- (id)formatTimestampWithoutPrefixWithMicrosSince1970:(long long)arg1 forAccessibilityLabel:(_Bool)arg2 isRelative:(out _Bool *)arg3 formatAsFutureTime:(_Bool)arg4;
- (id)formatConversationSuggestionTimeWithStartMicrosSince1970:(long long)arg1 endMicrosSince1970:(long long)arg2 forAccessibilityLabel:(_Bool)arg3 isRelative:(out _Bool *)arg4;
- (id)formatGroupTimeWithMicrosSince1970:(long long)arg1 forAccessibilityLabel:(_Bool)arg2 isRelative:(out _Bool *)arg3;
- (id)formatGroupTimeWithMicrosSince1970:(long long)arg1 forAccessibilityLabel:(_Bool)arg2;
- (id)formatGroupTimeWithMicrosSince1970:(long long)arg1;
- (id)formatMessageSearchResultTimeWithMicrosSince1970:(long long)arg1;
- (id)formatMessageTimeWithMicrosSince1970:(long long)arg1;
- (id)init;

@end
