//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/SMAInterstitialAdOrientating-Protocol.h>
#import <Funny/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, SMAExpandAnimator, SMAMraidOrientationProperties, UIButton;
@protocol SMAMraidExpandedViewControllerDelegate;

@interface SMAMraidExpandedViewController : UIViewController <UIViewControllerTransitioningDelegate, SMAInterstitialAdOrientating>
{
    SMAMraidOrientationProperties *_orientationProperties;
    id <SMAMraidExpandedViewControllerDelegate> _delegate;
    unsigned long long _forceOrientationMask;
    long long _initialOrientation;
    id _assignedContext;
    UIButton *_closeButton;
    SMAExpandAnimator *_animator;
    struct CGRect _originalFrame;
}

@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(retain, nonatomic) SMAExpandAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) id assignedContext; // @synthesize assignedContext=_assignedContext;
@property(nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
@property(nonatomic) unsigned long long forceOrientationMask; // @synthesize forceOrientationMask=_forceOrientationMask;
@property(nonatomic) __weak id <SMAMraidExpandedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SMAMraidOrientationProperties *orientationProperties; // @synthesize orientationProperties=_orientationProperties;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)closeButtonTapped;
- (void)addCloseButton;
- (void)layoutView:(id)arg1 withRequiredSize:(struct CGSize)arg2;
- (void)addSubview:(id)arg1 requiredSize:(struct CGSize)arg2;
- (void)dismissToRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFromRect:(struct CGRect)arg1 saveContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithView:(id)arg1 requiredSize:(struct CGSize)arg2 orientationProperties:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

