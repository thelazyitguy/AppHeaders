//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ChatCommunityInvitation : NSObject
{
    _Bool _isInvitePending;
    NSString *_subredditId;
    NSString *_subredditName;
    NSString *_inviteMessage;
    long long _inviteType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInvitePending; // @synthesize isInvitePending=_isInvitePending;
@property(nonatomic) long long inviteType; // @synthesize inviteType=_inviteType;
@property(retain, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(retain, nonatomic) NSString *subredditName; // @synthesize subredditName=_subredditName;
@property(retain, nonatomic) NSString *subredditId; // @synthesize subredditId=_subredditId;

@end
