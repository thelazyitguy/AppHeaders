//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSMobileAnalyticsCountDownLatch;

@interface AWSMobileAnalyticsDelayedBlock : NSObject
{
    _Bool _wasCancelled;
    CDUnknownBlockType _blockToExecute;
    double _waitDelay;
    AWSMobileAnalyticsCountDownLatch *_latch;
    NSObject *_lock;
}

+ (id)delayedBlockWithDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool wasCancelled; // @synthesize wasCancelled=_wasCancelled;
@property(retain, nonatomic) AWSMobileAnalyticsCountDownLatch *latch; // @synthesize latch=_latch;
@property(nonatomic) double waitDelay; // @synthesize waitDelay=_waitDelay;
@property(copy, nonatomic) CDUnknownBlockType blockToExecute; // @synthesize blockToExecute=_blockToExecute;
- (void).cxx_destruct;
- (void)handleCountDownTimer:(id)arg1;
- (_Bool)execute;
- (void)cancel;
- (id)initWithWithDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
