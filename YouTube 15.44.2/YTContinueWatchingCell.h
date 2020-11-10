//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTActionProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class CAGradientLayer, GIMMe, NSString, UIView, YTBadge, YTFormattedStringLabel, YTIRedCarpetVideoRenderer, YTImageView, YTProgressView, YTQTMButton, YTStandaloneBadgeView;
@protocol GA11YMixinImpl, YTPageStyleProvider, YTResponder;

@interface YTContinueWatchingCell : YTCollectionViewCell <GA11YMixinEmbedder, YTThumbnailMapping, YTCollectionViewCellProtocol, YTActionProtocol>
{
    YTIRedCarpetVideoRenderer *_entry;
    YTImageView *_thumbnailView;
    UIView *_gradientView;
    CAGradientLayer *_gradient;
    YTFormattedStringLabel *_videoTitle;
    YTFormattedStringLabel *_episodeLabel;
    YTBadge *_timeStatusOverlay;
    YTStandaloneBadgeView *_redBadge;
    YTProgressView *_progressBarView;
    YTQTMButton *_menuButton;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    GIMMe *_gimme;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGRect)thumbnailFrame;
+ (double)videoCellWidth;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)thumbnailMappings;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)setEntry:(id)arg1;
- (id)entry;
- (_Bool)ytoLightThemeEnabled;
- (long long)pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

