//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplFiltersFilterConfigImpl_Builder.h"

@class ComGoogleCommonBaseOptional, JBTFilterConfig_MarkAs, JavaLangBoolean;
@protocol JBTFilterConfig_CannedResponseLookupResult, JBTId, JBTStructuredQuery;

@interface ComGoogleAppsBigtopSyncClientImplFiltersAutoValue_FilterConfigImpl_Builder : ComGoogleAppsBigtopSyncClientImplFiltersFilterConfigImpl_Builder
{
    id <JBTId> id__;
    ComGoogleCommonBaseOptional *queryString_;
    id <JBTStructuredQuery> structuredQuery_;
    JavaLangBoolean *shouldMarkAsRead_;
    JavaLangBoolean *shouldStar_;
    ComGoogleCommonBaseOptional *userLabelClusterConfig_;
    JavaLangBoolean *shouldArchive_;
    JavaLangBoolean *shouldMoveToTrash_;
    ComGoogleCommonBaseOptional *forwardingAddress_;
    JBTFilterConfig_MarkAs *shouldMarkAsSpam_;
    id <JBTFilterConfig_CannedResponseLookupResult> cannedResponseLookupResult_;
    JBTFilterConfig_MarkAs *shouldMarkAsImportant_;
    JBTFilterConfig_MarkAs *shouldApplySmartLabels_;
    JavaLangBoolean *shouldCategorizeAsPersonal_;
    ComGoogleCommonBaseOptional *smartLabelClusterConfigToApply_;
}

- (void)dealloc;
- (id)autobuild;
- (id)setSmartLabelClusterConfigToApplyWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setShouldCategorizeAsPersonalWithBoolean:(_Bool)arg1;
- (id)setShouldApplySmartLabelsWithJBTFilterConfig_MarkAs:(id)arg1;
- (id)setShouldMarkAsImportantWithJBTFilterConfig_MarkAs:(id)arg1;
- (id)setCannedResponseLookupResultWithJBTFilterConfig_CannedResponseLookupResult:(id)arg1;
- (id)setShouldMarkAsSpamWithJBTFilterConfig_MarkAs:(id)arg1;
- (id)setForwardingAddressWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setShouldMoveToTrashWithBoolean:(_Bool)arg1;
- (id)setShouldArchiveWithBoolean:(_Bool)arg1;
- (id)setUserLabelClusterConfigWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setShouldStarWithBoolean:(_Bool)arg1;
- (id)setShouldMarkAsReadWithBoolean:(_Bool)arg1;
- (id)setStructuredQueryWithJBTStructuredQuery:(id)arg1;
- (id)setQueryStringWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setIdWithJBTId:(id)arg1;

@end
