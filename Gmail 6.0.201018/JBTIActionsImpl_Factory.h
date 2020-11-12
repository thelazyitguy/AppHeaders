//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface JBTIActionsImpl_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> commandApplierProvider_;
    id <JavaxInjectProvider> limitedNotificationsHelperProvider_;
    id <JavaxInjectProvider> helpPageHelperProvider_;
    id <JavaxInjectProvider> parserProvider_;
    id <JavaxInjectProvider> translationHelperProvider_;
    id <JavaxInjectProvider> settingsClientInternalProvider_;
    id <JavaxInjectProvider> actionsHelperProvider_;
    id <JavaxInjectProvider> openGmailHelperProvider_;
    id <JavaxInjectProvider> openUrlHelperProvider_;
    id <JavaxInjectProvider> optIntoChatActionHandlerProvider_;
    id <JavaxInjectProvider> clustersProvider_;
    id <JavaxInjectProvider> filtersProvider_;
    id <JavaxInjectProvider> inboxConfigSettingsConverterProvider_;
    id <JavaxInjectProvider> settingsProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
