//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSArray, NSError, NSString, SPTDrivingModeHomeFeedDataLoader, SPTObserverManager;
@protocol SPTOfflineModeState;

@interface SPTDrivingModeHomeFeedList : NSObject <SPTOfflineModeStateObserver>
{
    NSError *_error;
    SPTDrivingModeHomeFeedDataLoader *_dataLoader;
    NSArray *_loadedShelves;
    SPTObserverManager *_observerManager;
    id <SPTOfflineModeState> _offlineModeState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(copy, nonatomic) NSArray *loadedShelves; // @synthesize loadedShelves=_loadedShelves;
@property(readonly, nonatomic) SPTDrivingModeHomeFeedDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)createErrorForOfflineState:(_Bool)arg1;
- (id)splitShelves:(id)arg1;
- (void)triggerReloadIfEmptyOrFailed;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (id)provideShelves;
- (id)initWithDataLoader:(id)arg1 offlineModeState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

