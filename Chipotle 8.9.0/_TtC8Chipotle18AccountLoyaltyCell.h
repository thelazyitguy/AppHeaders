//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIButton, UILabel, UIView, _TtC8Chipotle18CustomProgressView, _TtC8Chipotle24ChipotleLoadingIndicator;

@interface _TtC8Chipotle18AccountLoyaltyCell : UICollectionViewCell
{
    // Error parsing type: , name: loyaltyEnrolledView
    // Error parsing type: , name: pointsLabel
    // Error parsing type: , name: loyaltyProgressView
    // Error parsing type: , name: nextRewardsLabel
    // Error parsing type: , name: loyaltyDisclaimerLabel
    // Error parsing type: , name: pastPurchaseButton
    // Error parsing type: , name: pastPurchaseChevronButton
    // Error parsing type: , name: pointsLoadingView
    // Error parsing type: , name: pointsErrorView
    // Error parsing type: , name: tryAgainLabel
    // Error parsing type: , name: loadingIndicator
    // Error parsing type: , name: guacModeVerifiedView
    // Error parsing type: , name: loyaltyViewBottomConstraint
    // Error parsing type: , name: guacModeVerifiedLabel
    // Error parsing type: , name: guacModeLabelContainerView
    // Error parsing type: , name: guacModeSubTitleLabel
    // Error parsing type: , name: learnMoreButton
    // Error parsing type: , name: guacModeViewHeight
    // Error parsing type: , name: pointIncrement
    // Error parsing type: , name: userAccruedPoints
    // Error parsing type: , name: isGuacModeVerified
    // Error parsing type: , name: fetchPointsServiceStatus
    // Error parsing type: , name: didPressPointHistory
    // Error parsing type: , name: didPressForgotToScan
    // Error parsing type: , name: didPressRecycle
}

- (void).cxx_destruct;
- (void)didPressLearnMoreButton:(id)arg1;
- (void)didPressRecycleButton:(id)arg1;
- (void)didPressPastPurchaseButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak UIButton *learnMoreButton; // @synthesize learnMoreButton;
@property(nonatomic) __weak UILabel *guacModeSubTitleLabel; // @synthesize guacModeSubTitleLabel;
@property(nonatomic) __weak UIView *guacModeLabelContainerView; // @synthesize guacModeLabelContainerView;
@property(nonatomic) __weak UILabel *guacModeVerifiedLabel; // @synthesize guacModeVerifiedLabel;
@property(nonatomic) __weak NSLayoutConstraint *loyaltyViewBottomConstraint; // @synthesize loyaltyViewBottomConstraint;
@property(nonatomic) __weak UIView *guacModeVerifiedView; // @synthesize guacModeVerifiedView;
@property(nonatomic) __weak _TtC8Chipotle24ChipotleLoadingIndicator *loadingIndicator; // @synthesize loadingIndicator;
@property(nonatomic) __weak UILabel *tryAgainLabel; // @synthesize tryAgainLabel;
@property(nonatomic) __weak UIView *pointsErrorView; // @synthesize pointsErrorView;
@property(nonatomic) __weak UIView *pointsLoadingView; // @synthesize pointsLoadingView;
@property(nonatomic) __weak UIButton *pastPurchaseChevronButton; // @synthesize pastPurchaseChevronButton;
@property(nonatomic) __weak UIButton *pastPurchaseButton; // @synthesize pastPurchaseButton;
@property(nonatomic) __weak UILabel *loyaltyDisclaimerLabel; // @synthesize loyaltyDisclaimerLabel;
@property(nonatomic) __weak UILabel *nextRewardsLabel; // @synthesize nextRewardsLabel;
@property(nonatomic) __weak _TtC8Chipotle18CustomProgressView *loyaltyProgressView; // @synthesize loyaltyProgressView;
@property(nonatomic) __weak UILabel *pointsLabel; // @synthesize pointsLabel;
@property(nonatomic) __weak UIView *loyaltyEnrolledView; // @synthesize loyaltyEnrolledView;

@end
