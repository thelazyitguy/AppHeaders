//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatSqlSqlExpVisitor-Protocol.h"

@class NSString;

@interface ComGoogleAppsXplatSqlRecursingSqlExpVisitor : NSObject <ComGoogleAppsXplatSqlSqlExpVisitor>
{
}

- (id)visitWithComGoogleAppsXplatSqlSumSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlSqlOrderingExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlSqlColumnDef:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlSqlParam:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlOrSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlNotSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlMinSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlMaxSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlIsNullSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlComparisonSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlLengthSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlCountSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlConstantSqlExp:(id)arg1;
- (id)visitWithComGoogleAppsXplatSqlAndSqlExp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

