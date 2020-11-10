//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

@class NFUIFlowInternal, NSArray, NSOperationQueue;

@interface NFUIFlow : UIResponder
{
    NFUIFlowInternal *_internal;
}

+ (id)loadDestinationFlowForSegueWithIdentifier:(id)arg1 source:(id)arg2 sender:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NFUIFlowInternal *internal; // @synthesize internal=_internal;
- (id)performUnwind:(SEL)arg1 withSender:(id)arg2;
- (void)unwindForSegue:(id)arg1 towardsFlow:(id)arg2;
- (id)childFlowContainingSegueSource:(id)arg1;
- (id)allowedChildFlowsForUnwindingFromSource:(id)arg1;
- (_Bool)canPerformUnwindSegueAction:(SEL)arg1 fromFlow:(id)arg2 withSender:(id)arg3;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (id)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (id)flowSegueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (id)loadDestinationFlowForSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)didMoveToParentFlow:(id)arg1;
- (void)willMoveToParentFlow:(id)arg1;
- (void)removeFromParentFlow;
- (void)addChildFlow:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *pendingSegueIdentifiers;
@property(readonly, nonatomic) NSArray *childFlows;
@property(readonly, nonatomic) __weak NFUIFlow *parentFlow;
@property(retain, nonatomic) NSOperationQueue *loadOperationQueue;
- (id)nextResponder;
- (_Bool)canBecomeFirstResponder;
- (id)init;

@end
