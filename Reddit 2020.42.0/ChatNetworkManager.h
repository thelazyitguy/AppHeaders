//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBDChannelDelegate-Protocol.h"
#import "SBDConnectionDelegate-Protocol.h"

@class AFURLSessionManager, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, RedditService;
@protocol OS_dispatch_semaphore, _TtP6Reddit13ErrorReporter_;

@interface ChatNetworkManager : NSObject <SBDConnectionDelegate, SBDChannelDelegate>
{
    _Bool _configuring;
    AFURLSessionManager *_sessionManager;
    NSMutableDictionary *_channelObservers;
    NSHashTable *_managerObservers;
    NSMutableArray *_connectionCompletionBlocks;
    long long _reconnectBackoffTime;
    long long _maxReconnectBackoffTime;
    long long _refreshAccessTokenRetryCount;
    NSObject<OS_dispatch_semaphore> *_embedSemaphore;
    RedditService *_service;
    id <_TtP6Reddit13ErrorReporter_> _errorReporter;
}

+ (_Bool)isValidUserName:(id)arg1;
+ (id)getMentionedUsernamesFromString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <_TtP6Reddit13ErrorReporter_> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) __weak RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *embedSemaphore; // @synthesize embedSemaphore=_embedSemaphore;
@property(nonatomic) long long refreshAccessTokenRetryCount; // @synthesize refreshAccessTokenRetryCount=_refreshAccessTokenRetryCount;
@property(nonatomic) long long maxReconnectBackoffTime; // @synthesize maxReconnectBackoffTime=_maxReconnectBackoffTime;
@property(nonatomic) long long reconnectBackoffTime; // @synthesize reconnectBackoffTime=_reconnectBackoffTime;
@property(retain, nonatomic) NSMutableArray *connectionCompletionBlocks; // @synthesize connectionCompletionBlocks=_connectionCompletionBlocks;
@property(retain, nonatomic) NSHashTable *managerObservers; // @synthesize managerObservers=_managerObservers;
@property(retain, nonatomic) NSMutableDictionary *channelObservers; // @synthesize channelObservers=_channelObservers;
@property(nonatomic) _Bool configuring; // @synthesize configuring=_configuring;
@property(retain, nonatomic) AFURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
- (id)messageStoreForChannel:(id)arg1;
- (id)channelStoreForSendbirdChannel:(id)arg1;
- (id)channelStoreForChannel:(id)arg1;
- (_Bool)isInvalidSBTokenError:(id)arg1;
- (id)defaultRedditPostParameters;
- (_Bool)isDirectChannel:(id)arg1;
- (void)notifyConnectionObservers;
- (void)updateInvitePolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInvitePolicy:(CDUnknownBlockType)arg1;
- (void)dismissDownToChatBannerWithSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)joinDownToChatWithSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkIfDownToChatBannerShouldBeShownForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleReportResponseWithChannel:(id)arg1 message:(id)arg2 unreadCount:(unsigned long long)arg3 reportReason:(id)arg4 showsHistory:(_Bool)arg5 error:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)sendReportWithMessage:(id)arg1 channel:(id)arg2 details:(id)arg3 reason:(id)arg4 isShowingHistory:(_Bool)arg5 user:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)reportMessage:(id)arg1 inChannel:(id)arg2 isShowingHistory:(_Bool)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchChannelForReportedMessage:(id)arg1 inChannel:(id)arg2 fromStoreWithCompletion:(CDUnknownBlockType)arg3;
- (void)fetchAllGroupChannelPagesForQuery:(id)arg1 currentResults:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAllGroupChannelPagesForQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)optUserIntoSubredditChatAndJoinChannelURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)trackInboxAnalyticEventWithAction:(id)arg1 noun:(id)arg2;
- (void)modDeleteChatMessageWithChannelURL:(id)arg1 modQueueMessageID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)modIgnoreReportsWithChannelURL:(id)arg1 modQueueMessageID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportMessage:(id)arg1 channelURL:(id)arg2 reason:(id)arg3 details:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getUserIdsForUsernames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getMentionedUserIdsFromMessageString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hasDistinctChannelForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)syncPopularPage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)syncPage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadEmbedDataForMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)channel:(id)arg1 userWasBanned:(id)arg2;
- (void)channelWasUnfrozen:(id)arg1;
- (void)channelWasFrozen:(id)arg1;
- (void)channel:(id)arg1 didUpdateMessage:(id)arg2;
- (void)channel:(id)arg1 messageWasDeleted:(long long)arg2;
- (void)channelDidUpdateTypingStatus:(id)arg1;
- (void)channelWasChanged:(id)arg1;
- (void)channel:(id)arg1 userWasUnmuted:(id)arg2;
- (void)channel:(id)arg1 userWasMuted:(id)arg2;
- (void)channel:(id)arg1 userDidLeave:(id)arg2;
- (void)channel:(id)arg1 didDeclineInvitation:(id)arg2 inviter:(id)arg3;
- (void)channel:(id)arg1 userDidJoin:(id)arg2;
- (void)didReceiveInvitiationCompletionWithChannel:(id)arg1;
- (void)channel:(id)arg1 didReceiveInvitation:(id)arg2 inviter:(id)arg3;
- (void)channel:(id)arg1 didReceiveMessage:(id)arg2;
- (void)didSucceedReconnection;
- (void)withBackOff:(CDUnknownBlockType)arg1;
- (void)didFailReconnection;
- (void)didCancelReconnection;
- (void)didStartReconnection;
- (void)removeNetworkManagerObserver:(id)arg1;
- (void)addNetworkManagerObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forChannel:(id)arg2;
- (void)addObserver:(id)arg1 forChannel:(id)arg2;
- (void)getUnreadMessageCount:(CDUnknownBlockType)arg1;
- (void)stopTypingInChannel:(id)arg1;
- (void)startTypingInChannel:(id)arg1;
- (void)leaveChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unLockChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lockChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateChannelHasMessagesFromNetwork:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)markChannelRead:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)declineInviteToChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)declineInviteToSubredditChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)joinChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptInviteToDirectChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptInviteToSubredditChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptInviteToChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)inviteContacts:(id)arg1 toChannel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)banContactFromChat:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)kickContact:(id)arg1 channel:(id)arg2 duration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)blockContact:(id)arg1 inChannel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hideAndRemoveChannel:(id)arg1 hidePreviousMessages:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unmuteChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)muteChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createChannelForSubreddit:(id)arg1 name:(id)arg2 description:(id)arg3 isPrivate:(_Bool)arg4 automuteNewMembers:(unsigned long long)arg5 automuteAccountAge:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)deleteAllMessagesForContact:(id)arg1 channel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteMessage:(id)arg1 inChannel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleSendMessageResponse:(id)arg1 sendbirdMessage:(id)arg2 channel:(id)arg3 withError:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addUserMentionParamsToMessage:(id)arg1 withChannel:(id)arg2 andData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performSendMessageRequest:(id)arg1 withChannel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 toChannel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessages:(id)arg1 toChannels:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessageWithPost:(id)arg1 toChannels:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessageWithText:(id)arg1 toChannels:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getChatRequestMessagePreviewForChannel:(id)arg1 maximumNumberOfMessages:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getMessagesForChannel:(id)arg1 beforeID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getMessagesForChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSubredditChannelListWithSubredditId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getChannelWithUrl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAdditionalDataForContacts:(id)arg1 isPersistentData:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAdditionalContactsDataForMessages:(id)arg1 isSubredditChannel:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAdditionalContactsDataForChannels:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getMembersForQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPopularMembersPreviewForChannel:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPopularSubredditChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getChannelsForQuery:(id)arg1 isSubredditChat:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)renameChannel:(id)arg1 name:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createChannelWithContacts:(id)arg1 name:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createChannelsWithPendingChannels:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountManagerWillChangeCurrentService:(id)arg1;
- (void)ensureConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)disconnect:(CDUnknownBlockType)arg1;
- (void)refreshAccessTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAccessTokenIfNeeded:(CDUnknownBlockType)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)clearConnectionCompletionBlocksWithError:(id)arg1;
- (void)loadConfig:(id)arg1;
- (void)logChatConnectionErrorWithName:(id)arg1 requestStartTime:(double)arg2 error:(id)arg3;
- (void)connect:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long connectionStatus;
- (void)startRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureResponseHandler:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)initWithService:(id)arg1 errorReporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

