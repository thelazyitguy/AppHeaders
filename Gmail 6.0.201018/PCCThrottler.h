//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;
@protocol OS_dispatch_queue;

@interface PCCThrottler : NSObject
{
    NSNumber *_maxFrequency;
    CDUnknownBlockType _operation;
    NSDate *_lastOperationDate;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _workBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType workBlock; // @synthesize workBlock=_workBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDate *lastOperationDate; // @synthesize lastOperationDate=_lastOperationDate;
@property(copy, nonatomic) CDUnknownBlockType operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSNumber *maxFrequency; // @synthesize maxFrequency=_maxFrequency;
- (void)performOperation;
- (void)scheduleOperation;
- (void)scheduleWorkIfNeeded;
- (id)initWithMaxFrequency:(id)arg1 workBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;

@end
