//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "YTBaseAnimatorStatus-Protocol.h"
#import "YTLightboxAnimator-Protocol.h"

@class NSString, UIView;
@protocol YTLightboxAnimatorDelegate;

@interface YTLightboxDismissAnimator : UIPercentDrivenInteractiveTransition <YTLightboxAnimator, UIViewControllerAnimatedTransitioning, YTBaseAnimatorStatus>
{
    UIView *_targetView;
    _Bool _isAnimating;
    double targetAspectRatio;
    id <YTLightboxAnimatorDelegate> delegate;
}

+ (_Bool)supportsInteractiveDismissal;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTLightboxAnimatorDelegate> delegate; // @synthesize delegate;
@property(nonatomic) double targetAspectRatio; // @synthesize targetAspectRatio;
- (void)animationEnded:(_Bool)arg1;
- (_Bool)isAnimating;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTargetView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
