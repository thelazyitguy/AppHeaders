//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilFunctionConsumer-Protocol.h"

@class ComGoogleAppsXplatSqlSqlTransaction, ComGoogleCommonCollectImmutableList_Builder, DYNSStorageControllersGroupStorageControllerSql, NSString;

@interface DYNSStorageControllersGroupStorageControllerSql_$Lambda$8 : NSObject <JavaUtilFunctionConsumer>
{
    DYNSStorageControllersGroupStorageControllerSql *this$0_;
    ComGoogleCommonCollectImmutableList_Builder *val$futures_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
    NSString *val$groupIdString_;
}

- (void)dealloc;
- (id)andThenWithJavaUtilFunctionConsumer:(id)arg1;
- (void)acceptWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
