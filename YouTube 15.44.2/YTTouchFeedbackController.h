//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, YTTouchFeedbackGestureRecognizer, YTTouchFeedbackView;

@interface YTTouchFeedbackController : NSObject <UIGestureRecognizerDelegate>
{
    struct CGPoint _viewStartingOrigin;
    _Bool _shouldProcessMotionInteractionWhileScrolling;
    _Bool _tapWentOutsideOfBounds;
    YTTouchFeedbackView *_touchFeedbackView;
    YTTouchFeedbackGestureRecognizer *_gestureRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak YTTouchFeedbackGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) YTTouchFeedbackView *touchFeedbackView; // @synthesize touchFeedbackView=_touchFeedbackView;
@property(nonatomic) _Bool tapWentOutsideOfBounds; // @synthesize tapWentOutsideOfBounds=_tapWentOutsideOfBounds;
@property(nonatomic) _Bool shouldProcessMotionInteractionWhileScrolling; // @synthesize shouldProcessMotionInteractionWhileScrolling=_shouldProcessMotionInteractionWhileScrolling;
- (void)cancelGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;
- (void)handleTouch:(id)arg1;
@property(nonatomic) struct UIEdgeInsets touchFeedbackInsets;
@property(nonatomic) _Bool forceCircularTouchFeedback;
@property(nonatomic) double customCornerRadius;
@property(retain, nonatomic) UIColor *feedbackColor;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

