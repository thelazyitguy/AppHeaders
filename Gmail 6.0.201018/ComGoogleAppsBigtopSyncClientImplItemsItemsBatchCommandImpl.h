//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTItemsBatchCommand-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplItemsItemsCommandApplierFactory, JBTLoggingUserActionRecorder, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory, ComGoogleAppsBigtopSyncClientImplSnoozeApiLastSnoozeTracker, JavaUtilList;

@interface ComGoogleAppsBigtopSyncClientImplItemsItemsBatchCommandImpl : NSObject <JBTItemsBatchCommand>
{
    id <JavaUtilList> selected_;
    id <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory> transactionFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    JBTLoggingUserActionRecorder *userActionRecorder_;
    ComGoogleAppsBigtopSyncClientImplItemsItemsCommandApplierFactory *itemsCommandApplierFactory_;
    id <ComGoogleAppsBigtopSyncClientImplSnoozeApiLastSnoozeTracker> lastSnoozeTracker_;
    _Bool applied_;
}

+ (void)initialize;
- (void)dealloc;
- (id)applyWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2 withJBTSpan:(id)arg3;
- (id)applyWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2;
- (id)applyWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2 withJBTCallback:(id)arg3 withJBTSpan:(id)arg4;
- (id)getApplierWithJBTCommand_Type:(id)arg1 withId:(id)arg2;
- (id)getAffectedItemsCountWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2;
- (int)getApplicableCountWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2;
- (_Bool)canApplyToSomeWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2;
- (_Bool)canApplyToAllWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2;
- (_Bool)isAnyCommandApplicableWithJavaUtilList:(id)arg1;
- (id)getApplicableCommands;
- (_Bool)isApplicableCommandWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2;
- (id)getSelectedCount;
- (id)getSelectedItems;
- (void)selectItemsWithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
