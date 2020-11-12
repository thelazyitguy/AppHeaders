//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CAGradientLayer, GLUEButton, SPTScannablesDependencies, UIButton, UIImageView, UILabel, UIView;
@protocol SPTScannablesCameraOnboardingSlateViewControllerDelegate;

@interface SPTScannablesCameraOnboardingSlateViewController : UIViewController
{
    SPTScannablesDependencies *_dependencies;
    id <SPTScannablesCameraOnboardingSlateViewControllerDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    GLUEButton *_scanButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) GLUEButton *scanButton; // @synthesize scanButton=_scanButton;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) __weak id <SPTScannablesCameraOnboardingSlateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
- (void)didTapDismissButton;
- (void)didTapScanButton;
- (void)addCancelButton;
- (void)addScanButton;
- (void)addBodyLabel;
- (void)addTitleLabel;
- (void)addImageView;
- (void)addGradientView;
- (void)addBackgroundView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDependencies:(id)arg1 delegate:(id)arg2;

@end
