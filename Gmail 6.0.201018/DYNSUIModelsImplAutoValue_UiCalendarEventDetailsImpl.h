//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsImplUiCalendarEventDetailsImpl.h"

@class ComGoogleCommonCollectImmutableList, JavaUtilOptional, NSString;

@interface DYNSUIModelsImplAutoValue_UiCalendarEventDetailsImpl : DYNSUIModelsImplUiCalendarEventDetailsImpl
{
    NSString *summary_;
    long long startTimestampSeconds_;
    long long endTimestampSeconds_;
    ComGoogleCommonCollectImmutableList *attendees_;
    JavaUtilOptional *conferenceData_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getConferenceData;
- (id)getAttendees;
- (long long)getEndTimestampSeconds;
- (long long)getStartTimestampSeconds;
- (id)getSummary;

@end
