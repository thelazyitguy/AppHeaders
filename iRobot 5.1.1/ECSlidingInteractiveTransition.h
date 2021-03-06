//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ECPercentDrivenInteractiveTransition.h"

@class ECSlidingViewController;

@interface ECSlidingInteractiveTransition : ECPercentDrivenInteractiveTransition
{
    _Bool _positiveLeftToRight;
    _Bool _leftPanDirectionDisabled;
    _Bool _rightPanDirectionDisabled;
    ECSlidingViewController *_slidingViewController;
    double _fullWidth;
    double _currentPercentage;
    CDUnknownBlockType _coordinatorInteractionEnded;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool rightPanDirectionDisabled; // @synthesize rightPanDirectionDisabled=_rightPanDirectionDisabled;
@property(nonatomic) _Bool leftPanDirectionDisabled; // @synthesize leftPanDirectionDisabled=_leftPanDirectionDisabled;
@property(copy, nonatomic) CDUnknownBlockType coordinatorInteractionEnded; // @synthesize coordinatorInteractionEnded=_coordinatorInteractionEnded;
@property(nonatomic) double currentPercentage; // @synthesize currentPercentage=_currentPercentage;
@property(nonatomic) double fullWidth; // @synthesize fullWidth=_fullWidth;
@property(nonatomic) _Bool positiveLeftToRight; // @synthesize positiveLeftToRight=_positiveLeftToRight;
@property(nonatomic) ECSlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
- (void)resetPanGesture;
- (void)disablePanGestureInDirection:(unsigned long long)arg1;
- (void)updateTopViewHorizontalCenterWithRecognizer:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)initWithSlidingViewController:(id)arg1;

@end

