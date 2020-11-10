//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDXView.h"

#import "MDXMiniBarHeightDelegate-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"

@class MDXMiniBarView, NSString, UIPanGestureRecognizer, UIView;

@interface MDXWatchView : MDXView <YTPageStyleProvider, MDXMiniBarHeightDelegate>
{
    UIView *_statusBarPaddingView;
    UIPanGestureRecognizer *_miniBarPanGestureRecognizer;
    MDXMiniBarView *_miniBarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MDXMiniBarView *miniBarView; // @synthesize miniBarView=_miniBarView;
- (void)didPanMiniBar:(id)arg1;
- (void)setMiniBarHiddenPreAnimationForLayout:(int)arg1;
- (void)setMiniBarHiddenPostAnimationForLayout:(int)arg1;
- (void)updateAccessibilityVisibilityForLayout:(int)arg1;
- (void)didTapHeader;
@property(readonly, nonatomic) long long pageStyle;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didChangeHeight:(double)arg1;
- (void)setMiniBarAlpha:(double)arg1;
- (void)hideChildViews;
- (void)showQueueView;
- (double)layoutChangeDurationFromLayout:(int)arg1 toLayout:(int)arg2;
- (void)notifyObserversAboutChangeFromLayout:(int)arg1 toLayout:(int)arg2;
- (double)miniBarTopOffset;
- (void)setMiniBarBottomOffset:(double)arg1;
- (void)updateQueueViewLayoutWithWatchViewLayout:(int)arg1;
- (void)collapseQueueWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setMiniBarAlphaForLayout:(int)arg1;
- (void)panningWillStart;
- (void)animationDidEndForLayout:(int)arg1;
- (void)setWatchViewHiddenPreAnimationForLayout:(int)arg1;
- (void)animationWillStartForLayout:(int)arg1;
- (struct CGSize)queueLayoutSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
