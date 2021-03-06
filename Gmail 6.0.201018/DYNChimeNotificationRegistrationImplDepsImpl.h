//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNChimeNotificationRegistrationImplDeps-Protocol.h"

@class GOOProvider, NSString;
@protocol DYNNotificationManagerService, SSOService;

@interface DYNChimeNotificationRegistrationImplDepsImpl : NSObject <DYNChimeNotificationRegistrationImplDeps>
{
    GOOProvider *_notificationManagerServiceProvider;
    GOOProvider *_SSOServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider; // @synthesize SSOServiceProvider=_SSOServiceProvider;
@property(readonly, nonatomic) GOOProvider *notificationManagerServiceProvider; // @synthesize notificationManagerServiceProvider=_notificationManagerServiceProvider;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) id <DYNNotificationManagerService> notificationManagerService;
- (id)initWithNotificationManagerServiceProvider:(id)arg1 SSOServiceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

