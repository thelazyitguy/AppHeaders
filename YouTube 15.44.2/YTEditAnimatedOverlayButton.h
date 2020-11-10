//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditOverlayButton.h>

@class LOTAnimationView, LOTComposition, LOTLayerContainer, NSString;

@interface YTEditAnimatedOverlayButton : YTEditOverlayButton
{
    NSString *_currentLayerName;
    LOTLayerContainer *_layerContainer;
    LOTAnimationView *_animationView;
    long long _autoPlayBehavior;
}

- (void).cxx_destruct;
@property(nonatomic) long long autoPlayBehavior; // @synthesize autoPlayBehavior=_autoPlayBehavior;
@property(readonly, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
- (void)updateAnimationLayers;
- (id)layerNameForControlState:(unsigned long long)arg1;
- (void)setAnimationLayerName:(id)arg1 forState:(unsigned long long)arg2;
- (void)stateDidChange:(unsigned long long)arg1;
- (struct CGRect)animationViewRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)tintColorAlpha;
- (void)playAnimation;
- (_Bool)stateIsSelected:(unsigned long long)arg1;
- (_Bool)stateDidToggle:(unsigned long long)arg1;
- (void)didTouchUpInside;
@property(retain, nonatomic) LOTComposition *animationComp;
- (id)initWithFrame:(struct CGRect)arg1 layoutStyle:(unsigned long long)arg2;
- (void)setUpIconFromModel:(id)arg1;

@end

