//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIStackView, UIView;

@interface _TtC17AspenUIComponents11CardOverlay : UIViewController
{
    // Error parsing type: , name: closeButtonPressedHandler
    // Error parsing type: , name: dismissOnBackgroundTap
    // Error parsing type: , name: contentContainer
    // Error parsing type: , name: footerContainer
    // Error parsing type: , name: dialogTransitioningDelegate
}

- (void).cxx_destruct;
- (void)addButtonToFooter:(id)arg1;
- (void)updateContent;
- (void)configureView;
- (void)closeButtonPressed;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) UIStackView *footerContainer; // @synthesize footerContainer;
@property(nonatomic, readonly) UIView *contentContainer; // @synthesize contentContainer;
@property(nonatomic) _Bool dismissOnBackgroundTap; // @synthesize dismissOnBackgroundTap;
@property(nonatomic, copy) CDUnknownBlockType closeButtonPressedHandler;

@end
