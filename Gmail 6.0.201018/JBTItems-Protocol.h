//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTClassicGmailInboxSection_ClassicGmailInboxSectionType, JBTSmartLabelChangeSource, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JBTChangeLabelsInfo, JBTId, JBTItemsBatchCommand, JBTMoveToInboxSectionConfig, JBTSnoozeConfig_Factory, JavaUtilList, JavaUtilSet;

@protocol JBTItems <JavaObject>
- (NSString *)getMessageServerPermIdFromSapiMessageIdWithJBTId:(id <JBTId>)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getSapiItemIdFromLegacyThreadStorageIdWithLong:(long long)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getSapiItemIdFromLegacyMessageStorageIdWithLong:(long long)arg1;
- (id <JBTMoveToInboxSectionConfig>)createMoveToInboxSectionConfigWithJBTClassicGmailInboxSection_ClassicGmailInboxSectionType:(JBTClassicGmailInboxSection_ClassicGmailInboxSectionType *)arg1 withJBTSmartLabelChangeSource:(JBTSmartLabelChangeSource *)arg2;
- (id <JBTChangeLabelsInfo>)createChangeLabelsInfoWithSmartLabelChangeSourceWithJavaUtilSet:(id <JavaUtilSet>)arg1 withJavaUtilSet:(id <JavaUtilSet>)arg2 withJBTSmartLabelChangeSource:(JBTSmartLabelChangeSource *)arg3;
- (id <JBTChangeLabelsInfo>)createChangeLabelsInfoWithJavaUtilSet:(id <JavaUtilSet>)arg1 withJavaUtilSet:(id <JavaUtilSet>)arg2;
- (id <JBTItemsBatchCommand>)createBatchCommand;
- (id <JavaUtilList>)getSnoozeMenuOptionsForSelectedItemsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (id <JBTSnoozeConfig_Factory>)getSnoozeConfigFactory;
@end
