//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIWatchCardActionLinkSupportedRenderers, YTIWatchCardRelatedData;

@interface YTIWatchCardListRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIWatchCardActionLinkSupportedRenderers *actionLink; // @dynamic actionLink;
@property(retain, nonatomic) YTIFormattedString *collapsedLabel; // @dynamic collapsedLabel;
@property(nonatomic) _Bool hasActionLink; // @dynamic hasActionLink;
@property(nonatomic) _Bool hasCollapsedLabel; // @dynamic hasCollapsedLabel;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasNumItemsToShow; // @dynamic hasNumItemsToShow;
@property(nonatomic) _Bool hasRelatedData; // @dynamic hasRelatedData;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(nonatomic) int numItemsToShow; // @dynamic numItemsToShow;
@property(retain, nonatomic) YTIWatchCardRelatedData *relatedData; // @dynamic relatedData;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

