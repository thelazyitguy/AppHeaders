//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIModule-Protocol.h"

@class NSString;
@protocol AMILocalization, ASKWeblabService;

@interface PackardWeblabModule : NSObject <AMIModule>
{
    id <AMILocalization> _localizationService;
    id <ASKWeblabService> _weblabBridge;
}

+ (id)sharedModule;
@property(nonatomic) __weak id <ASKWeblabService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
@property(retain, nonatomic) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
- (void).cxx_destruct;
- (_Bool)weblabIsActiveAndTrigger:(id)arg1;
- (_Bool)weblabIsActive:(id)arg1;
- (_Bool)permissionServiceMigrationIsActiveAndTrigger;
- (_Bool)permissionServiceMigrationIsActive;
- (_Bool)gpsLocationDetectionIsActiveAndTrigger;
- (_Bool)gpsLocationDetectionIsActive;
- (_Bool)doneButtonWeblabIsActiveAndTrigger;
- (_Bool)speedWeblabIsActive;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
