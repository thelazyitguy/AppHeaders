//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDGroupChannel.h>

#import <Funny/IFChannelProtocol-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSObject, NSString;
@protocol IFChatUserEntity;

@interface SBDGroupChannel (IFChannelProtocol) <IFChannelProtocol>
- (id)getOpenChannelInfo;
@property(readonly) NSDate *lastMessageDate;
@property(readonly) NSString *lastMessageText;
@property(readonly) NSString *lastUserID;
@property(readonly) NSArray *adminIds;
- (id)userIdArrayCheck:(id)arg1;
@property(readonly) NSString *title;
@property(readonly) NSString *coverImageUrl;
@property(readonly) long long type;
- (id)parsedData;
- (id)parseChannelData;
@property(readonly, nonatomic) _Bool isOneToOneChat;

// Remaining properties
@property(readonly) NSString *chatId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSObject<IFChatUserEntity> *inviter; // @dynamic inviter;
@property(readonly) NSMutableArray *members;
@property(readonly) Class superclass;
@property(readonly) unsigned long long unreadMessageCount;
@end
