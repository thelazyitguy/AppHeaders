//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTESyncControl-Protocol.h"
#import "GTEUpdatableResource-Protocol.h"
#import "TDLPlatformChangeListener-Protocol.h"

@class GTEDataReaderImpl, GTEUpdatesLock, NSDate, NSMutableArray, NSString;
@protocol GTEAssigneeDetailsResolvingRoomService, GTELoggers, GTESyncControlDelegate, GTETimeServiceProvider, TDLDataModel, TDLSyncControl;

@interface GTETDLSyncControl : NSObject <GTEUpdatableResource, GTESyncControl, TDLPlatformChangeListener>
{
    NSObject<GTETimeServiceProvider> *_appContext;
    id <TDLDataModel> _dataModel;
    id <TDLSyncControl> _syncControl;
    id <GTEAssigneeDetailsResolvingRoomService> _assigneeDetailsResolvingRoomService;
    GTEDataReaderImpl *_dataReaderWrapper;
    id <GTELoggers> _loggers;
    GTEUpdatesLock *_lock;
    NSMutableArray *_undeliveredResponses;
    long long _requestCount;
    NSDate *_ongoingSyncStartInstant;
    _Bool _syncInFlight;
    id <GTESyncControlDelegate> _syncDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool syncInFlight; // @synthesize syncInFlight=_syncInFlight;
@property(nonatomic) __weak id <GTESyncControlDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void)endRecordingSyncDurationAndLogWithSuccess:(_Bool)arg1;
- (void)startRecordingSyncDuration;
- (id)mostMeaningfulResponseFromArray:(id)arg1;
- (void)reportMostMeaningfulResponse;
- (id)analyzeSyncResponse:(id)arg1;
- (void)syncFinishedWithResponse:(id)arg1;
- (void)tdlSyncFinishedWithResponse:(id)arg1;
- (void)performTDLSyncRequestWithOptions:(id)arg1;
- (void)performSyncRequestWithOptions:(id)arg1;
- (void)performSyncRequestToFetchAllCompletedTasksOfSelectedList;
- (void)performSyncRequestWithTickleVersion:(id)arg1;
- (void)performSyncRequestWithReason:(long long)arg1;
- (void)resumeUpdates;
- (void)pauseUpdates;
- (void)unlockUpdatesWithKeyPrefix:(id)arg1;
- (void)unlockUpdatesWithKey:(id)arg1;
- (void)lockUpdatesWithKey:(id)arg1;
- (_Bool)isLockedWithKeyPrefix:(id)arg1;
- (_Bool)isLocked;
- (void)onUpdateWithTDLPlatformChangeListener_ChangeMetadata:(id)arg1;
- (_Bool)hasPendingMutations;
- (void)syncWithTickleVersion:(id)arg1 syncPolicy:(long long)arg2;
- (void)syncWithReason:(long long)arg1 fetchPolicy:(long long)arg2;
- (id)initWithAppContext:(id)arg1 dataModel:(id)arg2 syncControl:(id)arg3 assigneeDetailsResolvingRoomService:(id)arg4 dataReaderWrapper:(id)arg5 loggers:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
