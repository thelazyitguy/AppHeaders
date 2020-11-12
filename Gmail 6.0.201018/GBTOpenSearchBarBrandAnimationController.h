//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GBTOpenSearchBarBrandAnimationView, NSAttributedString, NSTimer;
@protocol GBTOpenSearchBarBrandAnimationControllerDelegate;

@interface GBTOpenSearchBarBrandAnimationController : NSObject
{
    NSTimer *_brandAnimationTimer;
    GBTOpenSearchBarBrandAnimationView *_brandAnimationView;
    NSAttributedString *_postAnimationStaticText;
    id <GBTOpenSearchBarBrandAnimationControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTOpenSearchBarBrandAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSAttributedString *postAnimationStaticText; // @synthesize postAnimationStaticText=_postAnimationStaticText;
@property(readonly, nonatomic) GBTOpenSearchBarBrandAnimationView *brandAnimationView; // @synthesize brandAnimationView=_brandAnimationView;
- (void)maybeTriggerBrandAnimationWithAnimatedAppearance:(_Bool)arg1;
- (void)brandAnimationTimerFired;
- (void)setUpBrandAnimationTimer;
- (void)performBrandAnimation;
- (void)stopAnimationAnimated:(_Bool)arg1;
- (void)openSearchBarDidDisappear;
- (void)openSearchBarWillAppear;
- (void)setBrandAnimationSpriteSheetImage:(id)arg1 numberOfFrames:(unsigned long long)arg2;
- (id)init;

@end
