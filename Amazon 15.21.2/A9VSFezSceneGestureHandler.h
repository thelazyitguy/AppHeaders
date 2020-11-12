//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSHashTable, NSString, UIView;
@protocol A9VSFezSceneGestureHandlerOverlayDelegate;

@interface A9VSFezSceneGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _allowsSimultaneousRotationGestures;
    UIView *_sceneView;
    id <A9VSFezSceneGestureHandlerOverlayDelegate> _overlayDelegate;
    long long _rotationValueDescription;
    NSHashTable *_listeners;
}

@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) _Bool allowsSimultaneousRotationGestures; // @synthesize allowsSimultaneousRotationGestures=_allowsSimultaneousRotationGestures;
@property(nonatomic) long long rotationValueDescription; // @synthesize rotationValueDescription=_rotationValueDescription;
@property(nonatomic) __weak id <A9VSFezSceneGestureHandlerOverlayDelegate> overlayDelegate; // @synthesize overlayDelegate=_overlayDelegate;
@property(nonatomic) __weak UIView *sceneView; // @synthesize sceneView=_sceneView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleRotation:(id)arg1;
- (void)handleTwoFingerPan:(id)arg1;
- (void)handleOneFingerPan:(id)arg1;
- (void)handleOneFingerTouchDown:(id)arg1;
- (void)handleOneFingerTap:(id)arg1;
- (void)addRotationGestureRecognizerToView:(id)arg1;
- (void)addTwoFingerPanGestureRecognizerToView:(id)arg1;
- (void)addOneFingerPanGestureRecognizerToView:(id)arg1;
- (void)addOneFingerTouchDownGestureRecognizerToView:(id)arg1;
- (void)addOneFingerTapGestureRecognizerToView:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)addGestureRecognizersToView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
