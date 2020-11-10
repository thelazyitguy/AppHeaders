//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ASContextTransitioning-Protocol.h>

@class NSString;
@protocol _ASTransitionContextCompletionDelegate, _ASTransitionContextLayoutDelegate;

@interface _ASTransitionContext : NSObject <ASContextTransitioning>
{
    _Bool _animated;
    id <_ASTransitionContextLayoutDelegate> _layoutDelegate;
    id <_ASTransitionContextCompletionDelegate> _completionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_ASTransitionContextCompletionDelegate> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
@property(nonatomic) __weak id <_ASTransitionContextLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void)completeTransition:(_Bool)arg1;
- (id)removedSubnodes;
- (id)insertedSubnodes;
- (id)subnodesForKey:(id)arg1;
- (struct CGRect)finalFrameForNode:(id)arg1;
- (struct CGRect)initialFrameForNode:(id)arg1;
- (CDStruct_42a63532)constrainedSizeForKey:(id)arg1;
- (id)layoutForKey:(id)arg1;
- (id)initWithAnimation:(_Bool)arg1 layoutDelegate:(id)arg2 completionDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

