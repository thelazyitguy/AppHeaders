//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ListingStateControllerDelegate-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"
#import "RichTextDisplayNodeDelegate-Protocol.h"
#import "SubredditWikiPagePresentable-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"
#import "_TtP6Reddit44SubredditMentionUpsellViewControllerDelegate_-Protocol.h"

@class AnalyticsEvent, BaseLabel, BaseScrollView, BaseTextView, BaseView, EmptyDogeView, IntrinsicSizeNodeWrapper, ListingStateController, NSLayoutConstraint, NSString, NSURL, RichTextDisplayNode, SubredditWikiPagePresenter, UIStackView, _TtC6Reddit29CommunityCreateFlowController, _TtC6Reddit36SubredditMentionUpsellViewController;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface SubredditWikiPageViewController : BaseViewController <RichTextDisplayNodeDelegate, RUIThemeUpdateCallbackProtocol, SubredditWikiPagePresentable, UITextViewDelegate, ListingStateControllerDelegate, _TtP6Reddit44SubredditMentionUpsellViewControllerDelegate_, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    SubredditWikiPagePresenter *_presenter;
    BaseScrollView *_scrollView;
    UIStackView *_contentStackView;
    IntrinsicSizeNodeWrapper *_contentWrapper;
    RichTextDisplayNode *_contentNode;
    EmptyDogeView *_emptyView;
    BaseLabel *_titleLabel;
    BaseView *_topSeparatorLine;
    BaseLabel *_contentDescriptionTitleLabel;
    BaseLabel *_contentDescriptionSubtitleLabel;
    BaseView *_bottomSeparatorLine;
    BaseTextView *_footerTextView;
    ListingStateController *_listingStateController;
    NSLayoutConstraint *_scrollViewLeadingConstraint;
    NSLayoutConstraint *_scrollViewTrailingConstraint;
    _TtC6Reddit36SubredditMentionUpsellViewController *_subredditMentionUpsellViewController;
    _TtC6Reddit29CommunityCreateFlowController *_createFlowController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6Reddit29CommunityCreateFlowController *createFlowController; // @synthesize createFlowController=_createFlowController;
@property(retain, nonatomic) _TtC6Reddit36SubredditMentionUpsellViewController *subredditMentionUpsellViewController; // @synthesize subredditMentionUpsellViewController=_subredditMentionUpsellViewController;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewTrailingConstraint; // @synthesize scrollViewTrailingConstraint=_scrollViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewLeadingConstraint; // @synthesize scrollViewLeadingConstraint=_scrollViewLeadingConstraint;
@property(retain, nonatomic) ListingStateController *listingStateController; // @synthesize listingStateController=_listingStateController;
@property(retain, nonatomic) BaseTextView *footerTextView; // @synthesize footerTextView=_footerTextView;
@property(retain, nonatomic) BaseView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) BaseLabel *contentDescriptionSubtitleLabel; // @synthesize contentDescriptionSubtitleLabel=_contentDescriptionSubtitleLabel;
@property(retain, nonatomic) BaseLabel *contentDescriptionTitleLabel; // @synthesize contentDescriptionTitleLabel=_contentDescriptionTitleLabel;
@property(retain, nonatomic) BaseView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) EmptyDogeView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) RichTextDisplayNode *contentNode; // @synthesize contentNode=_contentNode;
@property(retain, nonatomic) IntrinsicSizeNodeWrapper *contentWrapper; // @synthesize contentWrapper=_contentWrapper;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) BaseScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) SubredditWikiPagePresenter *presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
- (void)subredditMentionUpsellController:(id)arg1 shouldCreateSubreddit:(_Bool)arg2;
- (_Bool)openSubredditMentionsUpsell:(id)arg1;
- (void)themeDidChange:(id)arg1;
- (void)richTextDisplayNode:(id)arg1 richTextTextNode:(id)arg2 didTapURL:(id)arg3 atPoint:(struct CGPoint)arg4 atRange:(struct _NSRange)arg5;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)listingStateController:(id)arg1 didPullToRefresh:(id)arg2;
- (void)listingStateController:(id)arg1 didTapLoadingSpinner:(id)arg2;
- (void)subredditWikiPagePresenter:(id)arg1 didFailToLoadWikiPageWithError:(id)arg2;
- (void)subredditWikiPagePresenterDidUpdateWithInvalidContent:(id)arg1;
- (void)subredditWikiPagePresenter:(id)arg1 didUpdateWithWikiPage:(id)arg2;
- (void)subredditWikiPagePresenter:(id)arg1 didUpdateWithWikiIndex:(id)arg2;
- (void)subredditWikiPagePresenter:(id)arg1 didFetchSubredditStyling:(id)arg2;
- (void)subredditWikiPagePresenterWillStartFetchingWikiData:(id)arg1;
- (void)navShareButtonTapped:(id)arg1;
- (void)configureViewAppearance;
- (void)showEmptyContentState;
- (void)showInvalidContentState;
- (void)navigateToURL:(id)arg1;
- (void)didPressEmptyViewButton;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)configureNavigationBarStyle;
- (void)configureNavigationBarTintColor;
- (void)configureNavigationBarAppearance;
- (void)configureTextNode;
- (void)setupConstraints;
- (void)setupListingStateController;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

