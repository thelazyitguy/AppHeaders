//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIContainerTransitionContext-Protocol.h"

@class NSString, UIView, UIViewController;

@interface NFUIContainerTransitionContextInternal : NSObject <NFUIContainerTransitionContext>
{
    _Bool _animated;
    UIView *_containerView;
    double _duration;
    UIView *_toView;
    UIView *_fromView;
    UIViewController *_toVC;
    UIViewController *_fromVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) UIViewController *toVC; // @synthesize toVC=_toVC;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
