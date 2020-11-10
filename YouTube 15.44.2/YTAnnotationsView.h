//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPanGestureRecognizer, YTCallToActionAnnotationView, YTFeaturedVideoView;
@protocol YTAnnotationsViewProtocol;

@interface YTAnnotationsView : UIView
{
    double _subViewPanX;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _allowSwipeDismiss;
    int _callToActionAnnotationState;
    YTCallToActionAnnotationView *_callToActionView;
    YTFeaturedVideoView *_featuredVideoView;
    UIView<YTAnnotationsViewProtocol> *_activeView;
}

- (void).cxx_destruct;
@property(nonatomic) int callToActionAnnotationState; // @synthesize callToActionAnnotationState=_callToActionAnnotationState;
@property(nonatomic) _Bool allowSwipeDismiss; // @synthesize allowSwipeDismiss=_allowSwipeDismiss;
@property(nonatomic) UIView<YTAnnotationsViewProtocol> *activeView; // @synthesize activeView=_activeView;
@property(readonly, nonatomic) YTFeaturedVideoView *featuredVideoView; // @synthesize featuredVideoView=_featuredVideoView;
@property(readonly, nonatomic) YTCallToActionAnnotationView *callToActionView; // @synthesize callToActionView=_callToActionView;
- (void)panWithXDistance:(double)arg1 xVelocity:(double)arg2 panFinished:(_Bool)arg3;
- (void)didPan:(id)arg1;
- (void)fadeOutActiveView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

