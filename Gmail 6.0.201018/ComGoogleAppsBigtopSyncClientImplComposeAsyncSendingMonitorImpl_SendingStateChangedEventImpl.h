//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplCommonEventImpl.h"

#import "JBTSendingMonitor_SendingStateChangedEvent-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendHelper, ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_MonitoredMessage, JBTLoggingUserActionRecorder, JBTSendingMonitor_OutboxComposition, JBTSendingMonitor_SendingState, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory, JBTId, XPTCountersApi;

@interface ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_SendingStateChangedEventImpl : ComGoogleAppsBigtopSyncClientImplCommonEventImpl <JBTSendingMonitor_SendingStateChangedEvent>
{
    id <JBTId> messageId_;
    ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_MonitoredMessage *monitoredMessage_;
    JBTSendingMonitor_SendingState *sendingState_;
    id <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory> transactionFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    id <XPTCountersApi> countersApi_;
    _Bool cancelSendSupported_;
    JBTLoggingUserActionRecorder *userActionRecorder_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    _Bool isOutboxMessage_;
    _Bool hasAttachments_;
    int numberOfMonitoredOutboxMessages_;
    JBTSendingMonitor_OutboxComposition *outboxComposition_;
    ComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendHelper *scheduledSendHelper_;
}

- (void)dealloc;
- (id)getOriginalItemSapiIdForCancelScheduledSend;
- (id)getOutboxComposition;
- (int)getNumberOfMonitoredOutboxMessages;
- (_Bool)hasAttachments;
- (_Bool)isOutboxMessage;
- (id)getFormattedScheduledSendTimeMs;
- (id)getScheduledSendTimeMs;
- (void)cancelSendWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)isPendingCancel;
- (_Bool)canCancelSend;
- (_Bool)wasMessageCancelled;
- (id)getSendingState;
- (id)getConversationId;
- (id)getMessageId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
