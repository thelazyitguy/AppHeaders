//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@protocol _TtP8RedditUI27SlidingNumberPickerDelegate_;

@interface _TtC8RedditUI19SlidingNumberPicker : UIControl
{
    // Error parsing type: , name: currentValue
    // Error parsing type: , name: delegate
    // Error parsing type: , name: range
    // Error parsing type: , name: horizontalSnap
    // Error parsing type: , name: horizontalAnimator
    // Error parsing type: , name: verticalSnap
    // Error parsing type: , name: verticalAnimator
    // Error parsing type: , name: pinIndicatorView
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: numberStack
    // Error parsing type: , name: pinIndicatorContainer
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak id <_TtP8RedditUI27SlidingNumberPickerDelegate_> delegate; // @synthesize delegate;

@end

