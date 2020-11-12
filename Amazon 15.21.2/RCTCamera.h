//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RCTBridge, RCTCameraFocusSquare, RCTCameraManager;

@interface RCTCamera : UIView
{
    _Bool _multipleTouches;
    _Bool _onFocusChanged;
    _Bool _defaultOnFocusComponent;
    _Bool _onZoomChanged;
    _Bool _previousIdleTimerDisabled;
    RCTCameraFocusSquare *_camFocus;
    RCTCameraManager *_manager;
    RCTBridge *_bridge;
}

@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) __weak RCTCameraManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) RCTCameraFocusSquare *camFocus; // @synthesize camFocus=_camFocus;
- (void).cxx_destruct;
- (void)changePreviewOrientation:(long long)arg1;
- (void)handlePinchToZoomRecognizer:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)orientationChanged:(id)arg1;
- (void)removeFromSuperview;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithManager:(id)arg1 bridge:(id)arg2;
- (void)setOnZoomChanged:(_Bool)arg1;
- (void)setDefaultOnFocusComponent:(_Bool)arg1;
- (void)setOnFocusChanged:(_Bool)arg1;
- (void)setOrientation:(long long)arg1;

@end
