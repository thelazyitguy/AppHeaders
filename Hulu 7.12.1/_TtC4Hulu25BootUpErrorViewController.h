//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UITextView;

@interface _TtC4Hulu25BootUpErrorViewController : UIViewController
{
    // Error parsing type: , name: backgroundGradient
    // Error parsing type: , name: logoutButton
    // Error parsing type: , name: retryButton
    // Error parsing type: , name: messageText
    // Error parsing type: , name: retry
    // Error parsing type: , name: logout
    // Error parsing type: , name: message
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)logout:(id)arg1;
- (void)retry:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UITextView *messageText; // @synthesize messageText;
@property(nonatomic, retain) UIButton *retryButton; // @synthesize retryButton;
@property(nonatomic, retain) UIButton *logoutButton; // @synthesize logoutButton;

@end

