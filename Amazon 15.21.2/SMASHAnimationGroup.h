//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SMASHAnimation.h"

@class NSArray;

@interface SMASHAnimationGroup : SMASHAnimation
{
    NSArray *_subAnimations;
}

@property(retain, nonatomic) NSArray *subAnimations; // @synthesize subAnimations=_subAnimations;
- (void).cxx_destruct;
- (void)runAnimation:(id)arg1;
- (id)initWithSpec:(id)arg1 offset:(double)arg2 transitionViewContainer:(id)arg3 isSequence:(_Bool)arg4;
- (id)initWithSpec:(id)arg1 offset:(double)arg2 transitionViewContainer:(id)arg3;

@end
