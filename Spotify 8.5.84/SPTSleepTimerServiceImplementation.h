//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSleepTimerService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSleepTimerUBILogger;
@protocol GaiaFeature, SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTPlayerFeature, SPTSleepTimerContextMenuActionsProvider, SPTSleepTimerController, SPTUBIService;

@interface SPTSleepTimerServiceImplementation : NSObject <SPTSleepTimerService>
{
    id <SPTPlayerFeature> _playerFeature;
    id <GaiaFeature> _gaiaFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTSleepTimerController> _sleepTimerController;
    id <SPTSleepTimerContextMenuActionsProvider> _sleepTimerContextMenuActionsProvider;
    id <SPTContainerUIService> _containerUIService;
    id <SPTContainerService> _containerService;
    id <SPTUBIService> _ubiService;
    SPTSleepTimerUBILogger *_logger;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTSleepTimerUBILogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(retain, nonatomic) id <SPTSleepTimerContextMenuActionsProvider> sleepTimerContextMenuActionsProvider; // @synthesize sleepTimerContextMenuActionsProvider=_sleepTimerContextMenuActionsProvider;
@property(retain, nonatomic) id <SPTSleepTimerController> sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
- (id)provideSleepTimerContextMenuPresenterForPodcast:(_Bool)arg1;
- (id)provideSleepTimerContextMenuActionsProvider;
- (id)provideSleepTimerController;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
