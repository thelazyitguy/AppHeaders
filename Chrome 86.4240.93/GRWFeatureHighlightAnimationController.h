//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface GRWFeatureHighlightAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    unsigned long long _dismissStyle;
}

@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) unsigned long long dismissStyle; // @synthesize dismissStyle=_dismissStyle;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
