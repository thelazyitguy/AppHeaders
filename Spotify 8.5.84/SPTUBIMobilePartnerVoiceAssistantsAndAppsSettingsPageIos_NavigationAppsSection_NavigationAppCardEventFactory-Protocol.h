//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIos_NavigationAppsSection_NavigationAppCard_ConnectButtonEventFactory, SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIos_NavigationAppsSection_NavigationAppCard_ConnectedButtonEventFactory, SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIos_NavigationAppsSection_NavigationAppCard_InstallAppButtonEventFactory;

@protocol SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIos_NavigationAppsSection_NavigationAppCardEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIos_NavigationAppsSection_NavigationAppCard_ConnectedButtonEventFactory>)connectedButtonFactory;
- (id <SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIos_NavigationAppsSection_NavigationAppCard_ConnectButtonEventFactory>)connectButtonFactory;
- (id <SPTUBIMobilePartnerVoiceAssistantsAndAppsSettingsPageIos_NavigationAppsSection_NavigationAppCard_InstallAppButtonEventFactory>)installAppButtonFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end
