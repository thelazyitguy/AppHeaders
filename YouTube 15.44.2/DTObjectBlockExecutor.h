//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTObjectBlockExecutor : NSObject
{
    CDUnknownBlockType _deallocBlock;
}

+ (id)blockExecutorWithDeallocBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deallocBlock; // @synthesize deallocBlock=_deallocBlock;
- (void)dealloc;

@end

