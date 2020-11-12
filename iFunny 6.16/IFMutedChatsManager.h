//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol _TtP25FCFuncorpNetworkingiFunny31NetworkChatNotificationsService_;

@interface IFMutedChatsManager : NSObject
{
    _Bool _mutedChatsLoaded;
    _Bool _isMutingInProcess;
    NSMutableArray *_mutedChats;
    id <_TtP25FCFuncorpNetworkingiFunny31NetworkChatNotificationsService_> _chatNotificationManager;
}

+ (id)descriptionOfMutePeriod:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMutingInProcess; // @synthesize isMutingInProcess=_isMutingInProcess;
@property(retain, nonatomic) id <_TtP25FCFuncorpNetworkingiFunny31NetworkChatNotificationsService_> chatNotificationManager; // @synthesize chatNotificationManager=_chatNotificationManager;
@property(nonatomic) _Bool mutedChatsLoaded; // @synthesize mutedChatsLoaded=_mutedChatsLoaded;
@property(retain, nonatomic) NSMutableArray *mutedChats; // @synthesize mutedChats=_mutedChats;
- (_Bool)setChannelWithId:(id)arg1 mutedForPeriod:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)unmuteChatWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isMutedChannelWithId:(id)arg1;
- (void)deleteMutedChatWithId:(id)arg1;
- (void)addOrUpdateMutedChatInfo:(id)arg1;
- (id)findMutedChatWithId:(id)arg1;
- (void)loadMutedChatsList;
- (void)reset;
- (id)init;

@end
