//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class FLXLayout, MDCInkView, NSString, YTFormattedStringLabel, YTIDismissalReasonSupportedRenderers, YTIThumbnailDetails, YTQTMButton, YTVideoThumbnailView;
@protocol GA11YMixinImpl;

@interface YTDismissalFollowupReasonControl : UIControl <GA11YMixinEmbedder, YTPageStyling, YTThumbnailMapping>
{
    FLXLayout *_layout;
    MDCInkView *_inkView;
    _Bool _blueThemeStyleEnabled;
    id <GA11YMixinImpl> _accessibilityMixin;
    double _preferredMaxLayoutWidth;
    YTIDismissalReasonSupportedRenderers *_renderer;
    YTQTMButton *_button;
    YTFormattedStringLabel *_label;
    YTVideoThumbnailView *_thumbnailView;
    YTIThumbnailDetails *_thumbnailDetails;
    YTFormattedStringLabel *_thumbnailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTFormattedStringLabel *thumbnailLabel; // @synthesize thumbnailLabel=_thumbnailLabel;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnailDetails; // @synthesize thumbnailDetails=_thumbnailDetails;
@property(retain, nonatomic) YTVideoThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) YTFormattedStringLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) YTQTMButton *button; // @synthesize button=_button;
@property(retain, nonatomic) YTIDismissalReasonSupportedRenderers *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) _Bool blueThemeStyleEnabled; // @synthesize blueThemeStyleEnabled=_blueThemeStyleEnabled;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (void)setSelected:(_Bool)arg1;
- (void)touchUpInside;
- (void)unhighlightRadioButtonAction;
- (void)highlightRadioButtonAction:(id)arg1 event:(id)arg2;
- (void)configureWithText:(id)arg1;
- (void)setVideoFromVideoRenderer:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)thumbnailMappings;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)root;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

