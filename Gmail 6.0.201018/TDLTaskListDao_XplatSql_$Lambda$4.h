//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonBaseFunction-Protocol.h"

@class NSString, TDLTaskListDao_XplatSql;

@interface TDLTaskListDao_XplatSql_$Lambda$4 : NSObject <ComGoogleCommonBaseFunction>
{
    TDLTaskListDao_XplatSql *this$0_;
    NSString *val$param_shardId_;
    NSString *val$param_taskListId_;
}

- (void)dealloc;
- (id)andThenWithJavaUtilFunctionFunction:(id)arg1;
- (id)composeWithJavaUtilFunctionFunction:(id)arg1;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
