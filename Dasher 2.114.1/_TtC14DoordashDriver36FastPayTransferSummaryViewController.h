//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIView;

@interface _TtC14DoordashDriver36FastPayTransferSummaryViewController : UIViewController
{
    // Error parsing type: , name: fastPayStatus
    // Error parsing type: , name: availableForFastPayAmountLabel
    // Error parsing type: , name: fastPayFeeAmountLabel
    // Error parsing type: , name: transferTotalAmountLabel
    // Error parsing type: , name: transferAmountButton
    // Error parsing type: , name: transferDescriptionLabel
    // Error parsing type: , name: fastPayIsUnavailableLabel
    // Error parsing type: , name: transferAmountsContainer
    // Error parsing type: , name: onTransferFlowCompleted
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)transferButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak UIView *transferAmountsContainer; // @synthesize transferAmountsContainer;
@property(nonatomic) __weak UILabel *fastPayIsUnavailableLabel; // @synthesize fastPayIsUnavailableLabel;
@property(nonatomic) __weak UILabel *transferDescriptionLabel; // @synthesize transferDescriptionLabel;
@property(nonatomic) __weak UIButton *transferAmountButton; // @synthesize transferAmountButton;
@property(nonatomic) __weak UILabel *transferTotalAmountLabel; // @synthesize transferTotalAmountLabel;
@property(nonatomic) __weak UILabel *fastPayFeeAmountLabel; // @synthesize fastPayFeeAmountLabel;
@property(nonatomic) __weak UILabel *availableForFastPayAmountLabel; // @synthesize availableForFastPayAmountLabel;

@end
