//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTSocialListeningParticipantViewModel <NSObject>
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *participantID;
@property(readonly, nonatomic, getter=isHost) _Bool host;
@property(readonly, nonatomic, getter=isCurrentUser) _Bool currentUser;
@end
