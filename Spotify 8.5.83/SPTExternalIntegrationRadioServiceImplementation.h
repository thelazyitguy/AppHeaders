//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationRadioService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTExternalIntegrationDebugLogService, SPTExternalIntegrationPlaybackService, SPTExternalIntegrationRadioController, SPTRadioService;

@interface SPTExternalIntegrationRadioServiceImplementation : NSObject <SPTExternalIntegrationRadioService>
{
    id <SPTExternalIntegrationRadioController> _sharedController;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTRadioService> _radioService;
    id <SPTContainerService> _containerService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(readonly, nonatomic) id <SPTExternalIntegrationRadioController> sharedController; // @synthesize sharedController=_sharedController;
- (id)provideRadioController;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
