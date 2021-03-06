//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSApiSubscriptionsWorldSubscription-Protocol.h"

@class ComGoogleAppsXplatSubscribeSubscription, NSString;
@protocol JavaUtilConcurrentExecutor;

@interface DYNSSubscriptionsWorldSubscriptionImpl : NSObject <DYNSApiSubscriptionsWorldSubscription>
{
    id <JavaUtilConcurrentExecutor> dataExecutor_;
    id <JavaUtilConcurrentExecutor> mainExecutor_;
    ComGoogleAppsXplatSubscribeSubscription *worldSubscription_;
}

+ (void)initialize;
- (void)dealloc;
- (void)changeConfigurationWithDYNSUIModelsWorldConfig:(id)arg1;
- (void)removeObserverWithComGoogleAppsXplatObserveObserver:(id)arg1;
- (void)addObserverWithComGoogleAppsXplatObserveObserver:(id)arg1;
- (void)stop;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

