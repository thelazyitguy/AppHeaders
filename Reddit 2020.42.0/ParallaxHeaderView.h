//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "ObjectObserverProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BaseButton, BaseLabel, BaseTextView, BaseViewController, BorderedImageView, CarouselNodeController, IntrinsicSizeNodeWrapper, MultiViewControl, NSArray, NSLayoutConstraint, NSObject, NSString, ParallelHeaderTextWrapperView, SnoovatarAvatarView, SnoovatarButton, SubredditBannerBackgroundImageView, SubscribeButtonLarge, TextureBackgroundView, UIColor, UIImageView, UILabel, UIStackView, UIView, UIViewController, _TtC6Reddit15StartChatButton, _TtC6Reddit9ModButton, _TtC7Economy14TrophyListView;
@protocol ParallaxHeaderViewCallback, Subscribable><Styleable, ValueStoreObservation, ViewContext;

@interface ParallaxHeaderView : BaseView <ObjectObserverProtocol, UIGestureRecognizerDelegate>
{
    _Bool _isFullyVisible;
    _Bool _shouldShowModToolsButton;
    _Bool _shouldDelaySettingImage;
    _Bool _showNSFWPlaceholders;
    _Bool _shouldShowStartChatButton;
    _Bool _shoudShowStartChatButtonAnimation;
    SubscribeButtonLarge *_followButton;
    _TtC6Reddit9ModButton *_moderatorButton;
    BaseButton *_notificationButton;
    double _fullHeight;
    NSObject<Subscribable><Styleable> *_model;
    UIView *_navbarTitleLabelContainer;
    id <ParallaxHeaderViewCallback> _delegate;
    UIColor *_colorBarBackgroundColorOverride;
    id <ViewContext> _viewContext;
    SubredditBannerBackgroundImageView *_backgroundImageView;
    UIImageView *_shadowOverlayImageView;
    TextureBackgroundView *_backgroundColorView;
    UILabel *_navbarTitleLabel;
    BorderedImageView *_logoImageView;
    BaseLabel *_nsfwLogoLabel;
    UIView *_contentsWrapper;
    UILabel *_mainLabel;
    BaseButton *_displayNameLabel;
    UILabel *_detailLabel;
    BaseTextView *_headerIndicator;
    NSLayoutConstraint *_headerIndicatorHiddenConstraint;
    _TtC6Reddit15StartChatButton *_startChatButton;
    NSLayoutConstraint *_followButtonCenterYAnchorConstraint;
    BaseButton *_editButton;
    NSLayoutConstraint *_displayNameLabelTrailingNotifButtonConstraint;
    NSLayoutConstraint *_displayNameLabelTrailingModButtonConstraint;
    ParallelHeaderTextWrapperView *_textWrapperView;
    UIView *_bottomLine;
    UIStackView *_exploreTagContainer;
    MultiViewControl *_exploreButton;
    _TtC7Economy14TrophyListView *_trophyListView;
    UIView *_parentView;
    IntrinsicSizeNodeWrapper *_intrinsicCarouselView;
    CarouselNodeController *_carouselNodeController;
    NSLayoutConstraint *_carouselHeightConstraint;
    NSArray *_wrapperSideConstraints;
    NSLayoutConstraint *_notificationButtonWidthConstraint;
    BaseViewController *_subscribableViewController;
    id <ValueStoreObservation> _userModelObservation;
    UIView *_layerView;
    NSLayoutConstraint *_layerViewHeightConstraint;
    NSLayoutConstraint *_layerViewTopConstraint;
    UIViewController *_layerViewController;
    SnoovatarAvatarView *_snoovatarView;
    SnoovatarButton *_snoovatarButton;
    UIStackView *_snoovatarBottomButtonStack;
    NSArray *_snoovatarConstraintsIfSet;
    NSArray *_snoovatarButtonConstraintsIfSet;
    NSArray *_snoovatarConstraintsIfNotSet;
    NSArray *_actionButtonConstraints;
    NSLayoutConstraint *_editButtonCenterYAnchorConstraint;
    struct CGSize _previousSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *editButtonCenterYAnchorConstraint; // @synthesize editButtonCenterYAnchorConstraint=_editButtonCenterYAnchorConstraint;
@property(copy, nonatomic) NSArray *actionButtonConstraints; // @synthesize actionButtonConstraints=_actionButtonConstraints;
@property(copy, nonatomic) NSArray *snoovatarConstraintsIfNotSet; // @synthesize snoovatarConstraintsIfNotSet=_snoovatarConstraintsIfNotSet;
@property(copy, nonatomic) NSArray *snoovatarButtonConstraintsIfSet; // @synthesize snoovatarButtonConstraintsIfSet=_snoovatarButtonConstraintsIfSet;
@property(copy, nonatomic) NSArray *snoovatarConstraintsIfSet; // @synthesize snoovatarConstraintsIfSet=_snoovatarConstraintsIfSet;
@property(retain, nonatomic) UIStackView *snoovatarBottomButtonStack; // @synthesize snoovatarBottomButtonStack=_snoovatarBottomButtonStack;
@property(retain, nonatomic) SnoovatarButton *snoovatarButton; // @synthesize snoovatarButton=_snoovatarButton;
@property(retain, nonatomic) SnoovatarAvatarView *snoovatarView; // @synthesize snoovatarView=_snoovatarView;
@property(retain, nonatomic) UIViewController *layerViewController; // @synthesize layerViewController=_layerViewController;
@property(retain, nonatomic) NSLayoutConstraint *layerViewTopConstraint; // @synthesize layerViewTopConstraint=_layerViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *layerViewHeightConstraint; // @synthesize layerViewHeightConstraint=_layerViewHeightConstraint;
@property(retain, nonatomic) UIView *layerView; // @synthesize layerView=_layerView;
@property(retain, nonatomic) id <ValueStoreObservation> userModelObservation; // @synthesize userModelObservation=_userModelObservation;
@property(nonatomic) __weak BaseViewController *subscribableViewController; // @synthesize subscribableViewController=_subscribableViewController;
@property(retain, nonatomic) NSLayoutConstraint *notificationButtonWidthConstraint; // @synthesize notificationButtonWidthConstraint=_notificationButtonWidthConstraint;
@property(retain, nonatomic) NSArray *wrapperSideConstraints; // @synthesize wrapperSideConstraints=_wrapperSideConstraints;
@property(retain, nonatomic) NSLayoutConstraint *carouselHeightConstraint; // @synthesize carouselHeightConstraint=_carouselHeightConstraint;
@property(retain, nonatomic) CarouselNodeController *carouselNodeController; // @synthesize carouselNodeController=_carouselNodeController;
@property(retain, nonatomic) IntrinsicSizeNodeWrapper *intrinsicCarouselView; // @synthesize intrinsicCarouselView=_intrinsicCarouselView;
@property(nonatomic) struct CGSize previousSize; // @synthesize previousSize=_previousSize;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) _TtC7Economy14TrophyListView *trophyListView; // @synthesize trophyListView=_trophyListView;
@property(retain, nonatomic) MultiViewControl *exploreButton; // @synthesize exploreButton=_exploreButton;
@property(retain, nonatomic) UIStackView *exploreTagContainer; // @synthesize exploreTagContainer=_exploreTagContainer;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) ParallelHeaderTextWrapperView *textWrapperView; // @synthesize textWrapperView=_textWrapperView;
@property(retain, nonatomic) NSLayoutConstraint *displayNameLabelTrailingModButtonConstraint; // @synthesize displayNameLabelTrailingModButtonConstraint=_displayNameLabelTrailingModButtonConstraint;
@property(retain, nonatomic) NSLayoutConstraint *displayNameLabelTrailingNotifButtonConstraint; // @synthesize displayNameLabelTrailingNotifButtonConstraint=_displayNameLabelTrailingNotifButtonConstraint;
@property(retain, nonatomic) BaseButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) _Bool shoudShowStartChatButtonAnimation; // @synthesize shoudShowStartChatButtonAnimation=_shoudShowStartChatButtonAnimation;
@property(retain, nonatomic) NSLayoutConstraint *followButtonCenterYAnchorConstraint; // @synthesize followButtonCenterYAnchorConstraint=_followButtonCenterYAnchorConstraint;
@property(nonatomic) _Bool shouldShowStartChatButton; // @synthesize shouldShowStartChatButton=_shouldShowStartChatButton;
@property(retain, nonatomic) _TtC6Reddit15StartChatButton *startChatButton; // @synthesize startChatButton=_startChatButton;
@property(nonatomic) _Bool showNSFWPlaceholders; // @synthesize showNSFWPlaceholders=_showNSFWPlaceholders;
@property(nonatomic) _Bool shouldDelaySettingImage; // @synthesize shouldDelaySettingImage=_shouldDelaySettingImage;
@property(retain, nonatomic) NSLayoutConstraint *headerIndicatorHiddenConstraint; // @synthesize headerIndicatorHiddenConstraint=_headerIndicatorHiddenConstraint;
@property(retain, nonatomic) BaseTextView *headerIndicator; // @synthesize headerIndicator=_headerIndicator;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) BaseButton *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIView *contentsWrapper; // @synthesize contentsWrapper=_contentsWrapper;
@property(retain, nonatomic) BaseLabel *nsfwLogoLabel; // @synthesize nsfwLogoLabel=_nsfwLogoLabel;
@property(retain, nonatomic) BorderedImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *navbarTitleLabel; // @synthesize navbarTitleLabel=_navbarTitleLabel;
@property(retain, nonatomic) TextureBackgroundView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(retain, nonatomic) UIImageView *shadowOverlayImageView; // @synthesize shadowOverlayImageView=_shadowOverlayImageView;
@property(retain, nonatomic) SubredditBannerBackgroundImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) _Bool shouldShowModToolsButton; // @synthesize shouldShowModToolsButton=_shouldShowModToolsButton;
@property(retain, nonatomic) UIColor *colorBarBackgroundColorOverride; // @synthesize colorBarBackgroundColorOverride=_colorBarBackgroundColorOverride;
@property(nonatomic) __weak id <ParallaxHeaderViewCallback> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *navbarTitleLabelContainer; // @synthesize navbarTitleLabelContainer=_navbarTitleLabelContainer;
@property(retain, nonatomic) NSObject<Subscribable><Styleable> *model; // @synthesize model=_model;
@property(nonatomic) _Bool isFullyVisible; // @synthesize isFullyVisible=_isFullyVisible;
@property(readonly, nonatomic) double fullHeight; // @synthesize fullHeight=_fullHeight;
@property(retain, nonatomic) BaseButton *notificationButton; // @synthesize notificationButton=_notificationButton;
@property(readonly, nonatomic) _TtC6Reddit9ModButton *moderatorButton; // @synthesize moderatorButton=_moderatorButton;
@property(retain, nonatomic) SubscribeButtonLarge *followButton; // @synthesize followButton=_followButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didTapLayerView;
- (void)hideLayerView;
- (void)showLayerView;
- (void)updateLayerView;
- (_Bool)shouldEnableLayerView;
- (_Bool)isUserMe:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDisplaySnoovatar;
- (void)themeDidChange:(id)arg1;
@property(readonly, nonatomic) double notificationButtonSize;
- (double)subredditLogoSize;
- (double)preferredColorBarHeight;
- (void)didTapSnoovatarButton:(id)arg1;
- (void)didTapNotificationButton;
- (void)didTapEdit;
- (void)didTapStartChat;
- (void)didTapModerate;
- (void)didTapFollow;
- (void)didTapTitle:(id)arg1;
- (void)updateContentViewsForModel:(id)arg1;
- (void)updateContentViewsForData:(id)arg1;
- (void)layoutSubviews;
- (void)updateViewWithTransformY:(double)arg1;
- (void)updateHeaderLabels;
- (void)updateNotificationButton;
- (void)updateModerateButton;
- (void)updateFollowButton;
- (id)iconBackgroundColor;
- (id)preferredBannerColor;
- (_Bool)isBannerBackgroundColorWhite;
- (_Bool)isColorEqualToWhite:(id)arg1;
- (id)navbarTitleLabelColor;
- (void)updateImagesAfterDelay:(_Bool)arg1;
- (void)updateSnoovatarViewsIfSetForUser:(id)arg1;
- (void)updateSnoovatarViewsIfNotSetForCurrentUser:(id)arg1;
- (void)updateSnoovatarViews;
- (void)setupContentSubViews;
- (void)updateImages;
- (void)updateBannerImage;
- (void)updateLogoImage;
@property(readonly, nonatomic) UIColor *headerPrimaryColor;
- (void)configureWithTrophies:(id)arg1;
- (void)configureWithModel:(id)arg1 subscribableViewController:(id)arg2;
- (void)configureWithUser:(id)arg1 store:(id)arg2 subscribableViewController:(id)arg3;
- (void)removeExistingObservations;
- (void)setupViewsAfterSubscribingToUpdatesForModel:(id)arg1;
- (void)setupLogoImageViewConstraints;
- (void)setupConstraints;
- (void)setupNotificationButton;
- (void)setupStartChatButton;
- (void)setupModerateButton;
- (void)setupFollowButton;
- (void)setupEditButton;
- (void)setupTextWrapperView;
- (void)setupDetailLabel;
- (void)setupExploreContainer;
- (_Bool)shouldShowCarousel;
- (void)updateExploreButton;
- (void)toggleExploreButton:(_Bool)arg1;
- (void)didTapExplore:(id)arg1;
- (void)configureWithCarousel:(id)arg1 carouselNodeDelegate:(id)arg2;
- (void)setupTrophyListView;
- (void)setupExploreButton;
- (void)setupDisplayNameLabel;
- (void)setupMainLabel;
- (void)setupNSFWLogoLabel;
- (void)setupCarousel;
- (void)setupContentsWrapper;
- (void)setupBackgroundImageView;
- (void)updateIndicator;
- (void)clearIndicator;
- (void)setupIndicator;
- (void)setupBackgroundColorView;
- (void)setupNavbarTitleContainerAndLabel;
- (void)setupShadowOverlay;
- (void)dealloc;
- (void)setupViews;
- (void)setupWithParentView:(id)arg1;
@property(readonly, nonatomic) _Bool isCarouselViewVisible;
- (id)initWithDelayOnUpdatingContentImages:(_Bool)arg1 viewContext:(id)arg2 shouldShowStartChatButtonAnimation:(_Bool)arg3;
- (id)initWithViewContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

