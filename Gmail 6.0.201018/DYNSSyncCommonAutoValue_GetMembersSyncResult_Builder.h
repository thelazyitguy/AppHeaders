//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncCommonGetMembersSyncResult_Builder.h"

@class ComGoogleCommonCollectImmutableList, ComGoogleCommonCollectImmutableSet;

@interface DYNSSyncCommonAutoValue_GetMembersSyncResult_Builder : DYNSSyncCommonGetMembersSyncResult_Builder
{
    ComGoogleCommonCollectImmutableList *users_;
    ComGoogleCommonCollectImmutableList *rosters_;
    ComGoogleCommonCollectImmutableSet *anonymousUserContextIds_;
    ComGoogleCommonCollectImmutableSet *omittedMemberIds_;
}

- (void)dealloc;
- (id)build;
- (id)setOmittedMemberIdsWithJavaUtilSet:(id)arg1;
- (id)setAnonymousUserContextIdsWithJavaUtilSet:(id)arg1;
- (id)setRostersWithJavaUtilList:(id)arg1;
- (id)setUsersWithJavaUtilList:(id)arg1;

@end
