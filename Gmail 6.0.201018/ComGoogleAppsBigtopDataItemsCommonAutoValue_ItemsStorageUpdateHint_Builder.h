//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataItemsCommonItemsStorageUpdateHint_Builder.h"

@class ComGoogleAppsBigtopDataItemsCommonItemsStorageUpdateHint_UpdateOrigin, ComGoogleAppsBigtopDataItemsItemsProto_Priority, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableSet, JavaLangLong;

@interface ComGoogleAppsBigtopDataItemsCommonAutoValue_ItemsStorageUpdateHint_Builder : ComGoogleAppsBigtopDataItemsCommonItemsStorageUpdateHint_Builder
{
    JavaLangLong *hintVersion_;
    JavaLangLong *observedWriteSequenceId_;
    ComGoogleAppsBigtopDataItemsItemsProto_Priority *priority_;
    ComGoogleCommonCollectImmutableSet *itemListIds_;
    ComGoogleCommonCollectImmutableSet *itemServerPermIds_;
    ComGoogleCommonCollectImmutableSet *clusterServerPermIds_;
    ComGoogleCommonCollectImmutableSet *throttledClusterServerPermIds_;
    ComGoogleCommonCollectImmutableSet *affectedViews_;
    ComGoogleCommonCollectImmutableSet *affectedItemVisibilityClusterPermIds_;
    ComGoogleCommonBaseOptional *viewHeldItemServerPermIds_;
    ComGoogleAppsBigtopDataItemsCommonItemsStorageUpdateHint_UpdateOrigin *updateOrigin_;
}

- (void)dealloc;
- (id)build;
- (id)setUpdateOriginWithComGoogleAppsBigtopDataItemsCommonItemsStorageUpdateHint_UpdateOrigin:(id)arg1;
- (id)setViewHeldItemServerPermIdsWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setAffectedItemVisibilityClusterPermIdsWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)setAffectedViewsWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)setThrottledClusterServerPermIdsWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)setClusterServerPermIdsWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)setItemServerPermIdsWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)setItemListIdsWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)setPriorityWithComGoogleAppsBigtopDataItemsItemsProto_Priority:(id)arg1;
- (id)setObservedWriteSequenceIdWithJavaLangLong:(id)arg1;
- (id)setHintVersionWithJavaLangLong:(id)arg1;

@end

