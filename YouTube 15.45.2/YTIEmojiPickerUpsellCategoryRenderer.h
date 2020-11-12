//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeSectionRenderer-Protocol.h>

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString;

@interface YTIEmojiPickerUpsellCategoryRenderer : GPBMessage <YTInnerTubeSectionRenderer>
{
}

+ (id)descriptor;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableArray *emojiIdsArray; // @dynamic emojiIdsArray;
@property(readonly, nonatomic) unsigned long long emojiIdsArray_Count; // @dynamic emojiIdsArray_Count;
@property(copy, nonatomic) NSString *emojiTooltip; // @dynamic emojiTooltip;
@property(retain, nonatomic) NSMutableArray *emojisArray; // @dynamic emojisArray;
@property(readonly, nonatomic) unsigned long long emojisArray_Count; // @dynamic emojisArray_Count;
@property(nonatomic) _Bool hasCategoryId; // @dynamic hasCategoryId;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasEmojiTooltip; // @dynamic hasEmojiTooltip;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpsell; // @dynamic hasUpsell;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *upsell; // @dynamic upsell;

@end
