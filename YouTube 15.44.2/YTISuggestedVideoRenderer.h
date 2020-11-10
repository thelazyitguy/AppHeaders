//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTICommand, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTISuggestedVideoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *clickCommand; // @dynamic clickCommand;
@property(retain, nonatomic) YTIFormattedString *duration; // @dynamic duration;
@property(nonatomic) _Bool hasClickCommand; // @dynamic hasClickCommand;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasHeadline; // @dynamic hasHeadline;
@property(nonatomic) _Bool hasImpressionCommand; // @dynamic hasImpressionCommand;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasPublishedTime; // @dynamic hasPublishedTime;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasViewCount; // @dynamic hasViewCount;
@property(retain, nonatomic) YTIFormattedString *headline; // @dynamic headline;
@property(retain, nonatomic) YTICommand *impressionCommand; // @dynamic impressionCommand;
@property(retain, nonatomic) YTIRenderer *menu; // @dynamic menu;
@property(retain, nonatomic) YTIFormattedString *publishedTime; // @dynamic publishedTime;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *viewCount; // @dynamic viewCount;

@end

