//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PagedTabViewController.h"

#import "PagedTabControllerParentCallback-Protocol.h"
#import "ParallaxHeaderViewCallback-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "SubredditContextProvider-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UserProfileEditViewControllerDelegate-Protocol.h"
#import "UserProfilePresenterDelegate-Protocol.h"

@class CommentListViewController, CorrelationID, FloatingHeaderManager, ListingViewController, NSArray, NSLayoutConstraint, NSString, NotificationActionSheetPresenter, ParallaxHeaderView, RoadblockCoordinator, Subreddit, UIPanGestureRecognizer, UserAboutViewController, UserProfilePresenter;
@protocol UserPostFeedViewControllerInterface;

@interface UserProfileViewController : PagedTabViewController <ParallaxHeaderViewCallback, RUIActionSheetViewControllerDelegate, UIGestureRecognizerDelegate, PagedTabControllerParentCallback, UserProfileEditViewControllerDelegate, UserProfilePresenterDelegate, SubredditContextProvider>
{
    _Bool _previewModeEnabled;
    NSArray *_overflowItems;
    NSString *_username;
    Subreddit *_subreddit;
    UserProfilePresenter *_presenter;
    ParallaxHeaderView *_headerView;
    CorrelationID *_correlationID;
    ListingViewController<UserPostFeedViewControllerInterface> *_feedController;
    UserAboutViewController *_aboutController;
    FloatingHeaderManager *_floatingHeaderManager;
    CommentListViewController *_commentsController;
    unsigned long long _selectedActiveControllerPage;
    NSLayoutConstraint *_headerViewTopConstraint;
    NSArray *_rightBarButtonItems;
    NotificationActionSheetPresenter *_notificationPresenter;
    RoadblockCoordinator *_roadblockCoordinator;
    long long _statusBarStyle;
    UIPanGestureRecognizer *_currentPanGestureRecognizer;
}

+ (id)controllerWithUsername:(id)arg1 accountContext:(id)arg2 correlationID:(id)arg3 preselectedPage:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *currentPanGestureRecognizer; // @synthesize currentPanGestureRecognizer=_currentPanGestureRecognizer;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) RoadblockCoordinator *roadblockCoordinator; // @synthesize roadblockCoordinator=_roadblockCoordinator;
@property(retain, nonatomic) NotificationActionSheetPresenter *notificationPresenter; // @synthesize notificationPresenter=_notificationPresenter;
@property(retain, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTopConstraint; // @synthesize headerViewTopConstraint=_headerViewTopConstraint;
@property(nonatomic) unsigned long long selectedActiveControllerPage; // @synthesize selectedActiveControllerPage=_selectedActiveControllerPage;
@property(retain, nonatomic) CommentListViewController *commentsController; // @synthesize commentsController=_commentsController;
@property(retain, nonatomic) FloatingHeaderManager *floatingHeaderManager; // @synthesize floatingHeaderManager=_floatingHeaderManager;
@property(retain, nonatomic) UserAboutViewController *aboutController; // @synthesize aboutController=_aboutController;
@property(retain, nonatomic) ListingViewController<UserPostFeedViewControllerInterface> *feedController; // @synthesize feedController=_feedController;
@property(readonly, copy, nonatomic) CorrelationID *correlationID; // @synthesize correlationID=_correlationID;
@property(retain, nonatomic) ParallaxHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UserProfilePresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) _Bool previewModeEnabled; // @synthesize previewModeEnabled=_previewModeEnabled;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSArray *overflowItems; // @synthesize overflowItems=_overflowItems;
- (void)presentLoginViewController;
- (void)presentAnonymousBrowsingExitDialog;
- (void)showNewCustomFeedTooltip;
- (void)showCustomFeed:(id)arg1;
- (void)userBlockedSuccessfully;
- (void)userInfoUpdated;
- (void)sendSupport;
- (void)startChat;
- (void)updateSubredditContext;
- (void)parallaxHeaderView:(id)arg1 didTapTrophy:(id)arg2;
- (void)parallaxHeaderViewDidTapEditButton:(id)arg1;
- (void)userProfileEditViewControllerProfileWasEdited:(id)arg1;
- (id)majorContentScrollView;
- (void)trackInitiatingChatEvent;
- (void)parallaxHeaderViewDidTapSnoovatarButton:(id)arg1;
- (void)parallaxHeaderViewDidChangeHeight:(id)arg1 heightDelta:(double)arg2;
- (void)parallaxHeaderviewDidTapNotificationButton:(id)arg1;
- (void)parallaxHeaderViewDidTapStartChat:(id)arg1;
- (void)parallaxHeaderViewDidTapFollowButton:(id)arg1;
- (void)parallaxHeaderViewDidBecomeHidden:(id)arg1;
- (void)parallaxHeaderViewDidBecomeVisible:(id)arg1;
- (void)floatingHeaderShouldMove:(id)arg1;
- (double)preferredMaxFloatingTransformY;
- (void)pagedTabControllerChildDidStartReloading:(id)arg1;
- (void)configureTrophies;
- (void)configureOverflowItems;
- (void)didTapOverflow:(id)arg1;
- (void)didTapShare:(id)arg1;
- (void)addToCustomFeed;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)pageSegmentedControl:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 previousIndex:(long long)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)toggleFollow:(id)arg1;
- (void)pagedTabViewController:(id)arg1 transitionCompleted:(_Bool)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 navigationMethod:(long long)arg5;
- (void)updateContentScrollViewInsets;
- (void)contentScrollViewContentInsetsDidChange;
- (void)resetFloatingHeaderManagerToScrollView:(id)arg1;
- (void)configureNavigationBarStyle;
- (long long)preferredStatusBarStyle;
- (void)configureNavigationBarTintColor;
- (void)configureNavigationBarAppearance;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)preferredContentInset;
- (void)setupParallaxHeaderView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setActiveControllerPage:(unsigned long long)arg1;
- (id)initWithUsername:(id)arg1 accountContext:(id)arg2;
- (id)initWithUsername:(id)arg1 accountContext:(id)arg2 correlationID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
