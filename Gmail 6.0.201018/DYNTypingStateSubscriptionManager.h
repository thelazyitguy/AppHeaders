//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatObserveObserver-Protocol.h"

@class NSString;
@protocol DYNSApiSubscriptionsTypingStateSubscription, DYNTypingStateSubscriptionHandler;

@interface DYNTypingStateSubscriptionManager : NSObject <ComGoogleAppsXplatObserveObserver>
{
    id <DYNSApiSubscriptionsTypingStateSubscription> _subscription;
    id <DYNTypingStateSubscriptionHandler> _handler;
}

- (void).cxx_destruct;
- (id)onChangeWithId:(id)arg1;
- (void)stopSubscription;
- (void)startSubscriptionWithGroupIds:(id)arg1 handler:(id)arg2;
- (id)initWithSubscription:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

