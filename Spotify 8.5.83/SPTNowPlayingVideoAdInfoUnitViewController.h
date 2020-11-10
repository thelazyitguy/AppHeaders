//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAdPlayerObserver-Protocol.h"
#import "SPTNowPlayingAdUnitViewController-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class GLUEButton, GLUELabel, NSArray, NSLayoutConstraint, NSString, NSURL, SPTAdNowPlayingBookmarkButton, SPTAdPlayerObservable, SPTAdsBookmarkButtonVisibilityHandler, SPTAdsFeatureProperties, SPTTheme;
@protocol GLUETheme, SPTAdsManager, SPTNowPlayingContainingViewController, SPTNowPlayingVideoControlsVisibilityDelegate;

@interface SPTNowPlayingVideoAdInfoUnitViewController : UIViewController <SPTAdPlayerObserver, SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController>
{
    _Bool _verticalVideo;
    _Bool _noOfferCardMessageVisible;
    UIViewController<SPTNowPlayingContainingViewController> *container;
    id <SPTNowPlayingVideoControlsVisibilityDelegate> _visibilityDelegate;
    GLUELabel *_footerLabel;
    GLUELabel *_titleLabel;
    GLUEButton *_actionButton;
    GLUEButton *_skipButton;
    SPTTheme *_theme;
    id <GLUETheme> _glueTheme;
    SPTAdsFeatureProperties *_featureProperties;
    SPTAdsBookmarkButtonVisibilityHandler *_bookmarkButtonVisibilityHandler;
    id <SPTAdsManager> _adsManager;
    NSURL *_clickthroughURL;
    unsigned long long _skipDelaySeconds;
    NSLayoutConstraint *_actionButtonTopConstraintWithLabel;
    NSLayoutConstraint *_actionButtonTopConstraintNoLabel;
    NSArray *_bookmarkVisibleConstraints;
    NSArray *_bookmarkHiddenConstraints;
    double _animationDuration;
    SPTAdPlayerObservable *_observer;
    SPTAdNowPlayingBookmarkButton *_bookmarkButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTAdNowPlayingBookmarkButton *bookmarkButton; // @synthesize bookmarkButton=_bookmarkButton;
@property(nonatomic) _Bool noOfferCardMessageVisible; // @synthesize noOfferCardMessageVisible=_noOfferCardMessageVisible;
@property(nonatomic) _Bool verticalVideo; // @synthesize verticalVideo=_verticalVideo;
@property(readonly, nonatomic) SPTAdPlayerObservable *observer; // @synthesize observer=_observer;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(copy, nonatomic) NSArray *bookmarkHiddenConstraints; // @synthesize bookmarkHiddenConstraints=_bookmarkHiddenConstraints;
@property(copy, nonatomic) NSArray *bookmarkVisibleConstraints; // @synthesize bookmarkVisibleConstraints=_bookmarkVisibleConstraints;
@property(retain, nonatomic) NSLayoutConstraint *actionButtonTopConstraintNoLabel; // @synthesize actionButtonTopConstraintNoLabel=_actionButtonTopConstraintNoLabel;
@property(retain, nonatomic) NSLayoutConstraint *actionButtonTopConstraintWithLabel; // @synthesize actionButtonTopConstraintWithLabel=_actionButtonTopConstraintWithLabel;
@property(nonatomic) unsigned long long skipDelaySeconds; // @synthesize skipDelaySeconds=_skipDelaySeconds;
@property(retain, nonatomic) NSURL *clickthroughURL; // @synthesize clickthroughURL=_clickthroughURL;
@property(readonly, nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) SPTAdsBookmarkButtonVisibilityHandler *bookmarkButtonVisibilityHandler; // @synthesize bookmarkButtonVisibilityHandler=_bookmarkButtonVisibilityHandler;
@property(readonly, nonatomic) SPTAdsFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) __weak SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GLUEButton *skipButton; // @synthesize skipButton=_skipButton;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUELabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(nonatomic) __weak id <SPTNowPlayingVideoControlsVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container; // @synthesize container;
- (void)adPlayerStateDidChangeToTrack:(id)arg1;
- (void)adPlayerDisplayLinkFiredWithTrack:(id)arg1;
- (void)didTapVideoView:(id)arg1;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSizeForContainerSize:(struct CGSize)arg1;
- (void)updateSkipCountdownString:(int)arg1;
- (void)setupSkipButtonWithAnimation:(_Bool)arg1;
- (void)skipButtonTapped;
- (void)updateBookmarkVisibility:(_Bool)arg1;
- (_Bool)shouldScaleButton:(id)arg1;
- (double)scaledHeightForButton:(id)arg1;
- (void)didTapBookmarkButton;
- (void)didTapActionButton;
- (void)configureFooterLabelWithEntity:(id)arg1;
- (void)configureSkipButtonWithEntity:(id)arg1;
- (void)configureActionButtonWithEntity:(id)arg1;
- (void)configureTitleLabelWithEntity:(id)arg1;
- (void)configureSubviewsWithEntity:(id)arg1;
- (void)setupConstraints;
- (void)dealloc;
- (id)initWithAdManager:(id)arg1 playerObservable:(id)arg2 theme:(id)arg3 featureProperties:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

