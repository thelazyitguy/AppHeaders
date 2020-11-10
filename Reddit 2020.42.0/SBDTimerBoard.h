//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SendBirdSDK/SBDTimerBoardDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface SBDTimerBoard : NSObject <SBDTimerBoardDelegate>
{
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSMutableArray *_mutableTimers;
    unsigned long long _capacity;
}

@property unsigned long long capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSMutableArray *mutableTimers; // @synthesize mutableTimers=_mutableTimers;
@property(retain) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
- (void).cxx_destruct;
- (void)removeTimer:(id)arg1;
- (void)addTimer:(id)arg1;
@property(readonly, nonatomic) NSArray *timers;
- (id)timerWithIdentifier:(id)arg1;
- (void)stopAllTimers;
- (id)firstTimer;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
