//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSRecursiveLock;

@interface FIRCLSAsyncOperation : NSOperation
{
    _Bool _internalExecuting;
    _Bool _internalFinished;
    CDUnknownBlockType _asyncCompletion;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType asyncCompletion; // @synthesize asyncCompletion=_asyncCompletion;
- (void).cxx_destruct;
- (void)markDone;
- (void)markStarted;
- (void)unlockedMarkComplete;
- (void)unlockedMarkStarted;
- (void)unlockedMarkFinished;
- (_Bool)checkForCancellation;
- (void)lock:(CDUnknownBlockType)arg1;
- (void)changeValueForKey:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (id)init;

@end

