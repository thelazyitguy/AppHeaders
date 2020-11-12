//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue, SBDTimerBoardDelegate;

@interface SBDTimer : NSObject
{
    _Bool _done;
    _Bool _expired;
    id <SBDTimerBoardDelegate> _board;
    NSTimer *_timer;
    NSDictionary *_userInfo;
    NSString *_identifier;
    id _expireTarget;
    SEL _expireSelector;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeat:(_Bool)arg5 identifier:(id)arg6 onBoard:(id)arg7;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeat:(_Bool)arg5 onBoard:(id)arg6;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(getter=wasExpired) _Bool expired; // @synthesize expired=_expired;
@property _Bool done; // @synthesize done=_done;
@property SEL expireSelector; // @synthesize expireSelector=_expireSelector;
@property(retain) id expireTarget; // @synthesize expireTarget=_expireTarget;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property __weak id <SBDTimerBoardDelegate> board; // @synthesize board=_board;
- (void).cxx_destruct;
- (void)forceToExpire;
- (void)timerIsExpired;
- (void)removeFromBoard;
- (_Bool)valid;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeat:(_Bool)arg5 identifier:(id)arg6 onBoard:(id)arg7;

@end
