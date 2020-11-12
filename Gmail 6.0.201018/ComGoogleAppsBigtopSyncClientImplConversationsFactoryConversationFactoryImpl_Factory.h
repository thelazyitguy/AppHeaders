//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplConversationsFactoryConversationFactoryImpl_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> conversationsProvider_;
    id <JavaxInjectProvider> enableStandaloneTasksAndLocationProvider_;
    id <JavaxInjectProvider> readReceiptsEnabledProvider_;
    id <JavaxInjectProvider> transactionFactoryProvider_;
    id <JavaxInjectProvider> userInfoProvider_;
    id <JavaxInjectProvider> taskFactoryProvider_;
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> translationHelperProvider_;
    id <JavaxInjectProvider> multiLoginUrlRewriterProvider_;
    id <JavaxInjectProvider> sapiSpanFactoryProvider_;
    id <JavaxInjectProvider> smartMailInfoFactoryProvider_;
    id <JavaxInjectProvider> smartMailCommandApplierProvider_;
    id <JavaxInjectProvider> attachmentFactoryProvider_;
    id <JavaxInjectProvider> lastSnoozeTrackerProvider_;
    id <JavaxInjectProvider> snoozeConfigFactoryProvider_;
    id <JavaxInjectProvider> snoozeCommandResultFactoryProvider_;
    id <JavaxInjectProvider> snoozeTimeFactoryProvider_;
    id <JavaxInjectProvider> dueDateFactoryProvider_;
    id <JavaxInjectProvider> isDelegationModeProvider_;
    id <JavaxInjectProvider> settingsClientProvider_;
    id <JavaxInjectProvider> userActionRecorderProvider_;
    id <JavaxInjectProvider> threadStateManagerFactoryProvider_;
    id <JavaxInjectProvider> liveListsManagerProvider_;
    id <JavaxInjectProvider> rankRationaleFactoryProvider_;
    id <JavaxInjectProvider> sapiMainExecutorProvider_;
    id <JavaxInjectProvider> metricsProvider_;
    id <JavaxInjectProvider> caribouUrlsProvider_;
    id <JavaxInjectProvider> snoozeOnGmailEnabledProvider_;
    id <JavaxInjectProvider> calendarEventDataFactoryProvider_;
    id <JavaxInjectProvider> calendarEventDataServiceProvider_;
    id <JavaxInjectProvider> visibleLabelFactoryProvider_;
    id <JavaxInjectProvider> starStateCalculatorProvider_;
    id <JavaxInjectProvider> counterManagerProvider_;
    id <JavaxInjectProvider> countersApiProvider_;
    id <JavaxInjectProvider> profilePicturesProvider_;
    id <JavaxInjectProvider> messageBasedUiEnabledProvider_;
    id <JavaxInjectProvider> sendingMonitorProvider_;
    id <JavaxInjectProvider> subjectPrefixHelperProvider_;
    id <JavaxInjectProvider> topPromoEventReportingProvider_;
    id <JavaxInjectProvider> isImapAccountProvider_;
    id <JavaxInjectProvider> summaryThreadDataFactoryProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
