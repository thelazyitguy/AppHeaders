//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface YTITextSticker : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) int fontName; // @dynamic fontName;
@property(nonatomic) int fontStyle; // @dynamic fontStyle;
@property(nonatomic) int foregroundColor; // @dynamic foregroundColor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasFontName; // @dynamic hasFontName;
@property(nonatomic) _Bool hasFontStyle; // @dynamic hasFontStyle;
@property(nonatomic) _Bool hasForegroundColor; // @dynamic hasForegroundColor;
@property(nonatomic) _Bool hasIsAutoTextStyle; // @dynamic hasIsAutoTextStyle;
@property(nonatomic) _Bool isAutoTextStyle; // @dynamic isAutoTextStyle;
@property(retain, nonatomic) NSMutableArray *mentionStickerArray; // @dynamic mentionStickerArray;
@property(readonly, nonatomic) unsigned long long mentionStickerArray_Count; // @dynamic mentionStickerArray_Count;

@end

