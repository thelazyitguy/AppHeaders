//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface SCFullscreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _duration;
    unsigned long long _animationType;
    id <UIViewControllerContextTransitioning> _context;
}

@property(retain, nonatomic) id <UIViewControllerContextTransitioning> context; // @synthesize context=_context;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (unsigned long long)animationOptions:(id)arg1;
- (id)initWithAnimationType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
