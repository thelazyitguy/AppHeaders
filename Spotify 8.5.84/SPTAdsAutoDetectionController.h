//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryStateObserver-Protocol.h"
#import "SPTDistractionControlObserver-Protocol.h"

@class NSSet, NSString, SPTAdRulesManager;
@protocol SPTAccessoryStateManager, SPTAdsBaseGlobalSettingsController, SPTDistractionControl;

@interface SPTAdsAutoDetectionController : NSObject <SPTAccessoryStateObserver, SPTDistractionControlObserver>
{
    id <SPTAdsBaseGlobalSettingsController> _adSettingsController;
    SPTAdRulesManager *_adRulesManager;
    id <SPTDistractionControl> _distractionControl;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    NSSet *_currentAccessories;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *currentAccessories; // @synthesize currentAccessories=_currentAccessories;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(retain, nonatomic) id <SPTDistractionControl> distractionControl; // @synthesize distractionControl=_distractionControl;
@property(retain, nonatomic) SPTAdRulesManager *adRulesManager; // @synthesize adRulesManager=_adRulesManager;
@property(retain, nonatomic) id <SPTAdsBaseGlobalSettingsController> adSettingsController; // @synthesize adSettingsController=_adSettingsController;
- (void)disableAdSlots:(_Bool)arg1 reason:(id)arg2;
- (void)distractionControlStateChanged:(_Bool)arg1;
- (void)accessoryStateManager:(id)arg1 accessoryDidDisconnect:(id)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidConnect:(id)arg2;
- (id)accessoriesContainCar:(id)arg1;
- (id)serializeAccessoryInfo:(id)arg1;
- (void)registerDeviceInfo:(id)arg1;
- (void)dealloc;
- (id)initWithAdSettingsController:(id)arg1 stateManager:(id)arg2 distractionControl:(id)arg3 rulesManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
