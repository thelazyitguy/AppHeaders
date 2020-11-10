//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface YTModalViewControllerCoordinator : NSObject
{
    _Bool _transitionInProgress;
    NSMutableArray *_queue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void)performNextQueuedTransition;
- (CDUnknownBlockType)completionWrapperWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentModalViewControllerWithQueueItem:(id)arg1;
- (void)dispatchDismissModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissModalViewControllerWithQueueItem:(id)arg1;
- (void)dismissAllModalViewControllersFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissModalViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

