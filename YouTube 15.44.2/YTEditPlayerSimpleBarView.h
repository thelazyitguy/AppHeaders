//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTAdjustableAccessibilityProtocol-Protocol.h>
#import <Module_Framework/YTEditPanPressGestureRecognizerDelegate-Protocol.h>

@class AVAsset, NSString, YTEditTrimTimeCalloutView;
@protocol YTPlayerBarViewDelegate;

@interface YTEditPlayerSimpleBarView : UIView <YTAdjustableAccessibilityProtocol, YTEditPanPressGestureRecognizerDelegate>
{
    UIView *_handleView;
    double _initialPanPosition;
    CDStruct_e83c9415 _assetTimeRange;
    CDStruct_e83c9415 _timeRange;
    UIView *_leftBoundingView;
    UIView *_rightBoundingView;
    _Bool _panning;
    AVAsset *_asset;
    YTEditTrimTimeCalloutView *_currentTimeCalloutView;
    id <YTPlayerBarViewDelegate> _delegate;
    UIView *_collisionView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *collisionView; // @synthesize collisionView=_collisionView;
@property(nonatomic) __weak id <YTPlayerBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) UIView *handleView; // @synthesize handleView=_handleView;
@property(readonly, nonatomic) YTEditTrimTimeCalloutView *currentTimeCalloutView; // @synthesize currentTimeCalloutView=_currentTimeCalloutView;
@property(nonatomic) __weak AVAsset *asset; // @synthesize asset=_asset;
- (void)adjustableDecrementForView:(id)arg1;
- (void)adjustableIncrementForView:(id)arg1;
- (void)checkForCollision;
- (void)moveHandleViewToX:(double)arg1;
- (void)gestureRecognizer:(id)arg1 didEndPanWithTranslation:(struct CGPoint)arg2;
- (void)gestureRecognizer:(id)arg1 didContinuePanWithTranslation:(struct CGPoint)arg2;
- (void)gestureRecognizerDidBeginPan:(id)arg1;
- (void)gestureRecognizerMayBeginInteraction:(id)arg1;
- (struct CGPoint)convertPointFromWindowCoordinates:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)createHandleView;
- (void)setCurrentTimeHidden:(_Bool)arg1;
- (void)setLeftBoundingView:(id)arg1 rightBoundingView:(id)arg2;
- (void)setPlayheadHidden:(_Bool)arg1;
- (void)setMediaTime:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

