//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GoogleCast/GPBMessage.h>

@class GHCCDeviceState, NSMutableArray, NSString;

@interface GHCCRelaycastDiscoveredDevice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cloudDeviceId; // @dynamic cloudDeviceId;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) GHCCDeviceState *deviceState; // @dynamic deviceState;
@property(nonatomic) _Bool hasCloudDeviceId; // @dynamic hasCloudDeviceId;
@property(nonatomic) _Bool hasDeviceName; // @dynamic hasDeviceName;
@property(nonatomic) _Bool hasDeviceState; // @dynamic hasDeviceState;
@property(nonatomic) _Bool hasRelaycastDisabled; // @dynamic hasRelaycastDisabled;
@property(nonatomic) _Bool hasStructureId; // @dynamic hasStructureId;
@property(nonatomic) _Bool hasStructureName; // @dynamic hasStructureName;
@property(nonatomic) _Bool relaycastDisabled; // @dynamic relaycastDisabled;
@property(copy, nonatomic) NSString *structureId; // @dynamic structureId;
@property(copy, nonatomic) NSString *structureName; // @dynamic structureName;
@property(retain, nonatomic) NSMutableArray *supportedAppIdsArray; // @dynamic supportedAppIdsArray;
@property(readonly, nonatomic) unsigned long long supportedAppIdsArray_Count; // @dynamic supportedAppIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *unsupportedAppIdsArray; // @dynamic unsupportedAppIdsArray;
@property(readonly, nonatomic) unsigned long long unsupportedAppIdsArray_Count; // @dynamic unsupportedAppIdsArray_Count;

@end
