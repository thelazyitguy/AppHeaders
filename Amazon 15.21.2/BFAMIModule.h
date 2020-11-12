//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIModule-Protocol.h"

@class BFChatbotService, BFIntroPageManager, NSString;
@protocol AMIAppNavigationService, AMIIPhoneAppManagerBridge, AMILocalization, AMIWeblabBridgeService;

@interface BFAMIModule : NSObject <AMIModule>
{
    id <AMIAppNavigationService> _appNavigationService;
    id <AMIIPhoneAppManagerBridge> _phoneAppManagerBridge;
    id <AMILocalization> _localizationService;
    id <AMIWeblabBridgeService> _weblabBridge;
    BFIntroPageManager *_introPageManager;
    BFChatbotService *_chatbotService;
}

@property(retain) BFChatbotService *chatbotService; // @synthesize chatbotService=_chatbotService;
@property(retain) BFIntroPageManager *introPageManager; // @synthesize introPageManager=_introPageManager;
@property(retain) id <AMIWeblabBridgeService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
@property(retain) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
@property(retain) id <AMIIPhoneAppManagerBridge> phoneAppManagerBridge; // @synthesize phoneAppManagerBridge=_phoneAppManagerBridge;
@property(retain) id <AMIAppNavigationService> appNavigationService; // @synthesize appNavigationService=_appNavigationService;
- (void).cxx_destruct;
- (void)logUsageTimeMetric;
- (void)setMetricStartTime;
- (void)resetShowRegistration;
- (void)showBetaFeedbackRegistrationIfApplicable;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (void)startServiceCall;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
