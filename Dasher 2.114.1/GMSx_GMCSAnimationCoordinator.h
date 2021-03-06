//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/CAAnimationDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface GMSx_GMCSAnimationCoordinator : NSObject <CAAnimationDelegate>
{
    NSMutableSet *_animations;
    _Bool _failedToFinish;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finish;
- (void)completeIfEmpty;
- (void)addAnimation:(id)arg1 toLayer:(id)arg2 forKey:(id)arg3;
@property(readonly, nonatomic) _Bool finished;
@property(readonly, copy, nonatomic) NSSet *animations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

