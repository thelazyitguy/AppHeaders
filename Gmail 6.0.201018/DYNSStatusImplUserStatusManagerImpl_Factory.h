//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface DYNSStatusImplUserStatusManagerImpl_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> accountUserProvider_;
    id <JavaxInjectProvider> customStatusConverterProvider_;
    id <JavaxInjectProvider> dndStatusConverterProvider_;
    id <JavaxInjectProvider> userStatusStorageControllerProvider_;
    id <JavaxInjectProvider> dynamiteClockProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> jobLauncherProvider_;
    id <JavaxInjectProvider> requestManagerProvider_;
    id <JavaxInjectProvider> uiUserStatusConverterProvider_;
    id <JavaxInjectProvider> userStatusFilterProvider_;
    id <JavaxInjectProvider> userStatusUpdatedEventSettableProvider_;
    id <JavaxInjectProvider> userStatusUpdateSchedulerProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
