//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationQueueService-Protocol.h"

@class NSString, SPTAllocationContext, SPTExternalIntegrationPlaybackServiceImplementation;
@protocol SPTExternalIntegrationDebugLogService, SPTExternalIntegrationQueueController;

@interface SPTExternalIntegrationQueueServiceImplementation : NSObject <SPTExternalIntegrationQueueService>
{
    id <SPTExternalIntegrationQueueController> _sharedController;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    SPTExternalIntegrationPlaybackServiceImplementation *_playbackService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak SPTExternalIntegrationPlaybackServiceImplementation *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(readonly, nonatomic) id <SPTExternalIntegrationQueueController> sharedController; // @synthesize sharedController=_sharedController;
- (id)provideQueueController;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

