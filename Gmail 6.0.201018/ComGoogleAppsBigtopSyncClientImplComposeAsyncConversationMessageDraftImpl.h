//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTConversationMessageDraft-Protocol.h"

@class ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter, ComGoogleAppsBigtopServicesCommonUtilsCachedValue, ComGoogleAppsBigtopServicesTasksBigTopTask, ComGoogleAppsBigtopSyncClientImplCommonCaribouUrls, ComGoogleAppsBigtopSyncClientImplCommonEventListenersList, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendHelper, ComGoogleAppsBigtopSyncClientImplCommonUserinfoUserInfo, ComGoogleAppsBigtopSyncClientImplComposeAsyncDraftserializationAccountAgnosticDraftSerializer, ComGoogleAppsBigtopSyncClientImplComposeAsyncMessageAttributionFormatter, ComGoogleAppsBigtopSyncClientImplComposeAsyncSignatureTextFetcher, ComGoogleAppsBigtopSyncClientImplConversationsCommonMessageDataHelper, ComGoogleAppsBigtopSyncClientImplConversationsCommonSecurityInteractionHelper, ComGoogleAppsBigtopSyncClientImplSettingsApiCustomFromSettings, ComGoogleAppsBigtopSyncClientImplStarsStarStateCalculator, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList, JBTCContactRef, JBTLoggingUserActionRecorder, NSString;
@protocol ComGoogleAppsBigtopDataDelegationDelegationUrlRewriter, ComGoogleAppsBigtopDataItemsActiveApiActiveItemsTracker, ComGoogleAppsBigtopSyncClientApiSmartcomposeFactoryAssistedWritingSessionFactory, ComGoogleAppsBigtopSyncClientImplCommonObjectMonitor, ComGoogleAppsBigtopSyncClientImplItemsApiInternalItemMessagesMonitorFactory, ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory, ComGoogleAppsBigtopSyncClientImplLockerApiLockerControlsFactory, ComGoogleAppsBigtopSyncClientImplLockerApiLockerRecipientsFactory, ComGoogleCaribouComponentsClientassignedidsClientAssignedMailIdGenerator, ComGoogleCaribouComponentsComposeRecipientListFactory, ComGoogleCaribouComponentsComposeSubjectPrefixHelper, ComGoogleCaribouComponentsServerpermidsItemServerPermIdGenerator, ComGoogleCommonTimeClock, DaggerLazy, JBTAssistedWritingSession, JBTAssistedWritingSuggestionFetcher, JBTChannelAssistFetcher, JBTId, JBTLockerControls, JavaUtilList, XPTListMultimap;

@interface ComGoogleAppsBigtopSyncClientImplComposeAsyncConversationMessageDraftImpl : NSObject <JBTConversationMessageDraft>
{
    id <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory> transactionFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonEventListenersList *eventListeners_;
    id <ComGoogleCommonTimeClock> clock_;
    id <ComGoogleCaribouComponentsClientassignedidsClientAssignedMailIdGenerator> idGenerator_;
    id <ComGoogleCaribouComponentsServerpermidsItemServerPermIdGenerator> itemServerPermIdGenerator_;
    ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter *multiLoginUrlRewriter_;
    id <ComGoogleAppsBigtopDataDelegationDelegationUrlRewriter> delegationUrlRewriter_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    id <ComGoogleCaribouComponentsComposeRecipientListFactory> recipientListFactory_;
    id <ComGoogleCaribouComponentsComposeSubjectPrefixHelper> subjectPrefixHelper_;
    id <DaggerLazy> sendingMonitorImpl_;
    ComGoogleAppsBigtopSyncClientImplSettingsApiCustomFromSettings *customFromSettings_;
    JBTLoggingUserActionRecorder *userActionRecorder_;
    id <ComGoogleAppsBigtopSyncClientImplLockerApiLockerControlsFactory> lockerControlsFactory_;
    id <ComGoogleAppsBigtopSyncClientImplLockerApiLockerRecipientsFactory> lockerRecipientsFactory_;
    ComGoogleAppsBigtopSyncClientImplConversationsCommonMessageDataHelper *messageDataHelper_;
    id <ComGoogleAppsBigtopSyncClientImplItemsApiInternalItemMessagesMonitorFactory> itemMessagesMonitorFactory_;
    ComGoogleAppsBigtopSyncClientImplComposeAsyncSignatureTextFetcher *signatureTextFetcher_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopSyncClientImplStarsStarStateCalculator *starStateCalculator_;
    ComGoogleAppsBigtopSyncClientImplComposeAsyncDraftserializationAccountAgnosticDraftSerializer *accountAgnosticDraftSerializer_;
    ComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendHelper *scheduledSendHelper_;
    ComGoogleAppsBigtopSyncClientImplComposeAsyncMessageAttributionFormatter *messageAttributionFormatter_;
    id <ComGoogleAppsBigtopSyncClientApiSmartcomposeFactoryAssistedWritingSessionFactory> assistedWritingSessionFactory_;
    id <JBTChannelAssistFetcher> channelAssistFetcher_;
    ComGoogleAppsBigtopSyncClientImplConversationsCommonSecurityInteractionHelper *securityInteractionHelper_;
    id <JBTId> messageId_;
    id <JBTId> originalOwnerConversationId_;
    ComGoogleAppsBigtopSyncClientImplCommonUserinfoUserInfo *userInfo_;
    NSString *originalSubject_;
    _Bool isReopenedDraft_;
    ComGoogleCommonCollectImmutableList *untrustedAddresses_;
    _Bool cancelSendSupported_;
    _Bool canForkConversation_;
    _Bool addSignatureOnCompose_;
    _Bool putSignatureBeforeQuotedText_;
    ComGoogleAppsBigtopSyncClientImplCommonCaribouUrls *caribouUrls_;
    _Bool preventSuspiciousDisplayName_;
    id <ComGoogleAppsBigtopDataItemsActiveApiActiveItemsTracker> activeItemsTracker_;
    ComGoogleCommonBaseOptional *previousKnownDraftStorageId_;
    NSString *composeSessionIdPrefix_;
    id <JavaUtilList> toList_;
    id <JavaUtilList> ccList_;
    id <JavaUtilList> bccList_;
    id <JavaUtilList> bodyHtmlRegions_;
    id <JavaUtilList> attachmentList_;
    id <JavaUtilList> mediaInsertionRequestList_;
    id <JavaUtilList> aliasedEmailAddresses_;
    id <JavaUtilList> verifiedFromAddresses_;
    ComGoogleAppsBigtopServicesCommonUtilsCachedValue *verifiedFromContactReferences_;
    id <JBTId> ownerConversationId_;
    NSString *subject_;
    _Bool sentOrDiscarded_;
    _Bool isSentAndArchived_;
    _Bool isExistingDraft_;
    _Bool isExistingConversation_;
    _Bool hasBeenEdited_;
    JBTCContactRef *from_;
    id <JavaUtilList> additionalLabelIds_;
    ComGoogleAppsBigtopServicesTasksBigTopTask *task_;
    int generatedAttachmentCount_;
    ComGoogleCommonBaseOptional *responseType_;
    ComGoogleCommonBaseOptional *responseToMessage_;
    ComGoogleCommonBaseOptional *unclippedResponseToMessage_;
    ComGoogleCommonBaseOptional *ownerConversation_;
    id <ComGoogleAppsBigtopSyncClientImplCommonObjectMonitor> attachmentMonitor_;
    id <XPTListMultimap> pendingInsertedMediaListeners_;
    int usedSmartreplySuggestionIndex_;
    NSString *newMessageServerPermId_;
    ComGoogleCommonBaseOptional *draftEncryptionAndSignatureSettings_;
    id <JBTLockerControls> lockerControls_;
    ComGoogleCommonBaseOptional *walletAttachmentInfo_;
    ComGoogleCommonBaseOptional *numAbusePasteEventsBody_;
    ComGoogleCommonBaseOptional *numAbusePasteEventsRecipients_;
    ComGoogleCommonBaseOptional *numAbuseKeystrokeEventsBody_;
    ComGoogleCommonBaseOptional *areRecipientsFromMailto_;
    ComGoogleCommonBaseOptional *lockerRecipients_;
    _Bool isBodyHtml_;
    _Bool plainTextComposeEnabled_;
    _Bool enableSignatureLeadingLineBreaks_;
    ComGoogleCommonBaseOptional *starState_;
    ComGoogleCommonBaseOptional *scheduledSendTimeMs_;
    _Bool enableReadReceipts_;
    _Bool readReceiptRequested_;
    id <JBTAssistedWritingSession> assistedWritingSession_;
    id <JBTAssistedWritingSuggestionFetcher> assistedWritingSuggestionFetcher_;
    _Bool multipleSignaturesEnabled_;
    ComGoogleCommonBaseOptional *messageDateMs_;
    _Bool isBeginningOfStarringSequence_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getChannelAssistFetcher;
- (id)getAssistedWritingSuggestionFetcherWithJBTSessionStartEvent:(id)arg1;
- (id)getAssistedWritingSessionWithJBTSessionStartEvent:(id)arg1;
- (id)logComposeWarningShownWithJBTSecurityComposeWarning:(id)arg1;
- (_Bool)isExistingDraft;
- (id)serializeToAccountAgnosticRepresentation;
- (void)setReadReceiptRequestedWithBoolean:(_Bool)arg1;
- (_Bool)isReadReceiptRequested;
- (_Bool)canRequestReadReceipt;
- (void)sendCanceled;
- (void)setIsBodyHtmlWithBoolean:(_Bool)arg1;
- (_Bool)isBodyHtml;
- (void)release__;
- (void)setAreRecipientsFromMailtoWithBoolean:(_Bool)arg1;
- (void)setNumAbuseKeystrokeEventsBodyWithInt:(int)arg1;
- (void)setNumAbusePasteEventsRecipientsWithInt:(int)arg1;
- (void)setNumAbusePasteEventsBodyWithInt:(int)arg1;
- (void)removeWalletAttachment;
- (id)getWalletAttachment;
- (_Bool)hasWalletAttachment;
- (void)updateSentWalletAttachmentWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)createOrReplaceDraftWalletAttachmentWithNSString:(id)arg1 withLong:(long long)arg2 withNSString:(id)arg3 withJBTWalletAttachmentInfo_AttachmentTypeInfo:(id)arg4;
- (void)removeWalletAttachmentHtmlSnippetRegionFromBody;
- (void)setDraftWalletAttachmentWithComGoogleAppsBigtopServicesGmailWalletAttachment:(id)arg1;
- (id)getPrintDraftUrl;
- (id)changeLabelsWithJBTChangeLabelsInfo:(id)arg1;
- (_Bool)canChangeLabelsWithJBTChangeLabelsInfo:(id)arg1;
- (id)unstar;
- (_Bool)canUnstar;
- (id)star;
- (_Bool)canStar;
- (_Bool)isStarred;
- (_Bool)isResponseToLockerMessage;
- (id)getNonViewableLockerAttachmentList;
- (_Bool)isLockerMessageMissingPhoneNumbers;
- (id)getLockerRecipients;
- (id)getLockerControls;
- (void)setLockerControlsWithJBTLockerControls:(id)arg1;
- (void)markAsNotLockerMessage;
- (id)markAsLockerMessage;
- (_Bool)isLockerMessage;
- (id)createDraftEncryptionAndSignatureSettingsBuilder;
- (void)setDraftEncryptionAndSignatureSettingsWithJBTDraftEncryptionAndSignatureSettings:(id)arg1;
- (id)getDraftEncryptionAndSignatureSettings;
- (id)getInResponseToMessageLoggingId;
- (id)getResponseType;
- (id)getUntrustedAddresses;
- (_Bool)hasUnsyncedAttachment;
- (void)insertMediaWithJBTMedia:(id)arg1 withJBTMediaInsertionListener:(id)arg2 withJBTSpan:(id)arg3;
- (id)getInlineAttachmentForEmbeddedUrlWithNSString:(id)arg1;
- (void)setUsedSmartreplySuggestionIndexWithInt:(int)arg1;
- (id)getParticipantsSummaryWithInt:(int)arg1;
- (void)setParticipantSetWithJBTParticipantSet:(id)arg1;
- (id)getParticipantSet;
- (id)getMessageRegionTypeFromOrdinalWithInt:(int)arg1;
- (id)createMessageRegionWithNSString:(id)arg1 withJBTMessageRegion_Type:(id)arg2;
- (_Bool)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (id)getNewMessageId;
- (id)getNewConversationId;
- (id)undoableDiscardWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2 withJBTId:(id)arg3 withJBTId:(id)arg4;
- (id)undoableDiscardPreservingIdsWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)discardWithFuture;
- (id)discardWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canDiscard;
- (_Bool)hasValidRecipients;
- (void)registerAsUploadingAttachmentsFromOutbox;
- (_Bool)isMarkedForEventualSendByClient;
- (id)unmarkForEventualSendByClient;
- (id)markForEventualSendByClientAndArchive;
- (id)markForEventualSendByClient;
- (id)sendAndArchive;
- (id)canSendAndArchiveWithStatus;
- (id)sendWithFuture;
- (id)sendWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)canSendWithStatus;
- (_Bool)canSend;
- (id)saveWithFuture;
- (id)saveWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)canSaveWithStatus;
- (_Bool)canSave;
- (void)setTaskWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1;
- (void)setAdditionalLabelIdsWithJavaUtilList:(id)arg1;
- (id)getMediaInsertionRequestList;
- (void)setMediaInsertionRequestListWithJavaUtilList:(id)arg1;
- (void)setBodyRegionsWithJavaUtilList:(id)arg1;
- (void)setBodyWithNSString:(id)arg1;
- (void)setSubjectWithNSString:(id)arg1;
- (void)maybeAddSignatureForCompose;
- (id)getCcRecipientsForResponseTypeWithJBTConversationMessageDraft_ResponseType:(id)arg1;
- (id)getMessageRegionsForResponse;
- (id)getToRecipientsForResponseTypeWithJBTConversationMessageDraft_ResponseType:(id)arg1;
- (void)updateDraftForResponse;
- (void)changeResponseTypeKeepAttachmentsWithJBTConversationMessageDraft_ResponseType:(id)arg1;
- (void)changeResponseTypeWithJBTConversationMessageDraft_ResponseType:(id)arg1;
- (void)setHasBeenEdited;
- (_Bool)canBeForward;
- (_Bool)canBeReplyAll;
- (_Bool)canChangeResponseType;
- (_Bool)isForward;
- (_Bool)isReplyOrForward;
- (void)addOriginalAttachments;
- (_Bool)canAddOriginalAttachments;
- (id)generateInlineAttachmentIdWithNSString:(id)arg1;
- (id)generateSeparateAttachmentIdWithNSString:(id)arg1;
- (id)generateAttachmentIdWithNSString:(id)arg1;
- (id)createDuplicateAttachmentWithUniqueIdWithJBTMessageAttachment:(id)arg1;
- (id)createAttachmentGivenEncryptedDriveBlobIdWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_Type:(id)arg4 withNSString:(id)arg5 withLong:(long long)arg6;
- (id)createAttachmentGivenDownloadUriWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_Type:(id)arg4 withNSString:(id)arg5 withLong:(long long)arg6;
- (id)createAttachmentGivenSizeWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_Type:(id)arg4 withNSString:(id)arg5 withLong:(long long)arg6;
- (id)createAttachmentGivenIdWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_Type:(id)arg4 withNSString:(id)arg5;
- (id)createAttachmentWithIdWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_Type:(id)arg4;
- (id)createAttachmentWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)setAttachmentListWithJavaUtilList:(id)arg1;
- (_Bool)isLastScheduledSendTimeEqualToWhenBackInOfficeWithLong:(long long)arg1;
- (id)getAttachmentList;
- (id)getAttachments;
- (id)getFormattedTimestampForOutOfOfficeTypeWithLong:(long long)arg1;
- (id)getFormattedTimestampForScheduledSendTypeWithJBTConversationMessageDraft_ScheduledSendType:(id)arg1;
- (id)getDisplayStringForScheduledSendTypeWithJBTConversationMessageDraft_ScheduledSendType:(id)arg1;
- (void)setScheduledSendTimeMsWithTypeWithJBTConversationMessageDraft_ScheduledSendType:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2;
- (void)setScheduledSendTimeMsIfNotPastWithLong:(long long)arg1;
- (void)setScheduledSendTimeMsWithLong:(long long)arg1;
- (_Bool)canSetScheduledSendTime;
- (id)getScheduledSendTimeMs;
- (id)getTimeSinceRepliedMessageMs;
- (_Bool)isFollowUp;
- (id)getRecipientsSummaryWithInt:(int)arg1;
- (id)getBcc;
- (id)getCc;
- (id)getTo;
- (id)getFrom;
- (id)getVerifiedFromAddresses;
- (void)setFromWithJBTContactReference:(id)arg1;
- (id)getBodyRegions;
- (id)getBody;
- (void)setBodyPlainTextWithNSString:(id)arg1;
- (id)getBodyPlainText;
- (id)getSubject;
- (void)setResponseTypeWithJBTConversationMessageDraft_ResponseType:(id)arg1;
- (void)setUnclippedResponseToDataWithComGoogleCommonBaseOptional:(id)arg1;
- (void)setResponseToMessageWithComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageData:(id)arg1;
- (id)buildMessageWithBoolean:(_Bool)arg1;
- (id)getMessageId;
- (id)getOwnerConversationId;
- (id)getLoggingId;
- (id)getSerializedId;
- (id)commitStarState;
- (id)incrementStarState;
- (id)getStarState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

