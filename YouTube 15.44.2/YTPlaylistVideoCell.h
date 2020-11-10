//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTCellActionProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTOfflineVideoItem-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"
#import "YTWatchTransitionViewProtocol-Protocol.h"

@class NSArray, NSString, UIImageView, UILongPressGestureRecognizer, UIView, YTFormattedStringLabel, YTIPlaylistVideoRenderer, YTProgressOverlayView, YTQTMButton, YTStandaloneBadgeView, YTSubtitleView, YTVideoContributorView, YTVideoThumbnailView;
@protocol GA11YMixinImpl, YTAttributedLabel, YTResponder;

@interface YTPlaylistVideoCell : YTCollectionViewCell <GA11YMixinEmbedder, YTPageStyling, YTCellActionProtocol, YTCollectionViewCellProtocol, YTOfflineVideoItem, YTThumbnailMapping, YTWatchTransitionViewProtocol>
{
    YTIPlaylistVideoRenderer *_video;
    YTVideoThumbnailView *_thumbnailView;
    YTProgressOverlayView *_progressOverlayView;
    YTFormattedStringLabel *_offlineStateLabel;
    YTVideoContributorView *_videoContributorView;
    YTQTMButton *_actionButton;
    struct CGRect _actionButtonHitArea;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    YTStandaloneBadgeView *_topStandaloneBadge;
    UIView *_bottomBadgesView;
    YTStandaloneBadgeView *_standaloneBadge;
    YTStandaloneBadgeView *_bottomStandaloneBadge;
    NSArray *_metadataLayoutArray;
    NSArray *_bottomBadgesViewLayoutArray;
    YTQTMButton *_swipeToRevealButton;
    _Bool _canReorder;
    UIImageView *_reorderHandleImageView;
    long long _pageStyle;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    UIView<YTAttributedLabel> *_titleLabel;
    YTSubtitleView *_subtitleView;
}

+ (double)metadataHeightForEntry:(id)arg1 width:(double)arg2 expanded:(_Bool)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (_Bool)isExpandedForWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YTSubtitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UIView<YTAttributedLabel> *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)executeAccessibilityActions;
- (void)updateBottomBadgesViewVisibilityAndSize;
- (void)setNeedsBottomBadgesViewsLayoutArrayUpdate;
- (id)bottomBadgesViewLayoutArray;
- (void)updateMetadataVisibilityWithViewMarginArray:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (struct CGSize)thumbnailSizeForEntry:(id)arg1;
- (void)updateBackgroundColor;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setSelected:(_Bool)arg1;
- (void)setInlineDownloadedIndicatorVisible:(_Bool)arg1;
- (void)updateWithOfflineStatus:(int)arg1 downloadProgress:(double)arg2 videoThumbnailStatus:(unsigned long long)arg3 transferButtonDelegate:(id)arg4;
- (void)setSpaceUsageString:(id)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1 withTypeVariant:(long long)arg2;
- (void)setMetadataLabelsAlpha:(double)arg1;
- (id)thumbnailMappings;
- (id)fromWatchTransitionImageView;
- (_Bool)allowsReorderingAtPoint:(struct CGPoint)arg1;
- (void)setCanReorder:(_Bool)arg1;
- (void)setSwipeButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (id)accessibilityCustomActions;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
@property(nonatomic, getter=isProgressOverlayViewHidden) _Bool progressOverlayViewHidden;
- (id)reorderHintAnchor;
- (void)prepareForReuse;
- (void)layoutSubviews_narrow;
- (void)layoutSubviews_expanded;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

