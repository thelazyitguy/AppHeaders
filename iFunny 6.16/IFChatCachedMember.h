//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFChatCachedUser.h>

@class NSNumber;
@protocol RLMInt;

@interface IFChatCachedMember : IFChatCachedUser
{
    _Bool _isBlockedByMe;
    _Bool _isBlockingMe;
    NSNumber<RLMInt> *_stateNumber;
}

- (void).cxx_destruct;
@property(retain) NSNumber<RLMInt> *stateNumber; // @synthesize stateNumber=_stateNumber;
@property _Bool isBlockingMe; // @synthesize isBlockingMe=_isBlockingMe;
@property _Bool isBlockedByMe; // @synthesize isBlockedByMe=_isBlockedByMe;
- (long long)state;
- (id)initWithMemberEntity:(id)arg1;
- (id)initWithEntity:(id)arg1;

@end
