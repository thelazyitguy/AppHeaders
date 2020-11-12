//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ChatEventFactory : NSObject
{
}

+ (id)imageUploadMethodWithImageSource:(unsigned long long)arg1;
+ (id)messageTypeStringWithMessage:(id)arg1;
+ (id)chatCollapsedMessageFeedbackNegativeEventWithChatMessage:(id)arg1 channel:(id)arg2;
+ (id)chatCollapsedMessageFeedbackAffirmativeEventWithChatMessage:(id)arg1 channel:(id)arg2;
+ (id)chatCollapsedMessageClickEventWithChatMessage:(id)arg1 channel:(id)arg2;
+ (id)chatCollapsedMessageViewEventWithChatMessage:(id)arg1 channel:(id)arg2;
+ (id)correlatedEvent:(id)arg1 forChannel:(id)arg2;
+ (id)leaveGroupEventsWithChannel:(id)arg1 showsHistory:(_Bool)arg2;
+ (id)subredditWithSubredditChannel:(id)arg1;
+ (id)chatReportEventWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3 message:(id)arg4;
+ (id)chatSetupEventWithAction:(id)arg1 noun:(id)arg2 subreddit:(id)arg3 channel:(id)arg4;
+ (id)shareToChatEventWithAction:(id)arg1 noun:(id)arg2 post:(id)arg3 correlationId:(id)arg4 messageLength:(long long)arg5 channel:(id)arg6 existingChannel:(_Bool)arg7 pageType:(id)arg8;
+ (id)shareEventWithAction:(id)arg1 noun:(id)arg2 post:(id)arg3 correlationId:(id)arg4 preselectedChannel:(id)arg5 position:(unsigned long long)arg6 submitSuccessful:(_Bool)arg7 pageType:(id)arg8;
+ (id)userHoverCardEventWithAction:(id)arg1 noun:(id)arg2 userId:(id)arg3 post:(id)arg4 comment:(id)arg5 actionInfoReason:(id)arg6 pageType:(id)arg7;
+ (id)userProfileEventWithAction:(id)arg1 noun:(id)arg2 userId:(id)arg3 pageType:(id)arg4;
+ (id)settingsEventWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3 kickDuration:(id)arg4;
+ (id)settingsEventWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3 reportedContact:(id)arg4 blockedContact:(id)arg5;
+ (id)chatViewEventWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3 reportedContact:(id)arg4 blockedContact:(id)arg5;
+ (id)reportEventWithSource:(id)arg1 action:(id)arg2 noun:(id)arg3 channel:(id)arg4 reportedContact:(id)arg5 blockedContact:(id)arg6;
+ (id)chatPreviewEventsWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3;
+ (id)chatTypeStringWithChannel:(id)arg1;
+ (id)invitationInboxEventsWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3 message:(id)arg4;
+ (id)invitationsListEventWithAction:(id)arg1 noun:(id)arg2 pendingInvites:(unsigned long long)arg3;
+ (id)contactListEventWithAccountContext:(id)arg1 action:(id)arg2 noun:(id)arg3 channel:(id)arg4 pickedMembers:(id)arg5 addedMethod:(unsigned long long)arg6;
+ (id)chatKeyboardEventWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3 message:(id)arg4 imageSource:(unsigned long long)arg5;
+ (id)chatViewEventWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3 kickDuration:(id)arg4;
+ (id)chatViewEventWithAction:(id)arg1 noun:(id)arg2 channel:(id)arg3 message:(id)arg4 unreadCount:(unsigned long long)arg5 reportReason:(id)arg6 showsHistory:(_Bool)arg7 pageType:(id)arg8 error:(id)arg9;
+ (id)chatInboxEventWithAction:(id)arg1 noun:(id)arg2 currentChannels:(id)arg3 requestsChannels:(id)arg4;

@end
