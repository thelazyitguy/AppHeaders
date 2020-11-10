//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOTransition.h>

#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIView;

@interface GOOTransitionHorizontalSlide : GOOTransition <UIGestureRecognizerDelegate>
{
    UIView *_shadowView;
    long long _layoutDirection;
}

+ (id)horizontalSlideTransitionForOperation:(long long)arg1;
- (void).cxx_destruct;
- (void)addShadowView;
- (struct CGAffineTransform)offscreenTransform;
- (struct CGAffineTransform)slideEndTransform;
- (struct CGAffineTransform)slideStartTransform;
- (id)stationaryView;
- (id)stationaryHeaderView;
- (id)slidingView;
- (id)slidingHeaderView;
- (id)interactivePopTransitionGestures;
- (_Bool)shouldFilterTransitioningViewKey:(id)arg1;
- (void)transitionDidComplete:(_Bool)arg1;
- (void)performTransition;
- (void)prepareTransition;
- (id)initWithTransitionComponents:(unsigned long long)arg1 navigationOperation:(long long)arg2 layoutDirection:(long long)arg3;
- (id)initWithTransitionComponents:(unsigned long long)arg1 navigationOperation:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

