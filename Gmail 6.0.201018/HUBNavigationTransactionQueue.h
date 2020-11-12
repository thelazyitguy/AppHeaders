//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSMapTable, NSMutableArray, NSString, UINavigationController;
@protocol HUBNavigationTransactionQueueDelegate;

@interface HUBNavigationTransactionQueue : NSObject <UINavigationControllerDelegate>
{
    NSMutableArray *_queue;
    _Bool _processingFlag;
    NSMapTable *_animatorDelegates;
    NSMapTable *_interactorDelegates;
    _Bool _isQueryingSupportedInterfaceOrientations;
    CDUnknownBlockType _transactionCompletedBlock;
    id <HUBNavigationTransactionQueueDelegate> _delegate;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <HUBNavigationTransactionQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isViewControllerEnqueued:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
@property(readonly, copy) NSString *description;
- (unsigned long long)viewControllerStackCount;
- (id)dequeue;
- (void)scheduleProcessingNextTransactionOnMainThread;
- (void)processTransaction:(id)arg1;
- (void)processNext;
- (id)topMostViewController;
@property(readonly, getter=isEmpty) _Bool empty;
- (void)enqueueNavigationTransaction:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
