//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Chipotle22ChipotleViewController.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView, _TtC8Chipotle21GroupOrderButtonsView;

@interface _TtC8Chipotle22BagEmptyViewController : _TtC8Chipotle22ChipotleViewController
{
    // Error parsing type: , name: standardTitleView
    // Error parsing type: , name: emptyBagTitleLabel
    // Error parsing type: , name: emptyBagSubheaderLabel
    // Error parsing type: , name: offerContainerView
    // Error parsing type: , name: offerImageView
    // Error parsing type: , name: offerNameLabel
    // Error parsing type: , name: offerSubheaderLabel
    // Error parsing type: , name: emptyBagAnimationView
    // Error parsing type: , name: groupOrderButtonsView
    // Error parsing type: , name: addYourOrderButton
    // Error parsing type: , name: groupOrderButtonTopConstraint
    // Error parsing type: , name: addYourOrderBottomConstraint
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: disposeBag
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didPressAddYourOrder:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *addYourOrderBottomConstraint; // @synthesize addYourOrderBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *groupOrderButtonTopConstraint; // @synthesize groupOrderButtonTopConstraint;
@property(nonatomic, retain) UIButton *addYourOrderButton; // @synthesize addYourOrderButton;
@property(nonatomic, retain) _TtC8Chipotle21GroupOrderButtonsView *groupOrderButtonsView; // @synthesize groupOrderButtonsView;
@property(nonatomic, retain) UIView *emptyBagAnimationView; // @synthesize emptyBagAnimationView;
@property(nonatomic) __weak UILabel *offerSubheaderLabel; // @synthesize offerSubheaderLabel;
@property(nonatomic) __weak UILabel *offerNameLabel; // @synthesize offerNameLabel;
@property(nonatomic) __weak UIImageView *offerImageView; // @synthesize offerImageView;
@property(nonatomic) __weak UIView *offerContainerView; // @synthesize offerContainerView;
@property(nonatomic) __weak UILabel *emptyBagSubheaderLabel; // @synthesize emptyBagSubheaderLabel;
@property(nonatomic) __weak UILabel *emptyBagTitleLabel; // @synthesize emptyBagTitleLabel;
@property(nonatomic) __weak UIView *standardTitleView; // @synthesize standardTitleView;

@end
