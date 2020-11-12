//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsImplMessageUpdatesImpl_Builder.h"

@class ComGoogleCommonCollectImmutableList, ComGoogleCommonCollectImmutableMap, ComGoogleCommonCollectImmutableSet, DYNSUIModelsStreamSubscriptionUpdates_UpdateSource, JavaLangBoolean, JavaUtilOptional;

@interface DYNSUIModelsImplAutoValue_MessageUpdatesImpl_Builder : DYNSUIModelsImplMessageUpdatesImpl_Builder
{
    JavaLangBoolean *initialData_;
    JavaLangBoolean *moreUpdatesPending_;
    JavaLangBoolean *hasMorePreviousMessages_;
    JavaLangBoolean *hasMoreNextMessages_;
    DYNSUIModelsStreamSubscriptionUpdates_UpdateSource *updateSource_;
    ComGoogleCommonCollectImmutableList *addedMessages_;
    ComGoogleCommonCollectImmutableMap *addedMessageTypes_;
    ComGoogleCommonCollectImmutableList *updatedMessages_;
    ComGoogleCommonCollectImmutableSet *deletedMessageIds_;
    JavaUtilOptional *smartReplies_;
}

- (void)dealloc;
- (id)build;
- (id)setSmartRepliesWithJavaUtilOptional:(id)arg1;
- (id)setDeletedMessageIdsWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)setUpdatedMessagesWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setAddedMessageTypesWithComGoogleCommonCollectImmutableMap:(id)arg1;
- (id)setAddedMessagesWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setUpdateSourceWithDYNSUIModelsStreamSubscriptionUpdates_UpdateSource:(id)arg1;
- (id)setHasMoreNextMessagesWithBoolean:(_Bool)arg1;
- (id)setHasMorePreviousMessagesWithBoolean:(_Bool)arg1;
- (id)setMoreUpdatesPendingWithBoolean:(_Bool)arg1;
- (id)setInitialDataWithBoolean:(_Bool)arg1;

@end
