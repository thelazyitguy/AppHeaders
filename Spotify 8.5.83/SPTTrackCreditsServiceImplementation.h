//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTTrackCreditsService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTNetworkService, SPTURIDispatchService;

@interface SPTTrackCreditsServiceImplementation : NSObject <SPTTrackCreditsService>
{
    id <SPTContainerService> _containerService;
    id <SPTNetworkService> _networkService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTContainerUIService> _containerUIService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void)presentCreditsViewController:(id)arg1;
- (id)provideTrackCreditsViewController:(id)arg1;
- (void)registerContextMenuActions;
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

