//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIFormattedString, YTIThumbnailDetails, YTIUnlimitedPageFeatureInfoColorSupportedDatas;

@interface YTIUnlimitedPageFeatureInfoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnlimitedPageFeatureInfoColorSupportedDatas *colorData; // @dynamic colorData;
@property(retain, nonatomic) NSMutableArray *descriptionsArray; // @dynamic descriptionsArray;
@property(readonly, nonatomic) unsigned long long descriptionsArray_Count; // @dynamic descriptionsArray_Count;
@property(nonatomic) _Bool hasColorData; // @dynamic hasColorData;
@property(nonatomic) _Bool hasIconThumbnail; // @dynamic hasIconThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *iconThumbnail; // @dynamic iconThumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

