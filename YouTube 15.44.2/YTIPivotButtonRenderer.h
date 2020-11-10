//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIPivotButtonRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *contentDescription; // @dynamic contentDescription;
@property(nonatomic) _Bool hasContentDescription; // @dynamic hasContentDescription;
@property(nonatomic) _Bool hasShowPivotScreen; // @dynamic hasShowPivotScreen;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *showPivotScreen; // @dynamic showPivotScreen;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

