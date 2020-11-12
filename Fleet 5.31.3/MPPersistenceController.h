//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPPersistenceController : NSObject
{
    _Bool databaseOpen;
    struct sqlite3 *mParticleDB;
    NSString *_databasePath;
}

+ (void)setConsentState:(id)arg1 forMpid:(id)arg2;
+ (id)consentStateForMpid:(id)arg1;
+ (void)setMpid:(id)arg1;
+ (id)mpId;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void)updateSession:(id)arg1;
- (void)updateConsumerInfo:(id)arg1;
- (void)saveUpload:(id)arg1;
- (void)saveSession:(id)arg1;
- (void)saveSegment:(id)arg1;
- (void)saveMessage:(id)arg1;
- (void)saveIntegrationAttributes:(id)arg1;
- (void)saveForwardRecord:(id)arg1;
- (void)saveConsumerInfo:(id)arg1;
- (void)saveBreadcrumb:(id)arg1;
- (_Bool)openDatabase;
- (void)purgeMemory;
- (void)moveDatabasesFromMpidZeroToMpid:(id)arg1;
- (void)moveUserDefaultsFromMpidZeroToMpid:(id)arg1;
- (void)moveContentFromMpidZeroToMpid:(id)arg1;
- (id)fetchUploads;
- (id)fetchUploadedMessagesInSession:(id)arg1;
- (id)fetchSessions;
- (id)fetchSessionEndMessageInSession:(id)arg1;
- (id)fetchSegments;
- (id)fetchPreviousSession;
- (id)fetchPossibleSessionsFromCrash;
- (id)fetchMessagesForUploading;
- (id)fetchIntegrationAttributesForId:(id)arg1;
- (id)fetchIntegrationAttributes;
- (id)fetchForwardRecords;
- (id)fetchCookiesForUserId:(id)arg1;
- (id)fetchConsumerInfoForUserId:(id)arg1;
- (id)fetchBreadcrumbs;
- (void)deleteUploadId:(long long)arg1;
- (void)deleteUpload:(id)arg1;
- (void)deleteSession:(id)arg1;
- (void)deleteAllSessionsExcept:(id)arg1;
- (void)deleteSegments;
- (void)deleteRecordsOlderThan:(double)arg1;
- (void)deletePreviousSession;
- (void)deleteNetworkPerformanceMessages;
- (void)deleteMessages:(id)arg1;
- (void)deleteIntegrationAttributesForIntegrationId:(id)arg1;
- (void)deleteAllIntegrationAttributes;
- (void)deleteForwardRecordsIds:(id)arg1;
- (void)deleteConsumerInfo;
- (_Bool)closeDatabase;
- (id)archiveSession:(id)arg1;
- (long long)verifyDatabaseState;
- (void)updateCookie:(id)arg1;
- (void)setupDatabase;
- (void)saveCookie:(id)arg1 forConsumerInfo:(id)arg2;
- (void)resetDatabase;
- (void)removeDatabase;
@property(readonly, nonatomic, getter=isDatabaseOpen) _Bool databaseOpen;
- (void)deleteCookies;
- (void)deleteCookie:(id)arg1;
- (void)migrateDatabaseIfNeeded;
- (id)init;

@end
