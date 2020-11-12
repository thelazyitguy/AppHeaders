//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface ALXAsyncOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    CDUnknownBlockType _block;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
- (void).cxx_destruct;
- (void)complete;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
