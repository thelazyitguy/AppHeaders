//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTIActions-Protocol.h"

@class JBTIActionsHelper, NSString;
@protocol ComGoogleAppsBigtopDataSettingsInternalapiSettingsClientInternal, ComGoogleAppsBigtopSyncClientImplSettingsApiClassicGmailInboxConfigSettingsConverter, ComGoogleAppsXplatDaggerAsyncProvider, ComGoogleCommonTimeClock, JBTHelpPageHelper, JBTIFormattedTextParser, JBTISmartMailCommandApplier, JBTISmartMailTranslationHelper, JBTLimitedNotificationsHelper, JBTOpenGmailHelper, JBTOpenURLHelper, JBTOptIntoChatActionHandler, JBTSettings;

@interface JBTIActionsImpl : NSObject <JBTIActions>
{
    id <ComGoogleCommonTimeClock> clock_;
    id <JBTISmartMailCommandApplier> commandApplier_;
    id <JBTLimitedNotificationsHelper> limitedNotificationsHelper_;
    id <JBTHelpPageHelper> helpPageHelper_;
    id <JBTIFormattedTextParser> parser_;
    id <JBTISmartMailTranslationHelper> translationHelper_;
    id <ComGoogleAppsBigtopDataSettingsInternalapiSettingsClientInternal> settingsClientInternal_;
    JBTIActionsHelper *actionsHelper_;
    id <JBTOpenGmailHelper> openGmailHelper_;
    id <JBTOpenURLHelper> openUrlHelper_;
    id <JBTOptIntoChatActionHandler> optIntoChatActionHandler_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> clustersProvider_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> filtersProvider_;
    id <ComGoogleAppsBigtopSyncClientImplSettingsApiClassicGmailInboxConfigSettingsConverter> inboxConfigSettingsConverter_;
    id <JBTSettings> settings_;
}

- (void)dealloc;
- (id)getActionFromWorkflowButtonProtoWithComGoogleAppsBigtopServicesWorkflowassistWorkflowButton:(id)arg1 withJBTId:(id)arg2 withNSString:(id)arg3 withComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor:(id)arg4 withComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory:(id)arg5;
- (id)createSupportedActionsWithJavaUtilList:(id)arg1 withJBTIActionsFilter:(id)arg2 withJBTSmartMailComponentContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
