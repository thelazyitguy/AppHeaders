//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTDImapConfigImapHostConfigs_ImapHostConfig_Builder.h"

@class ComGoogleCommonCollectImmutableBiMap, ComGoogleCommonCollectImmutableList, JavaLangBoolean;

@interface JBTDImapConfigAutoValue_ImapHostConfigs_ImapHostConfig_Builder : JBTDImapConfigImapHostConfigs_ImapHostConfig_Builder
{
    JavaLangBoolean *doesAutoCopyDraftToSentFolderOnSend_;
    ComGoogleCommonCollectImmutableList *rootFoldersToIgnore_;
    ComGoogleCommonCollectImmutableBiMap *preferredFolderNameMap_;
    JavaLangBoolean *shouldDeleteDraftsByMovingToTrashAndDeleting_;
    JavaLangBoolean *shouldStoreFlagsAfterAppending_;
    JavaLangBoolean *shouldNotUseMoveCommand_;
    JavaLangBoolean *shouldOnlySearchSubject_;
    JavaLangBoolean *supportsDraftFlag_;
}

- (void)dealloc;
- (id)build;
- (id)setSupportsDraftFlagWithBoolean:(_Bool)arg1;
- (id)setShouldOnlySearchSubjectWithBoolean:(_Bool)arg1;
- (id)setShouldNotUseMoveCommandWithBoolean:(_Bool)arg1;
- (id)setShouldStoreFlagsAfterAppendingWithBoolean:(_Bool)arg1;
- (id)setShouldDeleteDraftsByMovingToTrashAndDeletingWithBoolean:(_Bool)arg1;
- (id)setPreferredFolderNameMapWithComGoogleCommonCollectImmutableBiMap:(id)arg1;
- (id)setRootFoldersToIgnoreWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setDoesAutoCopyDraftToSentFolderOnSendWithBoolean:(_Bool)arg1;

@end
