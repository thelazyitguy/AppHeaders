//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIButton, UILabel, _TtC14DoordashDriver21ActivityIndicatorView;

@interface _TtC14DoordashDriver28LicenseCaptureViewController : UIViewController
{
    // Error parsing type: , name: _hardwarePermissionsService
    // Error parsing type: , name: delegate
    // Error parsing type: , name: captureController
    // Error parsing type: , name: scanInfoCardViewController
    // Error parsing type: , name: imageLoaded
    // Error parsing type: , name: sideOfDocument
    // Error parsing type: , name: instructionLabel
    // Error parsing type: , name: completeButton
    // Error parsing type: , name: frontCaptureButton
    // Error parsing type: , name: idFrontLabel
    // Error parsing type: , name: skipButton
    // Error parsing type: , name: skipHeightConstraint
    // Error parsing type: , name: activityIndicatorView
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapComplete:(id)arg1;
- (void)didTapSkip:(id)arg1;
- (void)didTapFrontCapture:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak _TtC14DoordashDriver21ActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView;
@property(nonatomic) __weak NSLayoutConstraint *skipHeightConstraint; // @synthesize skipHeightConstraint;
@property(nonatomic) __weak UIButton *skipButton; // @synthesize skipButton;
@property(nonatomic) __weak UILabel *idFrontLabel; // @synthesize idFrontLabel;
@property(nonatomic) __weak UIButton *frontCaptureButton; // @synthesize frontCaptureButton;
@property(nonatomic) __weak UIButton *completeButton; // @synthesize completeButton;
@property(nonatomic) __weak UILabel *instructionLabel; // @synthesize instructionLabel;

@end
