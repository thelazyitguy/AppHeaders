//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqlRead.h"

#import "ComGoogleAppsXplatSqlContainsParams-Protocol.h"

@class ComGoogleAppsXplatSqlSqlExp, ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsXplatSqlSqlQuery : ComGoogleAppsXplatSqlSqlRead <ComGoogleAppsXplatSqlContainsParams>
{
    ComGoogleCommonCollectImmutableList *from_;
    ComGoogleCommonCollectImmutableList *leftOuterJoins_;
    ComGoogleAppsXplatSqlSqlExp *where_;
    ComGoogleCommonCollectImmutableList *groupBy_;
    ComGoogleCommonCollectImmutableList *orderBy_;
    ComGoogleAppsXplatSqlSqlExp *offset_;
    ComGoogleAppsXplatSqlSqlExp *limit_;
    ComGoogleCommonCollectImmutableList *whereParams_;
    ComGoogleCommonCollectImmutableList *allParams_;
}

- (void)dealloc;
- (_Bool)isJoin;
- (id)getOrderBy;
- (id)getGroupBy;
- (id)getWhere;
- (id)getLimit;
- (id)getOffset;
- (id)getLeftOuterJoins;
- (id)getFrom;
- (id)acceptWithComGoogleAppsXplatSqlSqlStatementVisitor:(id)arg1;
- (id)getWhereParamsInOrder;
- (id)getAllParamsInOrder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

