//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTGaiaLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logVolumeHardwareButtonPressedWithDirection:(id)arg1;
- (void)logTooltipChooseDeviceInteractionWithPageId:(id)arg1 pageUri:(id)arg2;
- (void)logTooltipImpressionWithItemId:(id)arg1 pageUri:(id)arg2;
- (void)logOverlayImpressionWithItemId:(id)arg1 pageUri:(id)arg2;
- (void)logDeviceLockScreenSettingsChangedInteractionWithState:(_Bool)arg1;
- (void)logShowLocalDevicesSettingsChangedInteractionWithState:(_Bool)arg1;
- (void)logNewDevicePopupInteractionWithAction:(id)arg1;
- (void)logSwitchDevicePopupInteractionWithAction:(id)arg1;
- (void)logEducationInteractionWithPageIdentifier:(id)arg1 pageURI:(id)arg2;
- (void)logDeviceContextMenuItemInteractionWithIndex:(long long)arg1 andActionIdentifier:(id)arg2;
- (void)logDeviceContextMenuInteractionWithIndex:(long long)arg1 andDeviceType:(id)arg2 andDeviceId:(id)arg3;
- (void)logMoreDevicesSelectedInteraction;
- (void)logEducationSelectedInteractionWithIndex:(long long)arg1 andEducationType:(id)arg2;
- (void)logDeviceSelectedInteractionWithIndex:(long long)arg1 andDeviceType:(id)arg2 andDeviceId:(id)arg3;
- (void)logDevicePickerOpenInteractionWithDevicesAvailableState:(id)arg1 contextPageIdentifier:(id)arg2 contextPageURI:(id)arg3;
- (id)initWithLogCenter:(id)arg1;

@end
