//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface UADispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _type;
}

+ (id)dispatcherWithQueue:(id)arg1 type:(unsigned long long)arg2;
+ (id)backgroundDispatcher;
+ (id)mainDispatcher;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)isCurrentQueueType;
- (id)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAsyncIfNecessary:(CDUnknownBlockType)arg1;
- (void)doSync:(CDUnknownBlockType)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 type:(unsigned long long)arg2;

@end
