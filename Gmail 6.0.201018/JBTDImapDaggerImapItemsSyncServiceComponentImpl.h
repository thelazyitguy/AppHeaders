//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTDImapImapItemsSyncServiceComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface JBTDImapDaggerImapItemsSyncServiceComponentImpl : NSObject <JBTDImapImapItemsSyncServiceComponentImpl>
{
    id <JavaxInjectProvider> rootLifecycleProvider_;
    id <JavaxInjectProvider> imapExecutorProvider_;
    id <JavaxInjectProvider> imapListCommandProcessorProvider_;
    id <JavaxInjectProvider> imapChangesFromServerTableControllerProvider_;
    id <JavaxInjectProvider> imapCreateCommandProcessorProvider_;
    id <JavaxInjectProvider> imapFolderTableControllerProvider_;
    id <JavaxInjectProvider> imapHostConfigProvider_;
    id <JavaxInjectProvider> imapRemoteFolderNameAndTypeResolverProvider_;
    id <JavaxInjectProvider> settableProvider_;
    id <JavaxInjectProvider> connectionTaskRunnerProvider_;
    id <JavaxInjectProvider> sqlDatabaseProvider_;
    id <JavaxInjectProvider> treatImapJunkFolderAsSystemFolderProvider_;
    id <JavaxInjectProvider> includeSystemClustersForImapProvider_;
    id <JavaxInjectProvider> forceOutboxLabelInLeftNavForImapProvider_;
    id <JavaxInjectProvider> forceUnclusteredStarredLabelInLeftNavForImapProvider_;
    id <JavaxInjectProvider> forceUnclusteredUnreadLabelInLeftNavForImapProvider_;
    id <JavaxInjectProvider> imapFolderUtilsProvider_;
    id <JavaxInjectProvider> imapFolderListSynchronizerProvider_;
    id <JavaxInjectProvider> messageSummaryTableControllerProvider_;
    id <JavaxInjectProvider> messageReferencesTableControllerProvider_;
    id <JavaxInjectProvider> messagesStorageCoordinatorProvider_;
    id <JavaxInjectProvider> imapMessageBasedUiEnabledProvider_;
    id <JavaxInjectProvider> imapMessageThreaderProvider_;
    id <JavaxInjectProvider> imapDisplayExternalResourcesHelperProvider_;
    id <JavaxInjectProvider> imapThreadProtoUtilsProvider_;
    id <JavaxInjectProvider> imapMoveFromServerReconcilerProvider_;
    id <JavaxInjectProvider> imapChangeFromServerReconcilerProvider_;
    id <JavaxInjectProvider> mimeMessageParserProvider_;
    id <JavaxInjectProvider> mimeBodyStructureParserProvider_;
    id <JavaxInjectProvider> messageRegionParserProvider_;
    id <JavaxInjectProvider> imapFetchCommandProcessorProvider_;
    id <JavaxInjectProvider> imapSelectCommandProcessorProvider_;
    id <JavaxInjectProvider> imapFolderSynchronizerProvider_;
    id <JavaxInjectProvider> imapFolderResolverProvider_;
    id <JavaxInjectProvider> imapFromServerSynchronizerProvider_;
    id <JavaxInjectProvider> imapAlwaysDisplayExternalResourcesFromSenderCommandHandlerProvider_;
    id <JavaxInjectProvider> mimeMessageWriterProvider_;
    id <JavaxInjectProvider> imapAppendCommandProcessorProvider_;
    id <JavaxInjectProvider> imapStoreCommandProcessorProvider_;
    id <JavaxInjectProvider> imapAppendMessagesCoordinatorProvider_;
    id <JavaxInjectProvider> imapExpungeCommandProcessorProvider_;
    id <JavaxInjectProvider> imapExpungeMessagesCoordinatorProvider_;
    id <JavaxInjectProvider> imapDeleteMessagesCoordinatorProvider_;
    id <JavaxInjectProvider> imapMoveCommandProcessorProvider_;
    id <JavaxInjectProvider> imapDraftsCoordinatorProvider_;
    id <JavaxInjectProvider> imapAttachmentOrOriginalMessageBodyFetcherProvider_;
    id <JavaxInjectProvider> imapDraftAttachmentHelperProvider_;
    id <JavaxInjectProvider> imapDraftRfc822MessageIdReferencesHelperProvider_;
    id <JavaxInjectProvider> imapDraftsTableControllerProvider_;
    id <JavaxInjectProvider> smtpSenderProvider_;
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> imapDraftMutationHandlerProvider_;
    id <JavaxInjectProvider> imapCreateDraftCommandHandlerProvider_;
    id <JavaxInjectProvider> imapCreateItemCommandHandlerProvider_;
    id <JavaxInjectProvider> imapCopyCommandProcessorProvider_;
    id <JavaxInjectProvider> imapFolderMoveCoordinatorProvider_;
    id <JavaxInjectProvider> imapModifyLabelFlagFolderUtilsProvider_;
    id <JavaxInjectProvider> messageSummaryFetcherProvider_;
    id <JavaxInjectProvider> imapModifyLabelsCommandHandlerProvider_;
    id <JavaxInjectProvider> imapPostChangeFolderSynchronizerProvider_;
    id <JavaxInjectProvider> imapRemoveDraftCommandHandlerProvider_;
    id <JavaxInjectProvider> imapRemoveWhitelistedDisplayExternalResourcesSenderCommandHandlerProvider_;
    id <JavaxInjectProvider> imapUpdateDraftCommandHandlerProvider_;
    id <JavaxInjectProvider> imapChangeToServerMergerProvider_;
    id <JavaxInjectProvider> imapRemoteChangeApplierProvider_;
    id <JavaxInjectProvider> imapThreadReaderProvider_;
    id <JavaxInjectProvider> imapMessageToSyncPerFolderProvider_;
    id <JavaxInjectProvider> sharedGuardProvider_;
    id <JavaxInjectProvider> imapSyncRequestHandlerProvider_;
    id <JavaxInjectProvider> imapFetchMessageDetailsRequestHandlerProvider_;
    id <JavaxInjectProvider> imapQueryConverterProvider_;
    id <JavaxInjectProvider> imapSearchCommandProcessorProvider_;
    id <JavaxInjectProvider> imapSearchProvider_;
    id <JavaxInjectProvider> imapBackfillViewRequestHandlerProvider_;
    id <JavaxInjectProvider> imapPermanentlyDeleteByViewRequestHandlerProvider_;
    id <JavaxInjectProvider> hibernateObservableProvider_;
    id <JavaxInjectProvider> jobQueueProvider_;
    id <JavaxInjectProvider> imapLocalAttachmentFileCleanupHelperProvider_;
    id <JavaxInjectProvider> imapItemsEvictorProvider_;
    id <JavaxInjectProvider> imapItemsSyncServiceImplProvider_;
    id <JavaxInjectProvider> provideItemsSyncServiceLifecycleProvider_;
}

- (void)dealloc;
- (id)getItemsSyncService;
- (id)getLifecycle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
