//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTImageViewContainer-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTReusableView-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>
#import <Module_Framework/YTWatchTransitionViewProtocol-Protocol.h>

@class NSString, UIImageView, YTBadge, YTBadgesView, YTFormattedStringLabel, YTImageView, YTMosaicView, YTProgressView, YTVideoThumbnailClientStatusIndicatorView;
@protocol GA11YMixinImpl, YTVideoViewModel;

@interface YTVideoThumbnailView : UIView <GA11YMixinEmbedder, YTImageViewContainer, YTPageStyling, YTReusableView, YTWatchTransitionViewProtocol, YTThumbnailMapping>
{
    YTImageView *_thumbnailView;
    YTMosaicView *_mosaicView;
    UIView *_overlayView;
    YTBadgesView *_badgesView;
    YTBadge *_inlineUnplayableBadge;
    YTBadge *_adLabel;
    YTBadge *_watchedBadge;
    double _timeStatusPadding;
    YTFormattedStringLabel *_episodeCountLabel;
    UIView *_episodeCountOverlay;
    YTProgressView *_progressBarView;
    UIImageView *_sidePanelOverlayImageView;
    YTFormattedStringLabel *_sidePanelOverlayLabel;
    YTVideoThumbnailClientStatusIndicatorView *_clientStatusIndicator;
    _Bool _isSquare;
    int _radioRendererStyle;
    id <YTVideoViewModel> _model;
    id <GA11YMixinImpl> _accessibilityMixin;
    double _progressOverlayHeight;
    double _preferredMaxLayoutWidth;
    double _forcedLayoutWidth;
    YTBadge *_timeStatusOverlay;
    UIView *_sidePanelOverlayView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *sidePanelOverlayView; // @synthesize sidePanelOverlayView=_sidePanelOverlayView;
@property(readonly, nonatomic) YTBadge *timeStatusOverlay; // @synthesize timeStatusOverlay=_timeStatusOverlay;
@property(nonatomic) double forcedLayoutWidth; // @synthesize forcedLayoutWidth=_forcedLayoutWidth;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) double progressOverlayHeight; // @synthesize progressOverlayHeight=_progressOverlayHeight;
- (id)thumbnailMappings;
- (void)setInlineUnplayableBadgeWithIcon:(id)arg1;
- (void)setPercentDurationWatched:(long long)arg1;
- (void)setEpisodeCount:(id)arg1;
- (void)setSidePanelOverlay:(id)arg1 withIcon:(id)arg2;
- (void)updateSidePanelOverlayFrame;
- (void)generateMosaicView;
- (id)fromWatchTransitionImageView;
- (void)prepareForReuse;
- (void)updateWithModel:(id)arg1;
- (void)setSquare:(_Bool)arg1;
- (void)setRadio:(_Bool)arg1;
- (void)setVideoCount:(id)arg1;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)shouldUseBoldLabelForDurationBadge:(_Bool)arg1;
- (void)setThumbnailOverlaySupportedRenderers:(id)arg1;
- (void)setWatched:(_Bool)arg1;
- (void)setAd:(_Bool)arg1;
- (void)setPlayable:(_Bool)arg1;
- (void)setAdjustThumbnails:(_Bool)arg1;
- (void)setThumbnail:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) YTImageView *imageView;
- (void)setBadges:(id)arg1;
- (void)setTimeStatusStyle:(long long)arg1;
- (void)setTimeText:(id)arg1 withStyle:(int)arg2;
- (void)setDurationText:(id)arg1;
@property(nonatomic) unsigned long long videoThumbnailClientStatus;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)init;
- (id)initWithOverlayView:(id)arg1;
- (id)initWithPlaceholder:(id)arg1;
- (id)initWithOverlayView:(id)arg1 placeholder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
