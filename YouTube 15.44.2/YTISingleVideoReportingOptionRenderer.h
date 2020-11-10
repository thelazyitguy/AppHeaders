//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIAccessibilityData, YTICommand, YTIFormattedString;

@interface YTISingleVideoReportingOptionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilityData *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIFormattedString *cancelLabel; // @dynamic cancelLabel;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasCancelLabel; // @dynamic hasCancelLabel;
@property(nonatomic) _Bool hasReportLabel; // @dynamic hasReportLabel;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *reportLabel; // @dynamic reportLabel;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(retain, nonatomic) NSMutableArray *textsArray; // @dynamic textsArray;
@property(readonly, nonatomic) unsigned long long textsArray_Count; // @dynamic textsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

