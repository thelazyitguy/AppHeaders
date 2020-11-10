//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumArray, NSString, YTIInnerTubeContext, YTITimeNormalizationParameters;

@interface YTIUnpluggedSyncAnnotationsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(nonatomic) _Bool excludeFantasyVisibility; // @dynamic excludeFantasyVisibility;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasExcludeFantasyVisibility; // @dynamic hasExcludeFantasyVisibility;
@property(nonatomic) _Bool hasIsLive; // @dynamic hasIsLive;
@property(nonatomic) _Bool hasLastRefreshToken; // @dynamic hasLastRefreshToken;
@property(nonatomic) _Bool hasTimeNormalizationParameters; // @dynamic hasTimeNormalizationParameters;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool isLive; // @dynamic isLive;
@property(copy, nonatomic) NSString *lastRefreshToken; // @dynamic lastRefreshToken;
@property(retain, nonatomic) GPBEnumArray *lensTypesArray; // @dynamic lensTypesArray;
@property(readonly, nonatomic) unsigned long long lensTypesArray_Count; // @dynamic lensTypesArray_Count;
@property(retain, nonatomic) YTITimeNormalizationParameters *timeNormalizationParameters; // @dynamic timeNormalizationParameters;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

