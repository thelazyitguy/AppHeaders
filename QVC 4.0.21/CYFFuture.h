//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface CYFFuture : NSObject
{
    _Bool _resolved;
    id _value;
    NSCondition *_lock;
}

- (void).cxx_destruct;
@property(retain) NSCondition *lock; // @synthesize lock=_lock;
@property _Bool resolved; // @synthesize resolved=_resolved;
@property(retain) id value; // @synthesize value=_value;
- (id)get;
- (_Bool)isDone;
- (void)setFutureValueUnlocked:(id)arg1;
- (void)setFutureValue:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
