//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTOfflineEntityGeneratorDelegate-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTGenericLatencyTickLogger;
@protocol OS_dispatch_queue, YTInMemoryEntityStore;

@interface YTOfflineEntityStoreController : NSObject <YTOfflineEntityGeneratorDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    id <YTInMemoryEntityStore> _entityStore;
    NSMutableArray *_preInitUpdates;
    NSMutableArray *_initialControllers;
    NSMutableArray *_initialEntities;
    GIMMe *_gimme;
    YTGenericLatencyTickLogger *_latencyLogger;
}

+ (id)generationStatusEntityKeyForContentType:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTGenericLatencyTickLogger *latencyLogger; // @synthesize latencyLogger=_latencyLogger;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)didObserveDeleteEntitiesWithKeys:(id)arg1;
- (void)didObserveUpdateForEntity:(id)arg1;
- (void)commitPostInitEntities;
- (id)generationStatusEntityForContentType:(int)arg1;
- (void)commitEntities:(id)arg1 withCallbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)flattenedUpdates:(id)arg1;
- (void)handlePreInitUpdates;
- (void)commitEntityUpdates:(id)arg1 withCallbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)commitEntityUpdates:(id)arg1;
- (void)didGenerateInitialEntities:(id)arg1 forController:(id)arg2;
- (void)willGenerateInitialEntitiesForController:(id)arg1;
- (id)initWithWorkQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
