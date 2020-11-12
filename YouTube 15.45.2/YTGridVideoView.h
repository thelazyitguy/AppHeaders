//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGridBaseView.h"

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTOfflinePlaylistItem-Protocol.h"
#import "YTOfflineVideoItem-Protocol.h"
#import "YTRejectedVideoActionProtocol-Protocol.h"

@class NSArray, NSDate, NSString, UIButton, UIView, YTBadgesView, YTBundleListThumbnailsView, YTFormattedStringLabel, YTHotConfig, YTIButtonRenderer, YTImageView, YTLabel, YTProgressOverlayView, YTQTMButton, YTStandaloneBadgeView, YTTransferButton, YTVideoSubtitleView, YTVideoThumbnailView;
@protocol GA11YMixinImpl, YTGridVideoViewModel, YTOfflineVideoItemDelegate;

@interface YTGridVideoView : YTGridBaseView <GA11YMixinEmbedder, YTFormattedStringLabelDelegate, YTOfflinePlaylistItem, YTOfflineVideoItem, YTRejectedVideoActionProtocol>
{
    UIView *_thumbnailView;
    YTBundleListThumbnailsView *_collageThumbnailView;
    YTVideoThumbnailView *_videoThumbnailView;
    YTProgressOverlayView *_progressOverlayView;
    YTTransferButton *_transferButton;
    YTImageView *_channelThumbnailView;
    YTLabel *_channelLabel;
    id <YTGridVideoViewModel> _entry;
    YTStandaloneBadgeView *_topStandaloneBadge;
    YTStandaloneBadgeView *_standaloneBadge;
    UIView *_bottomBadgesView;
    YTStandaloneBadgeView *_bottomStandaloneBadge;
    NSArray *_metadataLayoutArray;
    NSArray *_bottomBadgesViewLayoutArray;
    YTFormattedStringLabel *_callToActionLabel;
    UIButton *_callToActionButton;
    NSString *_spaceUsageString;
    YTLabel *_offlineStateLabel;
    id <YTOfflineVideoItemDelegate> _transferButtonDelegate;
    YTQTMButton *_rejectedVideoButton;
    CDUnknownBlockType _rejectedVideoCompletionBlock;
    YTIButtonRenderer *_swipeToRevealButtonRenderer;
    NSDate *_rejectedButtonPressedTime;
    YTBadgesView *_badgesView;
    YTHotConfig *_hotConfig;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTLabel *_titleLabel;
    YTVideoSubtitleView *_subtitleView;
    YTQTMButton *_swipeToRevealButton;
}

+ (double)thumbnailWidthForExpandedLayoutWithWidth:(double)arg1 entry:(id)arg2;
+ (double)metadataHeightForEntry:(id)arg1;
+ (double)preferredHeightForWidth_compact:(double)arg1 entry:(id)arg2;
+ (double)preferredHeightForWidth_regular:(double)arg1 entry:(id)arg2;
+ (double)preferredHeightForWidth:(double)arg1 entry:(id)arg2;
+ (double)gridThumbnailWidth_compact:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTQTMButton *swipeToRevealButton; // @synthesize swipeToRevealButton=_swipeToRevealButton;
@property(retain, nonatomic) YTVideoSubtitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)handleRejectedVideoButtonAction;
- (void)layoutRejectedVideoButtons:(double)arg1;
- (void)didTapTransferButton;
- (void)didPressSwipeToRevealButton:(id)arg1;
- (void)createSwipeToRevealButton;
- (void)createBadgesView;
- (void)createOfflineStateLabel;
- (void)createChannelThumbnailView;
- (void)createCallToActionButton;
- (void)createCallToActionLabel;
- (void)createTransferButton;
- (struct CGRect)dismissableCellThumbnailFrame;
- (void)updateBottomBadgesAlphas;
- (void)updateMetadataVisibilityWithViewMarginArray:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)updateBottomBadgesViewVisibilityAndSize;
- (void)updateCallToAction;
- (id)rejectedVideoActionEndpoint;
- (void)setEntry:(id)arg1;
- (void)setNeedsBottomBadgesViewsLayoutArrayUpdate;
- (id)bottomBadgesViewLayoutArray;
- (void)setNeedsMetadataLayoutArrayUpdate;
- (void)regenerateMetadataLayoutArray;
- (id)metadataLayoutArray;
- (void)updateVideoThumbnailClientStatus:(unsigned long long)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1;
- (void)setInlineDownloadedIndicatorVisible:(_Bool)arg1;
- (void)updateWithOfflineStatus:(int)arg1 downloadProgress:(double)arg2 videoThumbnailStatus:(unsigned long long)arg3 transferButtonDelegate:(id)arg4;
- (void)setSpaceUsageString:(id)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1 withTypeVariant:(long long)arg2;
- (void)setMetadataLabelsAlpha:(double)arg1;
- (void)setRejectedButtonActionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)thumbnailMappings;
- (id)fromWatchTransitionImageView;
- (void)prepareForReuse;
- (id)accessibilityCustomActions;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (id)entry;
- (void)removeCallToActionTarget;
- (void)setCallToActionTarget:(id)arg1 action:(SEL)arg2;
- (void)setSubtitles:(id)arg1 shortBylineHidden:(_Bool)arg2 viewCountTextHidden:(_Bool)arg3;
- (_Bool)hasShortOrLongBylineForEntry:(id)arg1;
- (void)enforceNumberOfLinesIfRequiredWithAvailableMetadataHeight:(double)arg1 availableTitleWidth:(double)arg2 availableSubtitleWidth:(double)arg3 metadataPaddingX:(double)arg4 metadataPaddingY:(double)arg5 layoutArray:(id)arg6;
- (void)layoutSubviews_compact;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviewsExpanded;
- (void)layoutSubviews_regular;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)badgesViewMarginTop;
- (double)titleLabelMarginBottom;
- (double)topStandaloneBadgeMarginBottom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
