//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNChimeNotificationRegistrationService-Protocol.h"

@class CHMConfiguration, CHMNotificationsService, NSString;

@interface DYNChimeNotificationRegistrationServiceImpl : NSObject <DYNChimeNotificationRegistrationService>
{
    CHMConfiguration *_configuration;
    CHMNotificationsService *_notificationService;
}

- (void).cxx_destruct;
- (_Bool)isNotificationClientIDSameAsChimeConfiguration:(id)arg1;
- (id)updateThreadReadStateForNotification:(id)arg1;
- (void)dismissReadNotificationsIfNeededForNotification:(id)arg1;
- (void)setLazyRegistrationInterval:(double)arg1;
- (id)bulkRegisterForNotificationsForAccounts:(id)arg1 deviceToken:(id)arg2;
- (id)initWithDeps:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
