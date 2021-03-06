//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AtriusLocation/CLLocationManagerDelegate-Protocol.h>
#import <AtriusLocation/UIApplicationDelegate-Protocol.h>

@class CLLocationManager, NSMutableArray, NSString, UIWindow;
@protocol BleEventListener;

@interface BleManager : NSObject <CLLocationManagerDelegate, UIApplicationDelegate>
{
    CLLocationManager *locationManager;
    NSMutableArray *regions;
    _Bool bgLocationAllowed;
    id <BleEventListener> _delegate;
}

@property(nonatomic) __weak id <BleEventListener> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)terminate;
- (_Bool)isOurRegion:(id)arg1;
- (void)stopBleScan;
- (_Bool)startBleScan:(id)arg1 error:(id *)arg2;
- (void)initialize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

