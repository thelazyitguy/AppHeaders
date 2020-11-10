//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MessageQueue : NSObject
{
    NSMutableArray *_messageArray;
    long long _maxCapacity;
}

- (void).cxx_destruct;
- (id)dequeueMessage;
- (id)enqueueMessage:(id)arg1;
- (void)resize:(long long)arg1;
@property(readonly, nonatomic) unsigned long long queueSize;
- (id)initWithCapacity:(long long)arg1;

@end
