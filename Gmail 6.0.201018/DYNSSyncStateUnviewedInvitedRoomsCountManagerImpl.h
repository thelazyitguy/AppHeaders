//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatObserveObserver-Protocol.h"
#import "DYNSSyncStateUnviewedInvitedRoomsCountManager-Protocol.h"

@class JavaUtilConcurrentAtomicAtomicInteger, NSString;
@protocol ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveSettable, DYNSNetworkApiRequestManager, JavaUtilConcurrentScheduledExecutorService;

@interface DYNSSyncStateUnviewedInvitedRoomsCountManagerImpl : NSObject <DYNSSyncStateUnviewedInvitedRoomsCountManager, ComGoogleAppsXplatObserveObserver>
{
    JavaUtilConcurrentAtomicAtomicInteger *unviewedInvitedRoomsCount_;
    id <ComGoogleAppsXplatObserveObservable> worldUpdatedEventObservable_;
    id <DYNSNetworkApiRequestManager> requestManager_;
    id <JavaUtilConcurrentScheduledExecutorService> executor_;
    id <ComGoogleAppsXplatObserveSettable> unviewedInvitedRoomsCountUpdatedSettable_;
    id observerAddedLock_;
    _Bool observerAdded_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getUnviewedInvitedRoomsCount;
- (void)handlesUnviewedInvitedRoomsCountUpdateWithInt:(int)arg1;
- (void)init__;
- (id)onChangeWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
