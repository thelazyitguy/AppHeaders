//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GAZAccountHeaderViewController.h>

@class GAZButtonView, NSString, SSOIdentity, UIView;

@interface GAZOfflineCodeViewController : GAZAccountHeaderViewController
{
    SSOIdentity *_identity;
    NSString *_otpCode;
    UIView *_codeView;
    GAZButtonView *_buttonView;
}

- (void).cxx_destruct;
- (void)closeButtonPressed;
- (void)updateButtonViewContainerConstraints;
- (void)viewDidLayoutSubviews;
- (id)newFlatButton;
- (id)formatCode:(id)arg1 pieceLengths:(id)arg2;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithUserID:(id)arg1;

@end
