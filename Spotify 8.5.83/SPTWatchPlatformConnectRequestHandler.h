//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityRequestHandler-Protocol.h"

@class NSString, SPTWatchConnectivityDataLoader;
@protocol SPTExternalIntegrationPlaybackController, SPTGaiaConnectAPI, SPTGaiaWirelessRoutesAPI;

@interface SPTWatchPlatformConnectRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    id <SPTGaiaConnectAPI> _connectManager;
    id <SPTGaiaWirelessRoutesAPI> _wirelessRoutesManager;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SPTGaiaWirelessRoutesAPI> wirelessRoutesManager; // @synthesize wirelessRoutesManager=_wirelessRoutesManager;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)handleActivateDeviceRequest:(id)arg1;
- (void)handleDevicesRequest:(id)arg1;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)sendResponseForRequest:(id)arg1 body:(id)arg2 error:(id)arg3;
- (id)initWithDataLoader:(id)arg1 connectManager:(id)arg2 wirelessRoutesManager:(id)arg3 playbackController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

