//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ELMRippleTouchController-Protocol.h>
#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>

@class MDCRippleView, NSString, UIColor, UILongPressGestureRecognizer, UIView;
@protocol YTELMRippleTouchControllerDelegate;

@interface YTELMRippleTouchController : NSObject <ELMRippleTouchController, UIGestureRecognizerDelegate>
{
    MDCRippleView *_rippleView;
    _Bool _tapWentOutsideOfBounds;
    struct {
        unsigned int ytelmRippleTouchControllerShouldProcessRippleTouchesAtTouchLocation:1;
        unsigned int ytelmRippleTouchControllerDidProcessRippleViewAtTouchLocation:1;
        unsigned int ytelmRippleTouchControllerInsertRippleViewIntoView:1;
    } _delegateFlags;
    _Bool _shouldProcessRippleWithScrollViewGestures;
    UIView *_view;
    id <YTELMRippleTouchControllerDelegate> _delegate;
    UILongPressGestureRecognizer *_gestureRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldProcessRippleWithScrollViewGestures; // @synthesize shouldProcessRippleWithScrollViewGestures=_shouldProcessRippleWithScrollViewGestures;
@property(readonly, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak id <YTELMRippleTouchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleRippleGesture:(id)arg1;
- (void)insertRippleView:(id)arg1 intoView:(id)arg2;
@property(readonly, nonatomic) MDCRippleView *rippleView;
- (void)dealloc;
- (void)attachGestureRecognizerToView:(id)arg1;
- (void)addRippleToView:(id)arg1;
- (id)init;
- (id)initWithView:(id)arg1;
- (void)cancelAllRipplesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) double rippleRadius;
@property(retain, nonatomic) UIColor *rippleColor;
@property(nonatomic) long long rippleStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
