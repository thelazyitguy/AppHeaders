//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIView;

@interface PLKViewControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _forward;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property _Bool forward; // @synthesize forward=_forward;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

