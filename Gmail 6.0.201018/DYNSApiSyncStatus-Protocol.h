//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class DYNSCommonGroupId;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, DYNSUIModelsUiMessage;

@protocol DYNSApiSyncStatus <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)waitForWorldSync;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)waitForMembershipSyncWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)waitForCatchUpWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (_Bool)hasCaughtUpToMessageWithDYNSUIModelsUiMessage:(id <DYNSUIModelsUiMessage>)arg1;
@end
