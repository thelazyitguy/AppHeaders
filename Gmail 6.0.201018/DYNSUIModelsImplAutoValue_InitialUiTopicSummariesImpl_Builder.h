//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsImplInitialUiTopicSummariesImpl_Builder.h"

@class ComGoogleCommonCollectImmutableList, DYNSCommonGroupId, JavaLangBoolean, JavaLangLong, JavaUtilOptional;

@interface DYNSUIModelsImplAutoValue_InitialUiTopicSummariesImpl_Builder : DYNSUIModelsImplInitialUiTopicSummariesImpl_Builder
{
    DYNSCommonGroupId *groupId_;
    JavaLangLong *readTimestampMicros_;
    JavaLangLong *sortTimestampMicros_;
    JavaUtilOptional *markAsUnreadTimestampMicros_;
    ComGoogleCommonCollectImmutableList *topicSummaries_;
    JavaUtilOptional *inviteState_;
    JavaLangBoolean *hasMorePreviousTopics_;
    JavaLangBoolean *hasMoreNextTopics_;
}

- (void)dealloc;
- (id)build;
- (id)setHasMoreNextTopicsWithBoolean:(_Bool)arg1;
- (id)setHasMorePreviousTopicsWithBoolean:(_Bool)arg1;
- (id)setInviteStateWithDYNSModelsCommonUserInviteState:(id)arg1;
- (id)setTopicSummariesWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setMarkAsUnreadTimestampMicrosWithJavaUtilOptional:(id)arg1;
- (id)setSortTimestampMicrosWithLong:(long long)arg1;
- (id)setReadTimestampMicrosWithJavaLangLong:(id)arg1;
- (id)setGroupIdWithDYNSCommonGroupId:(id)arg1;

@end
