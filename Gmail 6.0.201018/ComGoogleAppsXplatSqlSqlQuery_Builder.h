//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsXplatSqlSqlExp, ComGoogleCommonCollectImmutableList;
@protocol JavaUtilList;

@interface ComGoogleAppsXplatSqlSqlQuery_Builder : NSObject
{
    id <JavaUtilList> selection_;
    id <JavaUtilList> from_;
    id <JavaUtilList> leftOuterJoins_;
    ComGoogleAppsXplatSqlSqlExp *where_;
    id <JavaUtilList> groupBy_;
    id <JavaUtilList> orderBy_;
    ComGoogleAppsXplatSqlSqlExp *limit_;
    ComGoogleAppsXplatSqlSqlExp *offset_;
    ComGoogleCommonCollectImmutableList *whereParams_;
    ComGoogleCommonCollectImmutableList *allParams_;
    int lastSetIndex_;
}

- (void)dealloc;
- (id)build;
- (id)limitWithComGoogleAppsXplatSqlSqlExp:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2;
- (id)limitWithComGoogleAppsXplatSqlSqlExp:(id)arg1;
- (id)orderByWithJavaLangIterable:(id)arg1;
- (id)orderByWithComGoogleAppsXplatSqlSqlExpArray:(id)arg1;
- (id)groupByWithJavaLangIterable:(id)arg1;
- (id)groupByWithComGoogleAppsXplatSqlSqlExpArray:(id)arg1;
- (id)whereWithComGoogleAppsXplatSqlSqlExp:(id)arg1;
- (id)leftOuterJoinWithComGoogleAppsXplatSqlSqlTableDef:(id)arg1 withComGoogleAppsXplatSqlSqlExp:(id)arg2;
- (id)fromWithJavaLangIterable:(id)arg1;
- (id)fromWithComGoogleAppsXplatSqlSqlTableDefArray:(id)arg1;
- (id)selectWithJavaLangIterable:(id)arg1;
- (id)selectWithComGoogleAppsXplatSqlSqlExpArray:(id)arg1;

@end
