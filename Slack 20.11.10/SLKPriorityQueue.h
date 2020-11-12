//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SLKPriorityQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSMutableSet *_pendingOperationsSet;
    NSObject<OS_dispatch_source> *_watchdogTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(retain, nonatomic) NSMutableSet *pendingOperationsSet; // @synthesize pendingOperationsSet=_pendingOperationsSet;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)operationDidFinish;
- (id)queue_popMostImportantOperation;
- (void)queue_enqueueOperationsIfNecessary;
@property(readonly, nonatomic) NSArray *pendingOperations;
- (id)queue_allOperations;
@property(readonly, nonatomic) NSArray *allOperations;
- (void)cancelAllOperations;
- (void)queue_addOperations:(id)arg1;
- (void)addOperations:(id)arg1;
@property(getter=isSuspended) _Bool suspended;
@property long long maxConcurrentOperationCount;
- (void)startWatchdogTimer;
- (id)init;

@end
