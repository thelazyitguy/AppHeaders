//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTConversationMessageDraft_ResponseType;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JBTAccountAgnosticSerializedDraft, JBTCallback, JBTConversation, JBTConversationMessage, JBTConversationMessageDraft, JBTSendingMonitor, JBTSignatureTextFormatter, JBTSpan;

@protocol JBTCompose <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getAddOnsForCompose;
- (id <JBTSignatureTextFormatter>)getSignatureTextFormatter;
- (id <JBTSendingMonitor>)getSendingMonitor;
- (ComGoogleCommonBaseOptional *)createFromAccountAgnosticSerializedDraftWithJBTAccountAgnosticSerializedDraft:(id <JBTAccountAgnosticSerializedDraft>)arg1;
- (id <JBTConversationMessageDraft>)createTemplateReplyWithJBTConversationMessageDraft:(id <JBTConversationMessageDraft>)arg1;
- (id <JBTConversationMessageDraft>)createThreadResponseWithJBTConversation:(id <JBTConversation>)arg1;
- (id <JBTConversationMessageDraft>)createResponseWithJBTConversationMessage:(id <JBTConversationMessage>)arg1 withJBTConversationMessageDraft_ResponseType:(JBTConversationMessageDraft_ResponseType *)arg2;
- (id <JBTConversationMessageDraft>)editWithJBTConversationMessage:(id <JBTConversationMessage>)arg1;
- (void)composeAsyncWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)composeToMigrateAndroidLocalImapDraftWithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg1 withLong:(long long)arg2;
- (id <JBTConversationMessageDraft>)compose;
@end
