//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIEmojiPickerCategoryRenderer, YTIEmojiPickerUpsellCategoryRenderer;

@interface YTIEmojiPickerCategorySupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int categoryOneOfCase; // @dynamic categoryOneOfCase;
@property(retain, nonatomic) YTIEmojiPickerCategoryRenderer *emojiPickerCategoryRenderer; // @dynamic emojiPickerCategoryRenderer;
@property(retain, nonatomic) YTIEmojiPickerUpsellCategoryRenderer *emojiPickerUpsellCategoryRenderer; // @dynamic emojiPickerUpsellCategoryRenderer;

@end
