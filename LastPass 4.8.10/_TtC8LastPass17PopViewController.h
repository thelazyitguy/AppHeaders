//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UIButton, UILabel;

@interface _TtC8LastPass17PopViewController : UIViewController
{
    // Error parsing type: , name: dictInfo
    // Error parsing type: , name: lblTitle
    // Error parsing type: , name: lblMessage
    // Error parsing type: , name: busyView
    // Error parsing type: , name: btnNo
    // Error parsing type: , name: btnYes
}

- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)btnYesClicked:(id)arg1;
- (void)btnNoClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak UIButton *btnYes; // @synthesize btnYes;
@property(nonatomic) __weak UIButton *btnNo; // @synthesize btnNo;
@property(nonatomic) __weak UIActivityIndicatorView *busyView; // @synthesize busyView;
@property(nonatomic) __weak UILabel *lblMessage; // @synthesize lblMessage;
@property(nonatomic) __weak UILabel *lblTitle; // @synthesize lblTitle;

@end
