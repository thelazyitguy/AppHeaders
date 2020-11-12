//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ChatStoreEntity.h>

@class NSString, UserStoreEntity;

@interface ChatStoreEntity (ChatSession)

// Remaining properties
@property(nonatomic, copy) NSString *cover; // @dynamic cover;
@property(nonatomic) double createDate; // @dynamic createDate;
@property(nonatomic, retain) UserStoreEntity *inviter; // @dynamic inviter;
@property(nonatomic) _Bool isFrozen; // @dynamic isFrozen;
@property(nonatomic) float joinState; // @dynamic joinState;
@property(nonatomic) float membersOnline; // @dynamic membersOnline;
@property(nonatomic) float membersTotal; // @dynamic membersTotal;
@property(nonatomic) float messagesUnread; // @dynamic messagesUnread;
@property(nonatomic) double mutedUntil; // @dynamic mutedUntil;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, copy) NSString *openChatDescription; // @dynamic openChatDescription;
@property(nonatomic) float operatorsCount; // @dynamic operatorsCount;
@property(nonatomic) float role; // @dynamic role;
@property(nonatomic, copy) NSString *title; // @dynamic title;
@property(nonatomic, copy) NSString *titleColor; // @dynamic titleColor;
@property(nonatomic) float type; // @dynamic type;
@property(nonatomic) double updateDate; // @dynamic updateDate;
@property(nonatomic, copy) NSString *url; // @dynamic url;
@property(nonatomic, retain) UserStoreEntity *user; // @dynamic user;
@end
