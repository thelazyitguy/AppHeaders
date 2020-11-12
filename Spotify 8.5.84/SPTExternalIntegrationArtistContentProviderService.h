//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationContentProvider-Protocol.h"
#import "SPTService-Protocol.h"

@class NSMutableArray, NSString, SPTAllocationContext;
@protocol SPTExternalIntegrationContentService, SPTExternalIntegrationTestManagerService, SPTNetworkService, _TtP18CoreSessionFeature21SPTCoreSessionService_;

@interface SPTExternalIntegrationArtistContentProviderService : NSObject <SPTService, SPTExternalIntegrationContentProvider>
{
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTNetworkService> _networkFeature;
    id <_TtP18CoreSessionFeature21SPTCoreSessionService_> _coreSessionService;
    id <SPTExternalIntegrationTestManagerService> _testManagerService;
    NSMutableArray *_activeDataLoaders;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *activeDataLoaders; // @synthesize activeDataLoaders=_activeDataLoaders;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationTestManagerService> testManagerService; // @synthesize testManagerService=_testManagerService;
@property(readonly, nonatomic) __weak id <_TtP18CoreSessionFeature21SPTCoreSessionService_> coreSessionService; // @synthesize coreSessionService=_coreSessionService;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
- (id)errorForDataLoaderError:(id)arg1;
- (id)createPlaceholderContentItemForURI:(id)arg1;
- (id)trackModelsForResponse:(id)arg1 trackURLs:(id)arg2 playerContext:(id)arg3;
- (void)resolveChildContentOfParentWithURI:(id)arg1 options:(id)arg2 requestOrigin:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (long long)priorityForChildContentOfParentWithURI:(id)arg1;
- (void)resolveContentWithURI:(id)arg1 options:(id)arg2 requestOrigin:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (long long)priorityForContentWithURI:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
