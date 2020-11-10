//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTReusableView-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class FLXLayout, NSString, UIAccessibilityCustomAction, UIImage, UIImageView, UITapGestureRecognizer, YTBadge, YTCompactVideoView, YTEngagementToolbarView, YTFormattedStringLabel, YTICommentRenderer, YTImageView, YTLabel, YTPollView, YTQTMButton, YTTouchFeedbackController, YTVerifiedChannelBadgeView, YTVideoView;
@protocol GA11YMixinImpl, YTCommentViewDelegate;

@interface YTCommentView : UIView <GA11YMixinEmbedder, YTPageStyling, YTReusableView, YTThumbnailMapping>
{
    struct CGSize _cachedBackstageImageSize;
    NSString *_cachedVariant;
    long long _cachedExperiment;
    YTPollView *_pollView;
    UIAccessibilityCustomAction *_backstageImageViewAccessibilityAction;
    long long _pageStyle;
    YTTouchFeedbackController *_touchFeedbackController;
    _Bool _showCircularProfiles;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTQTMButton *_authorButton;
    YTQTMButton *_expandCommentTextButton;
    YTICommentRenderer *_renderer;
    YTEngagementToolbarView *_engagementToolbarView;
    YTCompactVideoView *_compactVideoView;
    YTVideoView *_videoView;
    id <YTCommentViewDelegate> _delegate;
    double _preferredMaxLayoutWidth;
    YTQTMButton *_replyInStoryButton;
    YTImageView *_backstageImageView;
    UIView *_backstageImageAnnotationBackgroundView;
    YTImageView *_backstageImageAnnotationView;
    YTImageView *_defaultThumbnail;
    YTImageView *_smallThumbnail;
    YTBadge *_authorCommentBadge;
    YTVerifiedChannelBadgeView *_verifiedChannelBadge;
    YTImageView *_sponsorCommentBadge;
    YTBadge *_sponsorsOnlyBadge;
    UIImageView *_pinnedBadgeImageView;
    YTBadge *_linkedCommentBadge;
    YTFormattedStringLabel *_pinnedBadgeTextLabel;
    YTFormattedStringLabel *_authorTextLabel;
    YTFormattedStringLabel *_pollChoiceTextLabel;
    YTFormattedStringLabel *_commentTextLabel;
    YTFormattedStringLabel *_totalVotesLabel;
    YTLabel *_separatorLabel;
    YTLabel *_separatorLabel2;
    YTFormattedStringLabel *_timeAgoLabel;
    UIImageView *_likeImageView;
    UIView *_mainColumn;
    FLXLayout *_layout;
    UIImage *_likeSelectedImage;
    UIImage *_likeUnselectedImage;
    UITapGestureRecognizer *_compactVideoViewTapRecognizer;
    UITapGestureRecognizer *_videoViewTapRecognizer;
}

+ (id)lightLargeCellOverflowButtonImage;
+ (id)darkLargeCellOverflowButtonImage;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *videoViewTapRecognizer; // @synthesize videoViewTapRecognizer=_videoViewTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *compactVideoViewTapRecognizer; // @synthesize compactVideoViewTapRecognizer=_compactVideoViewTapRecognizer;
@property(retain, nonatomic) UIImage *likeUnselectedImage; // @synthesize likeUnselectedImage=_likeUnselectedImage;
@property(retain, nonatomic) UIImage *likeSelectedImage; // @synthesize likeSelectedImage=_likeSelectedImage;
@property(retain, nonatomic) FLXLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIView *mainColumn; // @synthesize mainColumn=_mainColumn;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) YTFormattedStringLabel *timeAgoLabel; // @synthesize timeAgoLabel=_timeAgoLabel;
@property(retain, nonatomic) YTLabel *separatorLabel2; // @synthesize separatorLabel2=_separatorLabel2;
@property(retain, nonatomic) YTLabel *separatorLabel; // @synthesize separatorLabel=_separatorLabel;
@property(retain, nonatomic) YTFormattedStringLabel *totalVotesLabel; // @synthesize totalVotesLabel=_totalVotesLabel;
@property(retain, nonatomic) YTFormattedStringLabel *commentTextLabel; // @synthesize commentTextLabel=_commentTextLabel;
@property(retain, nonatomic) YTFormattedStringLabel *pollChoiceTextLabel; // @synthesize pollChoiceTextLabel=_pollChoiceTextLabel;
@property(retain, nonatomic) YTFormattedStringLabel *authorTextLabel; // @synthesize authorTextLabel=_authorTextLabel;
@property(retain, nonatomic) YTFormattedStringLabel *pinnedBadgeTextLabel; // @synthesize pinnedBadgeTextLabel=_pinnedBadgeTextLabel;
@property(retain, nonatomic) YTBadge *linkedCommentBadge; // @synthesize linkedCommentBadge=_linkedCommentBadge;
@property(retain, nonatomic) UIImageView *pinnedBadgeImageView; // @synthesize pinnedBadgeImageView=_pinnedBadgeImageView;
@property(retain, nonatomic) YTBadge *sponsorsOnlyBadge; // @synthesize sponsorsOnlyBadge=_sponsorsOnlyBadge;
@property(retain, nonatomic) YTImageView *sponsorCommentBadge; // @synthesize sponsorCommentBadge=_sponsorCommentBadge;
@property(retain, nonatomic) YTVerifiedChannelBadgeView *verifiedChannelBadge; // @synthesize verifiedChannelBadge=_verifiedChannelBadge;
@property(retain, nonatomic) YTBadge *authorCommentBadge; // @synthesize authorCommentBadge=_authorCommentBadge;
@property(retain, nonatomic) YTImageView *smallThumbnail; // @synthesize smallThumbnail=_smallThumbnail;
@property(retain, nonatomic) YTImageView *defaultThumbnail; // @synthesize defaultThumbnail=_defaultThumbnail;
@property(retain, nonatomic) YTImageView *backstageImageAnnotationView; // @synthesize backstageImageAnnotationView=_backstageImageAnnotationView;
@property(retain, nonatomic) UIView *backstageImageAnnotationBackgroundView; // @synthesize backstageImageAnnotationBackgroundView=_backstageImageAnnotationBackgroundView;
@property(retain, nonatomic) YTImageView *backstageImageView; // @synthesize backstageImageView=_backstageImageView;
@property(nonatomic) _Bool showCircularProfiles; // @synthesize showCircularProfiles=_showCircularProfiles;
@property(retain, nonatomic) YTQTMButton *replyInStoryButton; // @synthesize replyInStoryButton=_replyInStoryButton;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) __weak id <YTCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) YTCompactVideoView *compactVideoView; // @synthesize compactVideoView=_compactVideoView;
@property(readonly, nonatomic) YTEngagementToolbarView *engagementToolbarView; // @synthesize engagementToolbarView=_engagementToolbarView;
@property(retain, nonatomic) YTICommentRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) YTQTMButton *expandCommentTextButton; // @synthesize expandCommentTextButton=_expandCommentTextButton;
@property(retain, nonatomic) YTQTMButton *authorButton; // @synthesize authorButton=_authorButton;
- (void)createReplyInStoryButton;
- (void)updateColorsForPageStyle:(long long)arg1;
- (void)setBackstageImageViewAccessibilityActionEnabled:(_Bool)arg1;
- (void)setUpNavigateDetailAceessibility;
- (void)loadVideoLinkSubviews;
- (void)loadCompactVideoLinkSubviews;
- (void)loadPollSubviews;
- (void)loadMainSubviews;
- (void)loadImageSubviews;
- (struct CGSize)backstageImageViewSizeForContainerWidth:(double)arg1;
- (void)layoutWithSize:(struct CGSize)arg1;
- (void)didTapReplyInStoryButton;
- (void)didTapExpandCommentTextButton;
- (void)didTapAuthorButton;
- (id)createHighlightTopicLabel;
- (id)createStatusLabel;
- (id)createSeparatorLabel;
- (void)didTapVideoViewButton;
- (void)didTapVideoView;
- (void)didTapCompactVideoViewButton;
- (void)didTapCompactVideoView;
- (void)didTapBackstageImageView;
- (void)didTapDetailViewAccessibility;
- (void)setFormattedStringLabelDelegate:(id)arg1;
- (void)updateLayoutWithVariant:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(retain, nonatomic) YTPollView *pollView; // @dynamic pollView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)thumbnailMappings;
- (id)root;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
