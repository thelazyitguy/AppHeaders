//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService-Protocol.h"

@class ComGoogleAppsXplatJobsJobConfig, ComGoogleAppsXplatJobsJobQueue, ComGoogleAppsXplatSqlSqlDatabase, JBTDImapImapBackfillViewRequestHandler, JBTDImapImapFetchMessageDetailsRequestHandler, JBTDImapImapPermanentlyDeleteByViewRequestHandler, JBTDImapImapSyncRequestHandler, NSString, XPTLifecycle;
@protocol ComGoogleAppsBigtopDataImapDisplayexternalresourcesApiImapDisplayExternalResourcesHelper, ComGoogleAppsXplatObserveObserverHolder, JavaxInjectProvider;

@interface JBTDImapImapItemsSyncServiceImpl : NSObject <ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService>
{
    JBTDImapImapSyncRequestHandler *syncRequestHandler_;
    JBTDImapImapFetchMessageDetailsRequestHandler *fetchMessageDetailsRequestHandler_;
    JBTDImapImapBackfillViewRequestHandler *backfillViewRequestHandler_;
    JBTDImapImapPermanentlyDeleteByViewRequestHandler *permanentlyDeleteByViewRequestHandler_;
    ComGoogleAppsXplatSqlSqlDatabase *imapDatabase_;
    id <JavaxInjectProvider> imapExecutor_;
    id <ComGoogleAppsXplatObserveObserverHolder> hibernateObserver_;
    XPTLifecycle *lifecycle_;
    ComGoogleAppsXplatJobsJobQueue *jobQueue_;
    ComGoogleAppsXplatJobsJobConfig *imapLocalAttachmentFileCleanupStartupJob_;
    ComGoogleAppsXplatJobsJobConfig *imapStorageEvictionStartubJob_;
    id <ComGoogleAppsBigtopDataImapDisplayexternalresourcesApiImapDisplayExternalResourcesHelper> imapDisplayExternalResourcesHelper_;
}

- (void)dealloc;
- (id)fetchAttachedMessageDetailsWithJBTSFetchAttachedMessageDetailsRequest:(id)arg1;
- (id)permanentlyDeleteByViewWithJBTSPermanentlyDeleteByViewRequest:(id)arg1;
- (id)backfillViewWithJBTSBackfillViewRequest:(id)arg1;
- (id)fetchDetailsWithJBTSFetchDetailsRequest:(id)arg1;
- (id)syncWithJBTSSyncRequest:(id)arg1;
- (id)getLifecycle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
