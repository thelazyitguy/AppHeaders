//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFormattedString, YTIThumbnailDetails;

@interface YTIMdeThumbnailRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *currentThumbnail; // @dynamic currentThumbnail;
@property(nonatomic) _Bool hasCurrentThumbnail; // @dynamic hasCurrentThumbnail;
@property(nonatomic) _Bool hasVideoLengthText; // @dynamic hasVideoLengthText;
@property(retain, nonatomic) YTIFormattedString *videoLengthText; // @dynamic videoLengthText;

@end

