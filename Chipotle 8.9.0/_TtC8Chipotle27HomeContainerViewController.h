//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Chipotle22ChipotleViewController.h"

@class NSLayoutConstraint, UIButton, UIImageView, UIScrollView, UITextView, UIView;

@interface _TtC8Chipotle27HomeContainerViewController : _TtC8Chipotle22ChipotleViewController
{
    // Error parsing type: , name: orderPageHeightConstraint
    // Error parsing type: , name: announcementPageHeightConstraint
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: scrollContentView
    // Error parsing type: , name: ctaMenuButton
    // Error parsing type: , name: homeView
    // Error parsing type: , name: orderPromptBottomConstraint
    // Error parsing type: , name: announcementView
    // Error parsing type: , name: disclaimerLabel
    // Error parsing type: , name: disclaimerLabelBottomConstraint
    // Error parsing type: , name: ctaOrderButton
    // Error parsing type: , name: ctaOrderButtonImage
    // Error parsing type: , name: menuPromptBottomConstraint
    // Error parsing type: , name: orderViewController
    // Error parsing type: , name: standardHomeViewController
    // Error parsing type: , name: participantHomeViewController
    // Error parsing type: , name: announcementManager
    // Error parsing type: , name: childAnnouncementView
    // Error parsing type: , name: buttonMovementFactor
    // Error parsing type: , name: pageAtStartOfDrag
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: paymentManager
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)unwindToMainMenuNonAnimatedWithSegue:(id)arg1;
- (void)unwindToMainMenuWithSegue:(id)arg1;
- (void)startOrderButtonTapped;
- (void)prepareForNewMenuItem;
- (void)goToTrendingWithAnimation:(_Bool)arg1;
- (void)goToFavoritesWithAnimation:(_Bool)arg1;
- (void)goToRecentsWithAnimation:(_Bool)arg1;
- (void)didPressOrderNowWithAnimation:(_Bool)arg1;
- (void)updateAnnouncementState;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *menuPromptBottomConstraint; // @synthesize menuPromptBottomConstraint;
@property(nonatomic) __weak UIImageView *ctaOrderButtonImage; // @synthesize ctaOrderButtonImage;
@property(nonatomic) __weak UIButton *ctaOrderButton; // @synthesize ctaOrderButton;
@property(nonatomic) __weak NSLayoutConstraint *disclaimerLabelBottomConstraint; // @synthesize disclaimerLabelBottomConstraint;
@property(nonatomic) __weak UITextView *disclaimerLabel; // @synthesize disclaimerLabel;
@property(nonatomic) __weak UIView *announcementView; // @synthesize announcementView;
@property(nonatomic) __weak NSLayoutConstraint *orderPromptBottomConstraint; // @synthesize orderPromptBottomConstraint;
@property(nonatomic) __weak UIView *homeView; // @synthesize homeView;
@property(nonatomic) __weak UIButton *ctaMenuButton; // @synthesize ctaMenuButton;
@property(nonatomic) __weak UIView *scrollContentView; // @synthesize scrollContentView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak NSLayoutConstraint *announcementPageHeightConstraint; // @synthesize announcementPageHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *orderPageHeightConstraint; // @synthesize orderPageHeightConstraint;
- (void)orderButtonTapped;

@end
