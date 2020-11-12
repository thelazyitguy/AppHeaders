//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CMRBluetoothHandlerDelegate-Protocol.h"

@class NSString;
@protocol BluetoothUtilityDelegate, CMRBluetoothHandler;

@interface BluetoothUtility : NSObject <CMRBluetoothHandlerDelegate>
{
    id <BluetoothUtilityDelegate> _delegate;
    id <CMRBluetoothHandler> _bluetoothHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CMRBluetoothHandler> bluetoothHandler; // @synthesize bluetoothHandler=_bluetoothHandler;
@property(nonatomic) __weak id <BluetoothUtilityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBluetoothPermissionsStateChanged:(BOOL)arg1;
- (void)unsubscribeFromApplicationDidBecomeActiveNotification;
- (void)subscribeToApplicationDidBecomeActiveNotification;
- (void)handleAppBecameActive;
- (long long)bluetoothPermissionsState;
- (void)requestPermissions;
- (_Bool)validateBluetoothEnabled;
- (_Bool)permissionRequested;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
