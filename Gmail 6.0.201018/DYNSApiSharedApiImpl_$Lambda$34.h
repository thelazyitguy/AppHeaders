//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncCallable-Protocol.h"

@class ComGoogleCommonCollectImmutableList, DYNSApiSharedApiImpl, DYNSCommonGroupId, NSString;

@interface DYNSApiSharedApiImpl_$Lambda$34 : NSObject <ComGoogleCommonUtilConcurrentAsyncCallable>
{
    DYNSApiSharedApiImpl *this$0_;
    NSString *val$query_;
    DYNSCommonGroupId *val$groupId_;
    int val$maxResults_;
    _Bool val$restrictToBotsInGroup_;
    ComGoogleCommonCollectImmutableList *val$botUseCases_;
}

- (void)dealloc;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
