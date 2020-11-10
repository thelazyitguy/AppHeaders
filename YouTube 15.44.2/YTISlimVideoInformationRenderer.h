//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIRenderer, YTIStandaloneBadgeSupportedRenderers;

@interface YTISlimVideoInformationRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(nonatomic) int caretStyle; // @dynamic caretStyle;
@property(nonatomic) int caretStyleIcon; // @dynamic caretStyleIcon;
@property(retain, nonatomic) YTIFormattedString *collapsedSubtitle; // @dynamic collapsedSubtitle;
@property(retain, nonatomic) YTIFormattedString *expandedSubtitle; // @dynamic expandedSubtitle;
@property(nonatomic) _Bool hasCaretStyle; // @dynamic hasCaretStyle;
@property(nonatomic) _Bool hasCaretStyleIcon; // @dynamic hasCaretStyleIcon;
@property(nonatomic) _Bool hasCollapsedSubtitle; // @dynamic hasCollapsedSubtitle;
@property(nonatomic) _Bool hasExpandedSubtitle; // @dynamic hasExpandedSubtitle;
@property(nonatomic) _Bool hasOnClickCommand; // @dynamic hasOnClickCommand;
@property(nonatomic) _Bool hasSlimAutotaggingVideoInformation; // @dynamic hasSlimAutotaggingVideoInformation;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTopStandaloneBadge; // @dynamic hasTopStandaloneBadge;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnderTitleStandaloneBadge; // @dynamic hasUnderTitleStandaloneBadge;
@property(retain, nonatomic) YTICommand *onClickCommand; // @dynamic onClickCommand;
@property(retain, nonatomic) YTIRenderer *slimAutotaggingVideoInformation; // @dynamic slimAutotaggingVideoInformation;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge; // @dynamic topStandaloneBadge;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *underTitleStandaloneBadge; // @dynamic underTitleStandaloneBadge;

@end
