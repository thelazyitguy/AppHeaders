//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, PKAddPaymentPassRequestConfiguration, UILabel;
@protocol PKAddPaymentPassViewControllerDelegate;

@interface STPFakeAddPaymentPassViewController : UIViewController
{
    id <PKAddPaymentPassViewControllerDelegate> _delegate;
    PKAddPaymentPassRequestConfiguration *_configuration;
    unsigned long long _state;
    UILabel *_contentLabel;
    NSString *_errorText;
}

+ (_Bool)canAddPaymentPass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <PKAddPaymentPassViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done:(id)arg1;
- (void)next:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;

@end
