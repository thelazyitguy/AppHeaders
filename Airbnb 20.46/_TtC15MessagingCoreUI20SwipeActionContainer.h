//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _TtC15MessagingCoreUI20SwipeActionContainer : UIView
{
    // Error parsing type: , name: leadingSwipeActionHandler
    // Error parsing type: , name: trailingSwipeActionHandler
    // Error parsing type: , name: swipeableView
    // Error parsing type: , name: feedbackGenerator
    // Error parsing type: , name: style
    // Error parsing type: , name: state
    // Error parsing type: , name: leadingButtonView
    // Error parsing type: , name: trailingButtonView
    // Error parsing type: , name: gestureRecognizerDelegate
    // Error parsing type: , name: panGestureRecognizer
    // Error parsing type: , name: swipeableViewTapGestureRecognizer
    // Error parsing type: , name: trailingButtonViewLeadingConstraint
    // Error parsing type: , name: leadingButtonViewTrailingConstraint
    // Error parsing type: , name: swipeableViewTopConstraint
    // Error parsing type: , name: swipeableViewBottomConstraint
    // Error parsing type: , name: swipeableViewWidthConstraint
    // Error parsing type: , name: swipeableViewCenterXConstraint
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleSwipeableViewTappedFrom:(id)arg1;
- (void)handleTrailingButtonCancelled;
- (void)handleTrailingButtonTapped;
- (void)handleTrailingButtonHighlighted;
- (void)handleLeadingButtonCancelled;
- (void)handleLeadingButtonTapped;
- (void)handleLeadingButtonHighlighted;
- (void)handlePanFrom:(id)arg1;
@property(nonatomic) struct UIEdgeInsets layoutMargins;
- (id)initWithCoder:(id)arg1;

@end
