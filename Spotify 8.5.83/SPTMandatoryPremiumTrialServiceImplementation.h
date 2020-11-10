//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMandatoryPremiumTrialService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTFeatureFlaggingService, SPTMandatoryPremiumTrialTestManager;

@interface SPTMandatoryPremiumTrialServiceImplementation : NSObject <SPTMandatoryPremiumTrialService>
{
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTMandatoryPremiumTrialTestManager> _testManager;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTMandatoryPremiumTrialTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
- (id)provideInTrialSignal;
- (_Bool)isFeatureEnabled;
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

