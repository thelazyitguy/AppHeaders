//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/UjetBasePopupViewController.h>

@class UjetPrimaryButton, UjetSecondaryButton;

@interface UjetBaseAlertPopupViewController : UjetBasePopupViewController
{
    UjetPrimaryButton *_positiveButton;
    UjetSecondaryButton *_negativeButton;
}

@property(nonatomic) __weak UjetSecondaryButton *negativeButton; // @synthesize negativeButton=_negativeButton;
@property(nonatomic) __weak UjetPrimaryButton *positiveButton; // @synthesize positiveButton=_positiveButton;
- (void).cxx_destruct;
- (void)positiveButtonTapped;
- (void)negativeButtonTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

