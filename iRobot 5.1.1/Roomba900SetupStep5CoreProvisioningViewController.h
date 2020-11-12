//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "CMRAssetSetupUIServiceDataCallback-Protocol.h"
#import "Roomba900ErrorHandlingViewControllerDelegate-Protocol.h"
#import "WiFiSettingsEditViewControllerDelegate-Protocol.h"
#import "WrongWifiPasswordDelegate-Protocol.h"

@class AccessPointHelper, AssetSetupUIServiceSubscription, NSString, NSTimer, NetworkConnectInfo, WiFiProvisioningStatusViewController;

@interface Roomba900SetupStep5CoreProvisioningViewController : BaseAssetViewController <WiFiSettingsEditViewControllerDelegate, CMRAssetSetupUIServiceDataCallback, Roomba900ErrorHandlingViewControllerDelegate, WrongWifiPasswordDelegate>
{
    _Bool _isShowingWrongWifiAlert;
    _Bool _isShowingConfirmWifiAlert;
    _Bool _isProvisioningFinished;
    _Bool _isSSIDQueryTimeoutReached;
    _Bool _removeFromStackOnDisappear;
    NetworkConnectInfo *_networkConnectInfo;
    WiFiProvisioningStatusViewController *_statusViewController;
    NSString *_provisioningFinishedNewAssetName;
    NSTimer *_ssidQueryTimer;
    NSString *_lastSSIDSentToUIService;
    NSString *_lastStatusText;
    NSString *_lastSubStatusText;
    AccessPointHelper *_accessPointHelper;
    AssetSetupUIServiceSubscription *_assetSetupUIServiceSubscription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AssetSetupUIServiceSubscription *assetSetupUIServiceSubscription; // @synthesize assetSetupUIServiceSubscription=_assetSetupUIServiceSubscription;
@property(retain, nonatomic) AccessPointHelper *accessPointHelper; // @synthesize accessPointHelper=_accessPointHelper;
@property(retain, nonatomic) NSString *lastSubStatusText; // @synthesize lastSubStatusText=_lastSubStatusText;
@property(retain, nonatomic) NSString *lastStatusText; // @synthesize lastStatusText=_lastStatusText;
@property(retain, nonatomic) NSString *lastSSIDSentToUIService; // @synthesize lastSSIDSentToUIService=_lastSSIDSentToUIService;
@property(nonatomic) _Bool removeFromStackOnDisappear; // @synthesize removeFromStackOnDisappear=_removeFromStackOnDisappear;
@property(retain, nonatomic) NSTimer *ssidQueryTimer; // @synthesize ssidQueryTimer=_ssidQueryTimer;
@property(nonatomic) _Bool isSSIDQueryTimeoutReached; // @synthesize isSSIDQueryTimeoutReached=_isSSIDQueryTimeoutReached;
@property(retain, nonatomic) NSString *provisioningFinishedNewAssetName; // @synthesize provisioningFinishedNewAssetName=_provisioningFinishedNewAssetName;
@property(nonatomic) _Bool isProvisioningFinished; // @synthesize isProvisioningFinished=_isProvisioningFinished;
@property(nonatomic) _Bool isShowingConfirmWifiAlert; // @synthesize isShowingConfirmWifiAlert=_isShowingConfirmWifiAlert;
@property(nonatomic) _Bool isShowingWrongWifiAlert; // @synthesize isShowingWrongWifiAlert=_isShowingWrongWifiAlert;
@property(nonatomic) __weak WiFiProvisioningStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) NetworkConnectInfo *networkConnectInfo; // @synthesize networkConnectInfo=_networkConnectInfo;
- (void)showMACAddressForFilterMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureAccessibility;
- (id)assetLocalizedGenericName;
- (void)onAssetSetupUIServiceDataChanged:(id)arg1;
- (void)onPasswordUpdateCancelled;
- (void)onPasswordUpdated;
- (void)sssidQueryTimeoutReached;
- (void)checkWiFiConnection:(_Bool)arg1;
- (void)sendSSIDToSetupUIService:(id)arg1;
- (_Bool)isSSIDNeedToBeSent:(id)arg1;
- (void)startCheckingWiFiConnection;
- (void)reconnectedToIncorrectHomeAccessPoint:(id)arg1 withSkuType:(long long)arg2;
- (void)connectToSoftAp:(id)arg1 withSkuType:(long long)arg2;
- (void)finishProvisioningWithSavedAssetName;
- (void)showConfirmationCurrentSSIDPopUpIfNeededFor:(id)arg1;
- (void)connectToHomeAp:(id)arg1;
- (void)showWifiAlertViewFor:(id)arg1;
- (void)dismissErrorViewController;
- (void)presentIrrecoverableProvisioningFailedAlertWithMessage:(id)arg1;
- (void)presentRecoverableProvisioningFailedAlertWithMessage:(id)arg1;
- (void)processProvisioningError:(id)arg1 withCurrentSSID:(id)arg2 withHomeSSID:(id)arg3 andSkuType:(long long)arg4;
- (void)finishProvisioningWithNewAssetName:(id)arg1;
- (void)transitionToProvisioningType:(long long)arg1 withAssetName:(id)arg2 andSkuType:(long long)arg3;
- (void)onProvisioningAssetInfoUpdated:(id)arg1;
- (void)updateViewWithProvisioningStatus:(long long)arg1 withNetworkName:(id)arg2 andIsWifiV2Provisioning:(_Bool)arg3 assetName:(id)arg4;
- (void)performInitialSetup;
- (void)showStatus;
- (void)networkReachabilityDidChange;
- (void)addObservers;
- (void)unsubscribe;
- (void)subscribe;
- (_Bool)shouldUnsubscribeOnBackground;
- (_Bool)shouldManageSubscription;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
