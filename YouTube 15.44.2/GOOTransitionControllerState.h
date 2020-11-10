//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOONavigationControllerDelegate-Protocol.h>

@class NSArray, NSString, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface GOOTransitionControllerState : NSObject <GOONavigationControllerDelegate>
{
    NSArray *_popGesturesFromViewController;
    NSArray *_popGesturesFromTransitionObject;
    UIViewController *_viewController;
    id <UIViewControllerAnimatedTransitioning> _animatedTransition;
    id <UIViewControllerInteractiveTransitioning> _interactiveTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UIViewControllerInteractiveTransitioning> interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animatedTransition; // @synthesize animatedTransition=_animatedTransition;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)removePopRecognizers;
- (void)addPopRecognizersFromTransition:(id)arg1 withNavigationController:(id)arg2;
- (id)allPopGestures;
- (id)currentTransition;
- (id)pushGesturesForTransition:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)tearDown;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

