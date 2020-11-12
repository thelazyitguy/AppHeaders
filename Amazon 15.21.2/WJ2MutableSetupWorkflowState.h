//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSError, NSMutableDictionary, WJ2AvailableNetworksCollection, WJ2BarcodeDetails, WJ2ConnectedDevice, WJ2DSSDiscoveredProvisionableDevice, WJ2DSSProvisionerInfoHelper, WJ2DeviceDetails, WJ2DeviceSetupServiceReportEvent, WJ2DiscoveredDevice, WJ2Error, WJ2ProgressStatesWrapper, WJ2WifiConfiguration, WJ2WifiConfigurationCollection, WJ2WifiConnectionDetails;
@protocol WJ2SetupWorkflowStateDelegate;

@interface WJ2MutableSetupWorkflowState : NSObject
{
    WJ2ProgressStatesWrapper *_state;
    long long _step;
    NSMutableDictionary *_unorderedDevices;
    NSArray *_discoveredDevices;
    WJ2DiscoveredDevice *_selectedDiscoveredDevice;
    WJ2ConnectedDevice *_connectedDevice;
    WJ2DeviceDetails *_deviceDetails;
    WJ2WifiConfigurationCollection *_lockerNetworks;
    WJ2AvailableNetworksCollection *_availableNetworks;
    WJ2BarcodeDetails *_barcode;
    NSData *_targetProductId;
    NSData *_targetDeviceId;
    NSError *_workflowError;
    WJ2WifiConnectionDetails *_wifiConnectionDetails;
    WJ2DSSDiscoveredProvisionableDevice *_discoveredProvisionableDevice;
    WJ2DeviceSetupServiceReportEvent *_reportEvent;
    WJ2DSSProvisionerInfoHelper *_dssProvisionerInfoHelper;
    long long _keyExchangeMethod;
    WJ2WifiConfiguration *_wifiConfiguration;
    WJ2Error *_WJ2Error;
    id <WJ2SetupWorkflowStateDelegate> _delegate;
}

@property(retain, nonatomic) id <WJ2SetupWorkflowStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) WJ2Error *WJ2Error; // @synthesize WJ2Error=_WJ2Error;
@property(retain) WJ2WifiConfiguration *wifiConfiguration; // @synthesize wifiConfiguration=_wifiConfiguration;
@property(nonatomic) long long keyExchangeMethod; // @synthesize keyExchangeMethod=_keyExchangeMethod;
@property(retain, nonatomic) WJ2DSSProvisionerInfoHelper *dssProvisionerInfoHelper; // @synthesize dssProvisionerInfoHelper=_dssProvisionerInfoHelper;
@property(retain, nonatomic) WJ2DeviceSetupServiceReportEvent *reportEvent; // @synthesize reportEvent=_reportEvent;
@property(retain, nonatomic) WJ2DSSDiscoveredProvisionableDevice *discoveredProvisionableDevice; // @synthesize discoveredProvisionableDevice=_discoveredProvisionableDevice;
@property(retain, nonatomic) WJ2WifiConnectionDetails *wifiConnectionDetails; // @synthesize wifiConnectionDetails=_wifiConnectionDetails;
@property(retain, nonatomic) NSError *workflowError; // @synthesize workflowError=_workflowError;
@property(retain, nonatomic) NSData *targetDeviceId; // @synthesize targetDeviceId=_targetDeviceId;
@property(retain, nonatomic) NSData *targetProductId; // @synthesize targetProductId=_targetProductId;
@property(retain, nonatomic) WJ2BarcodeDetails *barcode; // @synthesize barcode=_barcode;
@property(retain, nonatomic) WJ2AvailableNetworksCollection *availableNetworks; // @synthesize availableNetworks=_availableNetworks;
@property(retain, nonatomic) WJ2WifiConfigurationCollection *lockerNetworks; // @synthesize lockerNetworks=_lockerNetworks;
@property(retain, nonatomic) WJ2DeviceDetails *deviceDetails; // @synthesize deviceDetails=_deviceDetails;
@property(retain, nonatomic) WJ2ConnectedDevice *connectedDevice; // @synthesize connectedDevice=_connectedDevice;
@property(retain, nonatomic) WJ2DiscoveredDevice *selectedDiscoveredDevice; // @synthesize selectedDiscoveredDevice=_selectedDiscoveredDevice;
@property(retain, nonatomic) NSArray *discoveredDevices; // @synthesize discoveredDevices=_discoveredDevices;
@property(retain, nonatomic) NSMutableDictionary *unorderedDevices; // @synthesize unorderedDevices=_unorderedDevices;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(retain, nonatomic) WJ2ProgressStatesWrapper *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)snapshot;
- (void)onTargetDeviceSet:(id)arg1;
- (void)onTargetProductSet:(id)arg1;
- (void)onTargetDeviceSet:(id)arg1 andTargetDeviceId:(id)arg2;
- (void)onBarcodeSet:(id)arg1;
- (void)onAvailableWifiNetworks:(id)arg1 andDeviceDetails:(id)arg2;
- (void)onDiscoveredDevice;
- (void)onTerminateWithError:(id)arg1;
- (void)onStartState:(long long)arg1;
- (void)onUpdateStateWithError:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
