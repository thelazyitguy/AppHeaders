//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBMWCarAPIFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTBMWSession, UIViewController, UIWindow;
@protocol SPTAccessoryManagerService, SPTContainerService, SPTExternalIntegrationDebugLogService, SPTImageLoadingService, SPTUIPresentationApplicationService, SPTURIDispatchService;

@interface SPTBMWCarAPIFeatureImplementation : NSObject <SPTBMWCarAPIFeature>
{
    SPTBMWSession *_session;
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTImageLoadingService> _imageLoadingService;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTUIPresentationApplicationService> _uiPresentationService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTContainerService> _containerService;
    UIViewController *_rapiDebugViewController;
    UIWindow *_rapiDebugWindow;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *rapiDebugWindow; // @synthesize rapiDebugWindow=_rapiDebugWindow;
@property(retain, nonatomic) UIViewController *rapiDebugViewController; // @synthesize rapiDebugViewController=_rapiDebugViewController;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTUIPresentationApplicationService> uiPresentationService; // @synthesize uiPresentationService=_uiPresentationService;
@property(nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(nonatomic) __weak id <SPTImageLoadingService> imageLoadingService; // @synthesize imageLoadingService=_imageLoadingService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
@property(retain, nonatomic) SPTBMWSession *session; // @synthesize session=_session;
- (id)provideBMWSession;
- (void)unload;
- (void)registerURISchemeHandler;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

