//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGooglePersonalizationAssistAnnotateDateType, ComGooglePersonalizationAssistAnnotateTimeType;

@protocol ComGooglePersonalizationAssistAnnotateApiTimeOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGooglePersonalizationAssistAnnotateDateType *)getDateType;
- (_Bool)hasDateType;
- (ComGooglePersonalizationAssistAnnotateTimeType *)getTimeType;
- (_Bool)hasTimeType;
- (_Bool)getDateOnly;
- (_Bool)hasDateOnly;
- (int)getTimeZoneOffsetMinutes;
- (_Bool)hasTimeZoneOffsetMinutes;
- (long long)getTimeMs;
- (_Bool)hasTimeMs;
@end
