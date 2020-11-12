//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceChat/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol SCSChatSession <NSObject>
@property(readonly, nonatomic) NSString *visitorId;
@property(readonly, nonatomic) NSString *sessionId;
@property(nonatomic, getter=isUserTyping) _Bool userTyping;
@property(readonly, nonatomic) double estimatedWaitTime;
@property(readonly, nonatomic) long long queuePosition;
@property(readonly, nonatomic) NSArray *allEvents;
@property(readonly, nonatomic) NSArray *actors;
- (void)sendMessage:(NSString *)arg1;
- (void)sendSneakPeek:(NSString *)arg1;
@end
