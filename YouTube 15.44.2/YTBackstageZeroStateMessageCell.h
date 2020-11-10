//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/YTCellLinkProtocol-Protocol.h>
#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTFormattedStringLabelDelegate-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class FLXLayout, NSString, YTFormattedStringLabel, YTIBackstageZeroStateRenderer, YTImageView, YTQTMButton;
@protocol YTCellLinkDelegate, YTResponder;

@interface YTBackstageZeroStateMessageCell : YTCollectionViewCell <YTFormattedStringLabelDelegate, YTCellLinkProtocol, YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    FLXLayout *_layout;
    YTIBackstageZeroStateRenderer *_entry;
    id <YTResponder> _parentResponder;
    id <YTCellLinkDelegate> _cellLinkDelegate;
    YTImageView *_imageView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_textLabel;
    YTFormattedStringLabel *_learnMoreLabel;
    YTQTMButton *_postButton;
    YTFormattedStringLabel *_footerLabel;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YTFormattedStringLabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) YTQTMButton *postButton; // @synthesize postButton=_postButton;
@property(retain, nonatomic) YTFormattedStringLabel *learnMoreLabel; // @synthesize learnMoreLabel=_learnMoreLabel;
@property(retain, nonatomic) YTFormattedStringLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate; // @synthesize cellLinkDelegate=_cellLinkDelegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (id)thumbnailMappings;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)accessibilityElements;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setDidTapPostButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
