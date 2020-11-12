//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/UIGestureRecognizerDelegate-Protocol.h>

@class GMSx_MDCRippleView, NSString, UILongPressGestureRecognizer, UIView;
@protocol MDCRippleTouchControllerDelegate;

@interface GMSx_MDCRippleTouchController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _tapWentOutsideOfBounds;
    _Bool _deferred;
    struct {
        unsigned int rippleTouchControllerShouldProcessRippleTouchesAtTouchLocation:1;
        unsigned int rippleTouchControllerDidProcessRippleViewAtTouchLocation:1;
        unsigned int rippleTouchControllerInsertRippleViewIntoView:1;
        unsigned int rippleTouchControllerRippleViewAtTouchLocation:1;
    } _delegateFlags;
    _Bool _shouldProcessRippleWithScrollViewGestures;
    GMSx_MDCRippleView *_rippleView;
    UIView *_view;
    id <MDCRippleTouchControllerDelegate> _delegate;
    UILongPressGestureRecognizer *_gestureRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldProcessRippleWithScrollViewGestures; // @synthesize shouldProcessRippleWithScrollViewGestures=_shouldProcessRippleWithScrollViewGestures;
@property(readonly, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak id <MDCRippleTouchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleRippleGesture:(id)arg1;
- (void)insertRippleViewIntoView:(id)arg1;
- (void)attachGestureRecognizerToView:(id)arg1;
- (void)configureRippleWithView:(id)arg1;
- (void)addRippleToView:(id)arg1;
@property(readonly, nonatomic) GMSx_MDCRippleView *rippleView; // @synthesize rippleView=_rippleView;
- (void)dealloc;
- (id)init;
- (id)initWithView:(id)arg1 deferred:(_Bool)arg2;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
