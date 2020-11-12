//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSManagedObjectContext, NSNotificationCenter, SLKAccount, SLKTraceContext, _TtC13SlackCoreData23SLKManagedObjectContext, _TtC13SlackCoreData29DataRepositoryObserverManager;
@protocol ClearFailedMessageHelperInterface, ClearQuickReplyHelperInterface, MigrateFailedMessageHelperInterface, MigrateQuickReplyHelperInterface, ObjectCacheInterface, _TtP13SlackCoreData33SLKOperationQueueManagerInterface_;

@protocol SLKDataRepositoryInterface
+ (void)deleteFor:(SLKAccount *)arg1 clearQuickReplyHelper:(id <ClearQuickReplyHelperInterface>)arg2 clearFailedMessageHelper:(id <ClearFailedMessageHelperInterface>)arg3;
- (void)shutDownAllContexts;
- (void)cleanRepository:(SLKAccount *)arg1 migrateQuickReplyHelper:(id <MigrateQuickReplyHelperInterface>)arg2 migrateFailedMessageHelper:(id <MigrateFailedMessageHelperInterface>)arg3 notificationCenter:(NSNotificationCenter *)arg4 completion:(void (^)(void))arg5;
- (void)dumpMessageCache:(NSNotificationCenter *)arg1 completion:(void (^)(void))arg2;
- (_Bool)deletePrefsForAccount:(SLKAccount *)arg1;
- (void)deleteEphemeralMessages:(void (^)(void))arg1;
- (void)deleteAllMessages:(void (^)(void))arg1;
@property(nonatomic, readonly) _TtC13SlackCoreData29DataRepositoryObserverManager *observerManager;
@property(nonatomic, readonly) id <_TtP13SlackCoreData33SLKOperationQueueManagerInterface_> operationQueueManager;
@property(nonatomic, readonly) _TtC13SlackCoreData23SLKManagedObjectContext *temporaryContextMain;
@property(nonatomic, readonly) _TtC13SlackCoreData23SLKManagedObjectContext *messageContext;
@property(nonatomic, readonly) _TtC13SlackCoreData23SLKManagedObjectContext *backgroundContext;
@property(nonatomic, readonly) _TtC13SlackCoreData23SLKManagedObjectContext *mainContext;
- (NSDictionary *)getPrefsForType:(long long)arg1 account:(SLKAccount *)arg2;
- (_Bool)savePrefs:(NSDictionary *)arg1 forType:(long long)arg2 account:(SLKAccount *)arg3;
- (unsigned long long)contextTypeForContext:(NSManagedObjectContext *)arg1;
- (_TtC13SlackCoreData23SLKManagedObjectContext *)contextForType:(unsigned long long)arg1;
- (NSManagedObjectContext *)createInMemoryManagedObjectContextWithConcurrencyType:(unsigned long long)arg1;
- (NSManagedObjectContext *)createInMemoryManagedObjectContext;
- (void)performContextBlock:(unsigned long long)arg1 block:(void (^)(void))arg2;
- (void)performMessageBlock:(void (^)(void))arg1;
- (void)performBackgroundBlock:(void (^)(void))arg1;
- (void)performMainBlock:(void (^)(void))arg1;
- (_Bool)isConfigured;
- (_Bool)isCoreDataStackSetup;
- (void)tearDownCurrentStack;
- (void)resetRepository:(id <ObjectCacheInterface>)arg1;
- (void)createCoreDataStackForAccount:(SLKAccount *)arg1 migrateQuickReplyHelper:(id <MigrateQuickReplyHelperInterface>)arg2 migrateFailedMessageHelper:(id <MigrateFailedMessageHelperInterface>)arg3 notificationCenter:(NSNotificationCenter *)arg4 traceContext:(SLKTraceContext *)arg5 completion:(void (^)(void))arg6;
@end
