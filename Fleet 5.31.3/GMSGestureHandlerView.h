//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSEntityRendererView.h"

#import "GMSTouchMonitorDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GMSDeceleratedValue, GMSForceTouchGestureRecognizer, GMSPanGestureRecognizer, GMSTiltGestureRecognizer, GMSTouchMonitor, NSMutableSet, NSSet, NSString, NSTimer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface GMSGestureHandlerView : GMSEntityRendererView <UIScrollViewDelegate, GMSTouchMonitorDelegate, UIGestureRecognizerDelegate>
{
    GMSTouchMonitor *_touchMonitor;
    GMSPanGestureRecognizer *_pan;
    GMSTiltGestureRecognizer *_tilt;
    UIPinchGestureRecognizer *_pinch;
    UIRotationGestureRecognizer *_rotate;
    UILongPressGestureRecognizer *_longPress;
    UILongPressGestureRecognizer *_tapDrag;
    UITapGestureRecognizer *_zoomIn;
    UITapGestureRecognizer *_zoomOut;
    UITapGestureRecognizer *_singleTap;
    GMSForceTouchGestureRecognizer *_forceTouch;
    struct deque<(anonymous namespace)::VelocityItem, std::__1::allocator<(anonymous namespace)::VelocityItem>> _tapDragTrack;
    NSSet *_gestureExclusionPairs;
    NSMutableSet *_currentGesturePair;
    double _startingRotation;
    double _startingTiltAmount;
    double _startingPinchScale;
    struct CGPoint _tapDragStartPoint;
    _Bool _shouldBlockTapDrag;
    _Bool _shouldBlockLongPress;
    _Bool _shouldBlockForceTouch;
    _Bool _didActOnForceTouch;
    _Bool _shouldBlockDoubleTap;
    _Bool _shouldBlockDeceleration;
    double _blockPanTimestamp;
    int _allowInertiaFor;
    double _allowInertiaTimestamp;
    NSTimer *_decelerationTimer;
    double _decStartTime;
    double _decLastTime;
    GMSDeceleratedValue *_decZoom;
    GMSDeceleratedValue *_decRotate;
    GMSDeceleratedValue *_decPan;
    GMSDeceleratedValue *_decTapDrag;
    struct CGPoint _decPanBase;
    float _decPanAngle;
    float _decStartingRotation;
    float _decStartingPinchScale;
    float _decStartingTapDragScale;
    struct CGPoint _decZoomRotAnchor;
    struct unique_ptr<gmscore::renderer::Time, std::__1::default_delete<gmscore::renderer::Time>> _time;
    _Bool _allowPanDuringRotateOrZoom;
    _Bool _gesturesEnabled;
    unsigned int _gestures;
    int _gestureState;
}

@property(nonatomic) int gestureState; // @synthesize gestureState=_gestureState;
@property(nonatomic) unsigned int gestures; // @synthesize gestures=_gestures;
@property(nonatomic) _Bool gesturesEnabled; // @synthesize gesturesEnabled=_gesturesEnabled;
@property(nonatomic) _Bool allowPanDuringRotateOrZoom; // @synthesize allowPanDuringRotateOrZoom=_allowPanDuringRotateOrZoom;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didEndGestures;
- (void)willStartGestures;
- (_Bool)didStartForceTouchAt:(struct CGPoint)arg1;
- (void)didStartLongPressAt:(struct CGPoint)arg1;
- (void)didTapAt:(struct CGPoint)arg1;
- (void)didZoomStepAt:(struct CGPoint)arg1 zoomingIn:(_Bool)arg2;
- (void)didZoomRelative:(double)arg1;
- (void)didTiltRelative:(double)arg1;
- (void)didRotateRelative:(double)arg1;
- (void)didPanTo:(struct CGPoint)arg1;
- (void)didEndZoomDeceleration;
- (void)willStartZoomDeceleration;
- (void)willStartZoom;
- (void)willStartTilt;
- (void)didEndRotationDeceleration;
- (void)willStartRotationDeceleration;
- (void)willStartRotation;
- (void)didEndPanDeceleration;
- (void)willStartPanDeceleration;
- (void)willStartPanFrom:(struct CGPoint)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)timerTick:(id)arg1;
- (void)stopDeceleration;
- (void)startDeceleration;
- (double)tapDragVelocity;
- (void)pruneTapDragTracksAtTime:(double)arg1;
- (void)clearTapDragTracks;
- (void)addTapDragTrackItemAtTime:(double)arg1 value:(double)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleForceTouchGesture:(id)arg1;
- (void)handleTapDragGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (void)handleZoomTapGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handleTiltGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGestureWithState:(long long)arg1 location:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)handlePanGesture:(id)arg1;
- (void)handleTouchMonitor:(id)arg1;
- (void)touchMonitor:(id)arg1 didGetEvent:(int)arg2;
- (void)endContinuousPan;
- (void)beginContinuousPanWithVelocity:(struct CGPoint)arg1;
- (void)endPanAtLocation:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (void)updatePanWithLocation:(struct CGPoint)arg1;
- (void)beginPanAtLocation:(struct CGPoint)arg1;
- (void)enableRecognizersWithGestures:(unsigned int)arg1;
- (void)didDisappear;
- (void)resetGestureState;
- (id)initWithFrame:(struct CGRect)arg1 sharedResourceCache:(id)arg2 displayLink:(id)arg3 offscreenSink:(id)arg4 externalTime:(struct Time *)arg5 gestures:(unsigned int)arg6;
- (id)initWithFrame:(struct CGRect)arg1 sharedResourceCache:(id)arg2 displayLink:(id)arg3 offscreenSink:(id)arg4 externalTime:(struct Time *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
