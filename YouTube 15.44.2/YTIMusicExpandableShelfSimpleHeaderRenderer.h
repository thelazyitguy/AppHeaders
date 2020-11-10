//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIAccessibilitySupportedDatas, YTIFormattedString, YTIMusicBackgroundOverlayStyle, YTIRenderer;

@interface YTIMusicExpandableShelfSimpleHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityData; // @dynamic accessibilityData;
@property(retain, nonatomic) YTIMusicBackgroundOverlayStyle *backgroundOverlay; // @dynamic backgroundOverlay;
@property(nonatomic) _Bool hasAccessibilityData; // @dynamic hasAccessibilityData;
@property(nonatomic) _Bool hasBackgroundOverlay; // @dynamic hasBackgroundOverlay;
@property(nonatomic) _Bool hasHeaderBackground; // @dynamic hasHeaderBackground;
@property(nonatomic) _Bool hasStrapline; // @dynamic hasStrapline;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *headerBackground; // @dynamic headerBackground;
@property(retain, nonatomic) YTIFormattedString *strapline; // @dynamic strapline;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

