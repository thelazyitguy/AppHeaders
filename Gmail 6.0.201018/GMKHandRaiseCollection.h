//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMKCollection.h"

#import "GMKHandRaiseCollection-Protocol.h"

@class GHMMeetingHandRaiseService, NSDictionary, NSMutableDictionary, NSString;

@interface GMKHandRaiseCollection : GMKCollection <GMKHandRaiseCollection>
{
    GHMMeetingHandRaiseService *_handRaiseService;
    NSMutableDictionary *_deviceIDByResourceName;
    NSMutableDictionary *_handRaiseByDeviceID;
    NSString *_meetingSpaceID;
}

- (void).cxx_destruct;
- (void)removeHandRaiseFromCollection:(id)arg1;
- (void)addHandRaiseToCollection:(id)arg1;
- (void)processFullHandRaiseCollection:(id)arg1;
- (void)processDeletedHandRaises:(id)arg1;
- (id)processModifiedHandRaises:(id)arg1;
- (void)processSyncResponse:(id)arg1;
- (void)refresh;
- (void)handlePushNotification:(id)arg1;
- (long long)getVersionNumberForPushNotification:(id)arg1;
- (void)willStartSyncingWithMeetingSpaceID:(id)arg1;
- (id)removeHandRaiseForDeviceID:(id)arg1;
- (id)createHandRaise;
@property(readonly, nonatomic) NSDictionary *resources;
- (id)initWithGRPCClient:(id)arg1 impressionReporter:(id)arg2 syncDelegate:(id)arg3 meetingInfo:(id)arg4 tokenManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
