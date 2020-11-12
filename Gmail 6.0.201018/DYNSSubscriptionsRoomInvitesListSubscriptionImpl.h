//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNRoomInvitesListSubscription-Protocol.h"
#import "DYNSApiSubscriptionsRoomInvitesListSubscription-Protocol.h"

@class ComGoogleAppsXplatSubscribeSubscription, JavaUtilOptional, NSString;
@protocol JavaUtilConcurrentExecutor;

@interface DYNSSubscriptionsRoomInvitesListSubscriptionImpl : NSObject <DYNRoomInvitesListSubscription, DYNSApiSubscriptionsRoomInvitesListSubscription>
{
    id <JavaUtilConcurrentExecutor> dataExecutor_;
    id <JavaUtilConcurrentExecutor> mainExecutor_;
    ComGoogleAppsXplatSubscribeSubscription *subscription_;
    JavaUtilOptional *snapshotObserver_;
}

+ (void)initialize;
- (void)dealloc;
- (void)stop;
- (void)changeConfigurationWithDYNSUIModelsRoomInvitesListConfig:(id)arg1;
- (void)startWithComGoogleAppsXplatObserveObserver:(id)arg1;
- (id)roomInvitesListConfigForCommonInviteCategory:(id)arg1;
- (void)changeRoomInvitesListConfigurationWithInviteCategory:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
