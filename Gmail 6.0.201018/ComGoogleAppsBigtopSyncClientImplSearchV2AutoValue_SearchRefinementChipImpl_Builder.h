//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplSearchV2SearchRefinementChipImpl_BuilderImpl.h"

@class ComGoogleCommonBaseOptional, JBTSearchRefinementChip_AttachmentType, JBTSearchRefinementChip_DateRangeType, JBTSearchRefinementChip_Type, JavaLangBoolean;

@interface ComGoogleAppsBigtopSyncClientImplSearchV2AutoValue_SearchRefinementChipImpl_Builder : ComGoogleAppsBigtopSyncClientImplSearchV2SearchRefinementChipImpl_BuilderImpl
{
    JBTSearchRefinementChip_Type *type_;
    JavaLangBoolean *selected_;
    JBTSearchRefinementChip_AttachmentType *attachmentType_;
    JBTSearchRefinementChip_DateRangeType *dateRangeType_;
    ComGoogleCommonBaseOptional *displayName_;
    ComGoogleCommonBaseOptional *emailAddress_;
    ComGoogleCommonBaseOptional *isCurrentUser_;
    ComGoogleCommonBaseOptional *dateFrom_;
    ComGoogleCommonBaseOptional *dateTo_;
}

- (void)dealloc;
- (id)build;
- (id)setDateToWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setDateFromWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setIsCurrentUserWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setEmailAddressWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setDisplayNameWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setDateRangeTypeWithJBTSearchRefinementChip_DateRangeType:(id)arg1;
- (id)setAttachmentTypeWithJBTSearchRefinementChip_AttachmentType:(id)arg1;
- (id)setSelectedWithBoolean:(_Bool)arg1;
- (id)setTypeWithJBTSearchRefinementChip_Type:(id)arg1;

@end
