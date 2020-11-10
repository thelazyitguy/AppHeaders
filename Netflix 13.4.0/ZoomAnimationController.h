//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIAnimationControllerProtocol-Protocol.h"

@class NSString, UIView;

@interface ZoomAnimationController : NSObject <NFUIAnimationControllerProtocol>
{
    _Bool _reverse;
    UIView *overlayView;
    double duration;
    NSString *transitionKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(copy, nonatomic) NSString *transitionKey; // @synthesize transitionKey;
@property(nonatomic) double duration; // @synthesize duration;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

