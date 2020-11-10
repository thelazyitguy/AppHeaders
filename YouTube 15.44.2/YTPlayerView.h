//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/UIDragInteractionDelegate-Protocol.h>
#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>
#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTPlayerViewLayoutProtocol-Protocol.h>

@class GIMMe, NSString, UIDragInteraction, UIPanGestureRecognizer, UIPinchGestureRecognizer;
@protocol MLPlayerViewProtocol, YTPlayerViewDelegate;

@interface YTPlayerView : UIView <UIGestureRecognizerDelegate, UIDragInteractionDelegate, YTPageStyleProvider, YTPlayerViewLayoutProtocol>
{
    double _lastPinchScale;
    UIPinchGestureRecognizer *_pinchRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    int _playerViewLayout;
    UIView *_renderingViewContainer;
    struct CGRect _renderingViewCustomFrame;
    struct CGPoint _renderingViewCustomTranslation;
    double _renderingViewCustomScaleFactor;
    double _aspectRatio;
    UIDragInteraction *_dragInteraction;
    _Bool _enableUserInteractionInMiniLayout;
    _Bool _dragDropEnabled;
    _Bool _zoomToFill;
    GIMMe *_gimme;
    id <YTPlayerViewDelegate> _playerViewDelegate;
    UIView *_overlayView;
    UIView<MLPlayerViewProtocol> *_renderingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool zoomToFill; // @synthesize zoomToFill=_zoomToFill;
@property(nonatomic) _Bool dragDropEnabled; // @synthesize dragDropEnabled=_dragDropEnabled;
@property(retain, nonatomic) UIView<MLPlayerViewProtocol> *renderingView; // @synthesize renderingView=_renderingView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak id <YTPlayerViewDelegate> playerViewDelegate; // @synthesize playerViewDelegate=_playerViewDelegate;
@property(nonatomic) _Bool enableUserInteractionInMiniLayout; // @synthesize enableUserInteractionInMiniLayout=_enableUserInteractionInMiniLayout;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (struct CGRect)renderingViewFrame;
- (void)updateRenderingViewCustomFrame;
- (void)didPanRenderingView:(id)arg1;
- (void)didPinch:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)playerSnapshotView;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
@property(readonly, nonatomic) long long pageStyle;
- (void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)setAspectRatio:(double)arg1;
- (void)setRenderingViewCustomTranslation:(struct CGPoint)arg1 customScale:(double)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)setRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2 duration:(double)arg3;
@property(readonly, nonatomic) struct CGSize renderingViewSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
