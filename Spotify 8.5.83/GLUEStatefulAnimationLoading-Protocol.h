//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEAnimationPath;

@protocol GLUEStatefulAnimationLoading <NSObject>
- (_Bool)hasAnimations;
- (void)setAnimationPath:(GLUEAnimationPath *)arg1 forLoopedState:(unsigned long long)arg2;
- (void)setAnimationPath:(GLUEAnimationPath *)arg1 forState:(unsigned long long)arg2 progress:(double)arg3;
- (void)setAnimationPath:(GLUEAnimationPath *)arg1 fromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end
