//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqlWrite.h"

#import "ComGoogleAppsXplatSqlContainsParams-Protocol.h"

@class ComGoogleAppsXplatSqlSqlExp, ComGoogleAppsXplatSqlSqlTableDef, ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsXplatSqlSqlDelete : ComGoogleAppsXplatSqlSqlWrite <ComGoogleAppsXplatSqlContainsParams>
{
    ComGoogleAppsXplatSqlSqlTableDef *from_;
    ComGoogleAppsXplatSqlSqlExp *where_;
    ComGoogleCommonCollectImmutableList *allParams_;
}

- (void)dealloc;
- (id)acceptWithComGoogleAppsXplatSqlSqlStatementVisitor:(id)arg1;
- (id)getAllParamsInOrder;
- (id)getWhere;
- (id)getFrom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

