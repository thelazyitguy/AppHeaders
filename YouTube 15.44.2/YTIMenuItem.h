//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTICommand, YTIMenuItemTitleSupportedRenderers, YTIThumbnailDetails;

@interface YTIMenuItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleRenderer; // @dynamic hasTitleRenderer;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) YTIMenuItemTitleSupportedRenderers *titleRenderer; // @dynamic titleRenderer;

@end

