//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplTaskssupportAsyncTasksSupportComponentImpl_BindingsModule_ProvideLifecycleFactory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> sapiLifecycleProvider_;
    id <JavaxInjectProvider> snoozeOnGmailEnabledProvider_;
    id <JavaxInjectProvider> sapiMainExecutorProvider_;
    id <JavaxInjectProvider> postCriticalStartEventProvider_;
    id <JavaxInjectProvider> nonCriticalStartEventProvider_;
    id <JavaxInjectProvider> shutdownEventProvider_;
    id <JavaxInjectProvider> isActiveAppStartupModeProvider_;
    id <JavaxInjectProvider> localReminderBumperProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
