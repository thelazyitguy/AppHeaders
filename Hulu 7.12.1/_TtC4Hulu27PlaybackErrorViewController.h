//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIButton, UILabel;

@interface _TtC4Hulu27PlaybackErrorViewController : UIViewController
{
    // Error parsing type: , name: playbackError
    // Error parsing type: , name: errorTitleLabel
    // Error parsing type: , name: errorDescriptionLabel
    // Error parsing type: , name: dismissButton
    // Error parsing type: , name: retryButton
    // Error parsing type: , name: retryButtonBottomConstraint
    // Error parsing type: , name: retryButtonBottomIpadConstraint
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)retryButtonTapped:(id)arg1;
- (void)dismissButtonTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) NSLayoutConstraint *retryButtonBottomIpadConstraint; // @synthesize retryButtonBottomIpadConstraint;
@property(nonatomic, retain) NSLayoutConstraint *retryButtonBottomConstraint; // @synthesize retryButtonBottomConstraint;
@property(nonatomic, retain) UIButton *retryButton; // @synthesize retryButton;
@property(nonatomic, retain) UIButton *dismissButton; // @synthesize dismissButton;
@property(nonatomic, retain) UILabel *errorDescriptionLabel; // @synthesize errorDescriptionLabel;
@property(nonatomic, retain) UILabel *errorTitleLabel; // @synthesize errorTitleLabel;

@end
