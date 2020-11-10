//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, T1CropGridView, T1CropGuideView, T1CropShadowView, T1RoundGuideView, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;
@protocol T1CropContentViewDelegate;

@interface T1CropContentView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _dragToCropEnabled;
    struct CGSize _minSize;
    T1CropGuideView *_guideView;
    T1RoundGuideView *_roundView;
    T1CropGridView *_gridView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotateGestureRecognizer;
    _Bool _dragGestureInProgress;
    unsigned long long _dragCorner;
    struct CGRect _startCropRect;
    struct CGPoint _panBase;
    double _scaleBase;
    double _rotateBase;
    _Bool _rotating;
    struct CGRect _contentRect;
    struct CGAffineTransform _invertedTransformCache;
    struct CGAffineTransform _cachedTransform;
    _Bool _useImageViewRectForCropRect;
    id <T1CropContentViewDelegate> _delegate;
    UIImageView *_imageView;
    T1CropShadowView *_shadowView;
    long long _cropShape;
    struct CGSize _cropReferenceSize;
    struct UIEdgeInsets _contentInset;
    struct CGRect _cropRect;
    struct CGRect _imageViewRect;
    struct CGAffineTransform _imageViewTransform;
}

+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
- (void).cxx_destruct;
@property(nonatomic) long long cropShape; // @synthesize cropShape=_cropShape;
@property(readonly, nonatomic) T1CropShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <T1CropContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGAffineTransform imageViewTransform; // @synthesize imageViewTransform=_imageViewTransform;
@property(readonly, nonatomic) struct CGRect imageViewRect; // @synthesize imageViewRect=_imageViewRect;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGSize cropReferenceSize; // @synthesize cropReferenceSize=_cropReferenceSize;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGAffineTransform)_invertTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)_rectContainsCropRect:(struct CGRect)arg1 forTransform:(struct CGAffineTransform)arg2;
- (struct CGPoint)_referencePointOfCropRectForTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_rotateTransform:(struct CGAffineTransform)arg1 screenCenterRotation:(double)arg2;
- (struct CGAffineTransform)_scaleTransform:(struct CGAffineTransform)arg1 screenCenterScale:(double)arg2;
- (struct CGAffineTransform)_scaleTransformToFit:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_moveTransformToFit:(struct CGAffineTransform)arg1;
- (struct CGPoint)_limitTranslationDelta:(struct CGPoint)arg1 toFitTransform:(struct CGAffineTransform)arg2;
- (struct CGPoint)_deltaFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2 onCorner:(unsigned long long)arg3;
- (struct CGRect)_largestRectWithinPoints:(id)arg1;
- (struct CGPoint)_intersectionOfLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withLineFrom:(struct CGPoint)arg3 to:(struct CGPoint)arg4;
- (id)_getIntersectionsForLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withRectCorners:(id)arg3;
- (struct CGPoint)_pointClosestToPoint:(struct CGPoint)arg1 onLineSegmentFrom:(struct CGPoint)arg2 to:(struct CGPoint)arg3;
- (_Bool)_imageViewContainsPoint:(struct CGPoint)arg1;
- (struct CGPoint)_limitPointForNeighborCornerFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 imageViewCorners:(id)arg3;
- (struct CGPoint)_limitPointForActiveCorner:(struct CGPoint)arg1 imageViewCorners:(id)arg2;
- (struct CGPoint)_enforceInnerLimitForDelta:(struct CGPoint)arg1;
- (struct CGPoint)_limitDragDelta:(struct CGPoint)arg1;
- (void)_handleRotate:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePan:(id)arg1;
- (_Bool)_validateScaleForCropRect:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2;
- (void)_moveAndScaleImageAfterDragGesture;
- (struct CGRect)_applyDelta:(struct CGPoint)arg1 toRect:(struct CGRect)arg2 toCorner:(unsigned long long)arg3;
- (void)_handleDrag:(id)arg1;
- (void)_handleDragOrPan:(id)arg1;
- (_Bool)shouldAllowRotation;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_fitImageTransform;
- (struct CGAffineTransform)_imageViewTransformFromImageRect:(struct CGRect)arg1 cropRect:(struct CGRect)arg2 toImageRect:(struct CGRect)arg3 cropRect:(struct CGRect)arg4;
- (struct CGRect)_cropRectForReferenceSize:(struct CGSize)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)_imageViewRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageViewTransform:(struct CGAffineTransform)arg1;
- (void)setCropRect:(struct CGRect)arg1;
- (id)_cornerPointsForRect:(struct CGRect)arg1;
- (id)_imageViewCornerPoints;
- (void)_animateImageTransformToTransform:(struct CGAffineTransform)arg1;
- (double)_nextRightAngleDeltaFromTransform:(struct CGAffineTransform)arg1;
- (void)rotateImageViewToNextRightAngle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 filterParameters:(id)arg3 dragToCropEnabled:(_Bool)arg4 pinchEnabled:(_Bool)arg5 rotateEnabled:(_Bool)arg6 minSize:(struct CGSize)arg7;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
