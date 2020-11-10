//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTPromotedNativeAdView-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, YTBadge, YTButton, YTFormattedStringLabel, YTIPromotedSparklesTextHomeRenderer, YTImageView;
@protocol GA11YMixinImpl;

@interface YTPromotedSparklesTextHomeView : UIView <GA11YMixinEmbedder, YTPromotedNativeAdView, YTPageStyling>
{
    YTIPromotedSparklesTextHomeRenderer *_renderer;
    UIView *_contentBoxView;
    YTBadge *_thumbnailBadge;
    struct CGRect _clickableArea;
    NSMutableArray *_views;
    NSMutableDictionary *_clickLocationCodes;
    NSMutableDictionary *_clickBehaviors;
    _Bool _active;
    YTButton *_ctaButton;
    YTImageView *_thumbnailView;
    NSString *_accessibilityIdentifier;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_descriptionLabel;
    YTFormattedStringLabel *_websiteLabel;
    YTBadge *_adBadge;
}

+ (id)labelWithTypeKind:(long long)arg1;
+ (double)thumbnailWidthWithViewWidth:(double)arg1;
+ (struct CGSize)viewSizeForEntry:(id)arg1 size:(struct CGSize)arg2 active:(_Bool)arg3;
+ (struct CGSize)viewSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YTBadge *adBadge; // @synthesize adBadge=_adBadge;
@property(retain, nonatomic) YTFormattedStringLabel *websiteLabel; // @synthesize websiteLabel=_websiteLabel;
@property(retain, nonatomic) YTFormattedStringLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) YTImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) YTButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)addThumbnailBadge:(id)arg1;
- (void)removeThumbnailBadge;
- (void)sizeSubviewsWithSize:(struct CGSize)arg1;
- (void)configureClickableArea;
- (id)clickLocationFromView:(id)arg1;
- (id)accessibleViews;
@property(readonly, nonatomic) NSString *accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (double)requestedViewPadding;
- (int)codeForClickLocation:(struct CGPoint)arg1;
- (int)behaviorForClickLocation:(struct CGPoint)arg1;
- (id)indexForClickLocation:(struct CGPoint)arg1;
- (void)setPromotedRenderer:(id)arg1;
- (id)thumbnail;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTImageView *secondThumbnailView;
@property(readonly) Class superclass;

@end

