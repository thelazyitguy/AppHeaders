//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceChat/SCSChatEvent.h>

@interface SCSAgentJoinEvent : SCSChatEvent
{
    _Bool _primaryAgent;
}

@property(nonatomic) _Bool primaryAgent; // @synthesize primaryAgent=_primaryAgent;
- (id)initWithSender:(id)arg1 type:(unsigned long long)arg2 primaryAgent:(_Bool)arg3;

@end
