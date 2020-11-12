//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMKCollection.h"

#import "GMKDeviceCollection-Protocol.h"

@class GHMMeetingDeviceService, GMKGRPCClient, GMKTokenManager, NSArray, NSMutableDictionary, NSString, VideoCallOptions;

@interface GMKDeviceCollection : GMKCollection <GMKDeviceCollection>
{
    GHMMeetingDeviceService *_deviceService;
    NSString *_meetingSpaceID;
    GMKGRPCClient *_grpcClient;
    GMKTokenManager *_tokenManager;
    VideoCallOptions *_videoCallOptions;
    NSString *_hangoutID;
    NSMutableDictionary *_resources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *resources; // @synthesize resources=_resources;
@property(readonly, nonatomic) NSString *hangoutID; // @synthesize hangoutID=_hangoutID;
- (void)processSyncResponse:(id)arg1;
- (void)refreshDevices;
- (void)processDevices:(id)arg1;
- (void)processDevicesWithResponse:(id)arg1 error:(id)arg2;
- (void)updateStateAndPublishEventsWithAddedDevices:(id)arg1 modifiedDevices:(id)arg2 deletedDevices:(id)arg3;
- (void)extractResponseHeaders:(id)arg1;
- (void)refresh;
- (void)handlePushNotification:(id)arg1;
- (long long)getVersionNumberForPushNotification:(id)arg1;
- (void)willStartSyncingWithMeetingSpaceID:(id)arg1;
- (void)update:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)list:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *joinedDevices;
- (void)createForMeetingSpaceID:(id)arg1 cloudMediaSessionID:(id)arg2 joinState:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithGRPCClient:(id)arg1 impressionReporter:(id)arg2 syncDelegate:(id)arg3 meetingInfo:(id)arg4 tokenManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
