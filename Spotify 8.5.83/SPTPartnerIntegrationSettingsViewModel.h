//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPTPartnerFeatureProperties, SPTPartnerIntegrationAuthorizer, SPTPartnerIntegrationStateLoader, SPTPartnerTestManagerImplementation;
@protocol SPTPartnerIntegrationRegistry, SPTPartnerIntegrationSettingsViewModelDelegate, SPTUBILogger, SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIosEventFactory;

@interface SPTPartnerIntegrationSettingsViewModel : NSObject
{
    id <SPTPartnerIntegrationSettingsViewModelDelegate> _delegate;
    NSArray *_sections;
    SPTPartnerIntegrationStateLoader *_stateLoader;
    SPTPartnerIntegrationAuthorizer *_authorizer;
    SPTPartnerTestManagerImplementation *_testManager;
    id <SPTPartnerIntegrationRegistry> _integrationRegistry;
    SPTPartnerFeatureProperties *_remoteProperties;
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIosEventFactory> _eventFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIosEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) SPTPartnerFeatureProperties *remoteProperties; // @synthesize remoteProperties=_remoteProperties;
@property(readonly, nonatomic) id <SPTPartnerIntegrationRegistry> integrationRegistry; // @synthesize integrationRegistry=_integrationRegistry;
@property(readonly, nonatomic) SPTPartnerTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTPartnerIntegrationAuthorizer *authorizer; // @synthesize authorizer=_authorizer;
@property(readonly, nonatomic) SPTPartnerIntegrationStateLoader *stateLoader; // @synthesize stateLoader=_stateLoader;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <SPTPartnerIntegrationSettingsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *settingsTitle;
- (_Bool)isOffline;
- (id)sectionsFromCategories:(id)arg1;
- (void)loadData;
- (id)initWithIntegrationStateLoader:(id)arg1 authorizer:(id)arg2 testManager:(id)arg3 remoteConfigurationProperties:(id)arg4 integrationRegistry:(id)arg5 ubiLogger:(id)arg6;

@end
