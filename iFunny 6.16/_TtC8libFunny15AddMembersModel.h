//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFAddMembersModel.h>

@interface _TtC8libFunny15AddMembersModel : IFAddMembersModel
{
    // Error parsing type: , name: chat
    // Error parsing type: , name: chatModelType
    // Error parsing type: , name: loadCoverService
    // Error parsing type: , name: analyticsService
    // Error parsing type: , name: userSearcher
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithOpenChannelEntity:(id)arg1;
- (id)initWithChatEntity:(id)arg1;
- (id)initWithOpenChannelName:(id)arg1 groupImage:(id)arg2 permalink:(id)arg3 description:(id)arg4;
- (id)initWithGroupName:(id)arg1 groupImage:(id)arg2;
- (id)initWithOpenChannelName:(id)arg1 groupImage:(id)arg2 permalink:(id)arg3 description:(id)arg4 analyticsService:(id)arg5 userSearcher:(id)arg6;
- (id)initWithGroupName:(id)arg1 groupImage:(id)arg2 analyticsService:(id)arg3 userSearcher:(id)arg4;
- (void)setupSearcher:(id)arg1;
- (_Bool)updateChatOperatorList;
- (_Bool)updateChatMembersList;
- (void)retrieveGroupChat;
@property(nonatomic, readonly) _Bool isCreatingNew;
@property(nonatomic, readonly) unsigned long long numberOfUsersInChat;

@end

