//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;
@protocol GBTConstrainedPanRecognizerDelegate;

@interface GBTConstrainedPanRecognizer : UIGestureRecognizer
{
    unsigned long long _directionFreedom;
    UITouch *_trackingTouch;
    double _translationInScreenTime;
    double _previousTranslationInScreenTime;
    struct CGPoint _startingVector;
    struct CGPoint _trackingTouchStartScreenPoint;
    struct CGPoint _translationInScreen;
    struct CGPoint _previousTranslationInScreen;
}

- (void).cxx_destruct;
@property(nonatomic) double previousTranslationInScreenTime; // @synthesize previousTranslationInScreenTime=_previousTranslationInScreenTime;
@property(nonatomic) struct CGPoint previousTranslationInScreen; // @synthesize previousTranslationInScreen=_previousTranslationInScreen;
@property(nonatomic) double translationInScreenTime; // @synthesize translationInScreenTime=_translationInScreenTime;
@property(nonatomic) struct CGPoint translationInScreen; // @synthesize translationInScreen=_translationInScreen;
@property(nonatomic) struct CGPoint trackingTouchStartScreenPoint; // @synthesize trackingTouchStartScreenPoint=_trackingTouchStartScreenPoint;
@property(retain, nonatomic) UITouch *trackingTouch; // @synthesize trackingTouch=_trackingTouch;
@property(nonatomic) struct CGPoint startingVector; // @synthesize startingVector=_startingVector;
@property(nonatomic) unsigned long long directionFreedom; // @synthesize directionFreedom=_directionFreedom;
- (_Bool)hasMovedMinimumDistanceForTouches:(id)arg1;
- (_Bool)hasFreedomViolationForTouches:(id)arg1;
- (_Bool)hasMoreFreedomThan:(id)arg1;
- (void)updateTranslationAndVelocityWithTouches:(id)arg1;
- (void)reset;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)startedFromLeftEdge;
- (struct CGPoint)velocityInView:(id)arg1;
- (struct CGPoint)translationInView:(id)arg1;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(nonatomic) __weak id <GBTConstrainedPanRecognizerDelegate> delegate; // @dynamic delegate;

@end
