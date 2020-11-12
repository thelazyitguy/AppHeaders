//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTStatus_AppState, JBTStatus_ItemsEntireSyncState, JBTStatus_NetworkState, JBTStatus_RequestType, NSString;
@protocol JBTCallback, JBTEventListener, JavaUtilMap;

@protocol JBTStatus <JavaObject>
- (void)setAppStateWithJBTStatus_AppState:(JBTStatus_AppState *)arg1;
- (_Bool)isClientOrUserMakingTooManyRequests;
- (ComGoogleCommonBaseOptional *)isClientBigTopEnabled;
- (_Bool)isClientAuthRequired;
- (_Bool)isClientUpdatedRequired;
- (ComGoogleCommonBaseOptional *)getLastSuccessfulFullItemsSyncIterationTimeMs;
- (JBTStatus_ItemsEntireSyncState *)getLatestItemsEntireSyncState;
- (JBTStatus_RequestType *)getRequestType;
- (JBTStatus_NetworkState *)getNetworkState;
- (void)stop;
- (_Bool)hasListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)removeListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)addListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)logDetailedStatusWithCallbackAndClientDataWithJBTCallback:(id <JBTCallback>)arg1 withNSString:(NSString *)arg2;
- (NSString *)getStaticSummaryForDebugging;
- (id <JavaUtilMap>)getDynamicSummaryMapForDebugging;
- (NSString *)getStatusSummaryForDebugging;
- (_Bool)isConnected;
- (int)getBackgroundSyncObjectCount;
- (int)getPendingModifiedCount;
- (_Bool)isSyncInProgress;
- (_Bool)hasPendingModifiedObjects;
@end
