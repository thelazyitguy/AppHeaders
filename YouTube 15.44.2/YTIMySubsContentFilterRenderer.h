//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIFormattedString, YTIMySubsContentFilterHintSupportedRenderers, YTIMySubsSubMenuSupportedRenderers;

@interface YTIMySubsContentFilterRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @dynamic buttonsArray;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count; // @dynamic buttonsArray_Count;
@property(retain, nonatomic) YTIMySubsSubMenuSupportedRenderers *filterSubMenu; // @dynamic filterSubMenu;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIMySubsContentFilterHintSupportedRenderers *hint; // @dynamic hint;
@property(readonly, nonatomic) int supportedTitlesOneOfCase; // @dynamic supportedTitlesOneOfCase;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

