//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataItemsVisibilityCalculationParameters_Builder.h"

@class ComGoogleAppsBigtopDataItemsStorageTypesClusterEntrySet, ComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData, ComGoogleCommonBaseOptional, JavaLangLong;
@protocol ComGoogleCommonBasePredicate;

@interface ComGoogleAppsBigtopDataItemsVisibilityAutoValue_CalculationParameters_Builder : ComGoogleAppsBigtopDataItemsVisibilityCalculationParameters_Builder
{
    JavaLangLong *itemRowId_;
    JavaLangLong *writeSequenceId_;
    ComGoogleCommonBaseOptional *workflowAssistConfig_;
    id <ComGoogleCommonBasePredicate> viewsToRetain_;
    ComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData *itemData_;
    ComGoogleAppsBigtopDataItemsStorageTypesClusterEntrySet *clusterEntrySet_;
}

- (void)dealloc;
- (id)build;
- (id)setClusterEntrySetWithComGoogleAppsBigtopDataItemsStorageTypesClusterEntrySet:(id)arg1;
- (id)setItemDataWithComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData:(id)arg1;
- (id)setViewsToRetainWithComGoogleCommonBasePredicate:(id)arg1;
- (id)setWorkflowAssistConfigWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setWriteSequenceIdWithJavaLangLong:(id)arg1;
- (id)setItemRowIdWithJavaLangLong:(id)arg1;

@end

