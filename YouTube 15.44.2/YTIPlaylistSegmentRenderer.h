//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIAccessibilitySupportedDatas, YTIFormattedString, YTIRenderer;

@interface YTIPlaylistSegmentRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *collapsingAccessibilityData; // @dynamic collapsingAccessibilityData;
@property(retain, nonatomic) YTIRenderer *expandButton; // @dynamic expandButton;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *expandingAccessibilityData; // @dynamic expandingAccessibilityData;
@property(nonatomic) _Bool hasCollapsingAccessibilityData; // @dynamic hasCollapsingAccessibilityData;
@property(nonatomic) _Bool hasExpandButton; // @dynamic hasExpandButton;
@property(nonatomic) _Bool hasExpandingAccessibilityData; // @dynamic hasExpandingAccessibilityData;
@property(nonatomic) _Bool hasIsCollapsedByDefault; // @dynamic hasIsCollapsedByDefault;
@property(nonatomic) _Bool hasIsCollapsible; // @dynamic hasIsCollapsible;
@property(nonatomic) _Bool hasPositionText; // @dynamic hasPositionText;
@property(nonatomic) _Bool hasSegmentAnnotation; // @dynamic hasSegmentAnnotation;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTrailer; // @dynamic hasTrailer;
@property(nonatomic) _Bool hasVideoList; // @dynamic hasVideoList;
@property(nonatomic) _Bool isCollapsedByDefault; // @dynamic isCollapsedByDefault;
@property(nonatomic) _Bool isCollapsible; // @dynamic isCollapsible;
@property(retain, nonatomic) YTIFormattedString *positionText; // @dynamic positionText;
@property(retain, nonatomic) YTIFormattedString *segmentAnnotation; // @dynamic segmentAnnotation;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIRenderer *trailer; // @dynamic trailer;
@property(retain, nonatomic) YTIRenderer *videoList; // @dynamic videoList;

@end

