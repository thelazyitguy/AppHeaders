//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOALSSerializable-Protocol.h"

@class GOALSDeviceStatus, GOALSTrackingSessionUpdate, NSString;

@interface GOALSUpdateTrackingSessionRequest : NSObject <GOALSSerializable>
{
    NSString *_applicationInstallId;
    NSString *_trackingSessionId;
    GOALSTrackingSessionUpdate *_updates;
    GOALSDeviceStatus *_deviceStatus;
}

@property(readonly, nonatomic) GOALSDeviceStatus *deviceStatus; // @synthesize deviceStatus=_deviceStatus;
@property(readonly, nonatomic) GOALSTrackingSessionUpdate *updates; // @synthesize updates=_updates;
@property(readonly, nonatomic) NSString *trackingSessionId; // @synthesize trackingSessionId=_trackingSessionId;
@property(readonly, nonatomic) NSString *applicationInstallId; // @synthesize applicationInstallId=_applicationInstallId;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithAppInstallId:(id)arg1 deviceStatus:(id)arg2 trackingSessionId:(id)arg3 updates:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
