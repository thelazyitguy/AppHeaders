//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatUtilFunctionBiFunction-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_RequestPriority, ComGoogleAppsBigtopDataItemsSyncAsyncItemsSyncerImpl, JBTSConfigureSyncRequest_SyncMode, NSString, OrgJodaTimeInstant;

@interface ComGoogleAppsBigtopDataItemsSyncAsyncItemsSyncerImpl_$Lambda$65 : NSObject <ComGoogleAppsXplatUtilFunctionBiFunction>
{
    ComGoogleAppsBigtopDataItemsSyncAsyncItemsSyncerImpl *this$0_;
    OrgJodaTimeInstant *val$deadline_;
    JBTSConfigureSyncRequest_SyncMode *val$syncMode_;
    ComGoogleAppsBigtopDataItemsItemsProto_RequestPriority *val$requestPriority_;
    int val$numChangesSyncedToServer_;
}

- (void)dealloc;
- (id)applyWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
