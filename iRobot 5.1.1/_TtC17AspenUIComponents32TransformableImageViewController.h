//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol _TtP17AspenUIComponents40TransformableImageViewControllerDelegate_;

@interface _TtC17AspenUIComponents32TransformableImageViewController : UIViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isResetTransformButtonActive
    // Error parsing type: , name: imageViewContentMode
    // Error parsing type: , name: image
    // Error parsing type: , name: $__lazy_storage_$_imageView
    // Error parsing type: , name: $__lazy_storage_$_resetTransformButton
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
@property(nonatomic) struct CGAffineTransform imageTransform;
@property(nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode;
@property(nonatomic) _Bool isResetTransformButtonActive; // @synthesize isResetTransformButtonActive;
@property(nonatomic) __weak id <_TtP17AspenUIComponents40TransformableImageViewControllerDelegate_> delegate; // @synthesize delegate;

@end

