//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncInternalSyncer.h"

@class DYNSSyncV2EntitiesGroupEntityManagerRegistry, XPTXLogger;
@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, DYNSCommonDynamiteClock, DYNSStorageApiGroupStorageCoordinator, JavaUtilConcurrentExecutor;

@interface DYNSSyncV2DebugDataCreatorSyncer : DYNSSyncInternalSyncer
{
    XPTXLogger *logger_;
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    id <JavaUtilConcurrentExecutor> dataExecutor_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    id <DYNSStorageApiGroupStorageCoordinator> groupStorageCoordinator_;
}

- (void)dealloc;
- (id)executeWithDYNSSyncInternalSyncRequest:(id)arg1;

@end
