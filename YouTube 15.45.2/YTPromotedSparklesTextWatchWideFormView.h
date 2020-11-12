//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPromotedNativeAdView-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIButton, YTBadge, YTButton, YTFormattedStringLabel, YTIPromotedSparklesTextWatchWideFormRenderer, YTImageView;

@interface YTPromotedSparklesTextWatchWideFormView : UIView <YTPromotedNativeAdView>
{
    YTIPromotedSparklesTextWatchWideFormRenderer *_renderer;
    UIView *_thumbnailContainerView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_descriptionLabel;
    YTFormattedStringLabel *_websiteLabel;
    YTBadge *_adBadge;
    YTBadge *_thumbnailBadge;
    UIButton *_icon;
    struct CGRect _clickableArea;
    NSMutableArray *_views;
    NSMutableDictionary *_clickLocationCodes;
    NSMutableDictionary *_clickBehaviors;
    _Bool _active;
    YTImageView *_thumbnailView;
    YTButton *_ctaButton;
    NSString *_accessibilityIdentifier;
    NSString *_accessibilityLabel;
}

+ (id)labelWithTypeKind:(long long)arg1;
+ (double)thumbnailWidthWithViewWidth:(double)arg1;
+ (struct CGSize)viewSizeForEntry:(id)arg1 size:(struct CGSize)arg2 active:(_Bool)arg3;
+ (struct CGSize)viewSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) YTButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) YTImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)addIcon:(id)arg1 size:(double)arg2;
- (void)removeIcon;
- (void)addThumbnailBadge:(id)arg1;
- (void)removeThumbnailBadge;
- (void)sizeSubviewsWithSize:(struct CGSize)arg1;
- (void)configureClickableArea;
- (id)clickLocationFromView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
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
