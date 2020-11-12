//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFChatUserObject.h>

#import <Funny/IFChatMemberEntity-Protocol.h>

@class NSNumber, NSString;

@interface IFChatMemberObject : IFChatUserObject <IFChatMemberEntity>
{
    _Bool isBlockingMe;
    _Bool isBlockedByMe;
    long long state;
}

@property long long state; // @synthesize state;
@property _Bool isBlockedByMe; // @synthesize isBlockedByMe;
@property _Bool isBlockingMe; // @synthesize isBlockingMe;
- (id)initWithFNROUser:(id)arg1;
- (id)initWithRlmMember:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRlmUser:(id)arg1;

// Remaining properties
@property(readonly) NSString *ID;
@property(readonly) NSString *avatarUrl;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSNumber *lastSeenDate;
@property(readonly) NSString *nick;
@property(readonly) NSString *nick_color;
@property(readonly) Class superclass;

@end
