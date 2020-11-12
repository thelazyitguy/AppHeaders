//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class MDCInkTouchController, NSString, UITapGestureRecognizer, YTFormattedStringLabel, YTICompactMovieUpsellRenderer, YTQTMButton, YTVideoThumbnailView;
@protocol GA11YMixinImpl, YTTvfilmCompactMovieUpsellCellDelegate;

@interface YTTvfilmCompactMovieUpsellView : UIControl <MDCInkTouchControllerDelegate, GA11YMixinEmbedder, YTPageStyling, YTReusableView, YTThumbnailMapping>
{
    UITapGestureRecognizer *_tapRecognizer;
    MDCInkTouchController *_inkTouchController;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTTvfilmCompactMovieUpsellCellDelegate> _delegate;
    YTICompactMovieUpsellRenderer *_renderer;
    YTFormattedStringLabel *_subtitleLabel;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_topMetadataLabels;
    YTQTMButton *_offerButton;
    YTVideoThumbnailView *_thumbnail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTVideoThumbnailView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) YTQTMButton *offerButton; // @synthesize offerButton=_offerButton;
@property(retain, nonatomic) YTFormattedStringLabel *topMetadataLabels; // @synthesize topMetadataLabels=_topMetadataLabels;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) YTICompactMovieUpsellRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak id <YTTvfilmCompactMovieUpsellCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapOfferButton;
- (void)didTapView:(id)arg1;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGRect)thumbnailFrame;
- (void)layoutSubviews;
- (struct CGSize)thumbnailSizeForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)metadataWidthForWidth:(double)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
