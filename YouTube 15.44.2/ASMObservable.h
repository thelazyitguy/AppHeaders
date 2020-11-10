//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface ASMObservable : NSObject
{
    id _value;
    NSPointerArray *_subscriptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPointerArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void)setValueNotifyingSubscribers:(id)arg1;
- (void)removeSubscription:(id)arg1;
- (id)subscribeWithBlock:(CDUnknownBlockType)arg1 startPaused:(_Bool)arg2;
- (id)subscribeWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithValue:(id)arg1;
- (id)combineWithObservable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)flatMapWithBlock:(CDUnknownBlockType)arg1;
- (id)mapWithBlock:(CDUnknownBlockType)arg1;

@end

