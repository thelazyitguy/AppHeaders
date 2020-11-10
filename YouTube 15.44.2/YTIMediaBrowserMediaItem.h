//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIFormattedString, YTIIcon, YTIMediaItemInfo, YTIThumbnailDetails;

@interface YTIMediaBrowserMediaItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *childMediaItemsArray; // @dynamic childMediaItemsArray;
@property(readonly, nonatomic) unsigned long long childMediaItemsArray_Count; // @dynamic childMediaItemsArray_Count;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) int explicitType; // @dynamic explicitType;
@property(retain, nonatomic) YTIFormattedString *groupTitle; // @dynamic groupTitle;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasExplicitType; // @dynamic hasExplicitType;
@property(nonatomic) _Bool hasGroupTitle; // @dynamic hasGroupTitle;
@property(nonatomic) _Bool hasIsBrowsable; // @dynamic hasIsBrowsable;
@property(nonatomic) _Bool hasIsPlayable; // @dynamic hasIsPlayable;
@property(nonatomic) _Bool hasMediaItemId; // @dynamic hasMediaItemId;
@property(nonatomic) _Bool hasMediaItemInfo; // @dynamic hasMediaItemInfo;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(readonly, nonatomic) int imageOneOfCase; // @dynamic imageOneOfCase;
@property(nonatomic) _Bool isBrowsable; // @dynamic isBrowsable;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(copy, nonatomic) NSString *mediaItemId; // @dynamic mediaItemId;
@property(retain, nonatomic) YTIMediaItemInfo *mediaItemInfo; // @dynamic mediaItemInfo;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

