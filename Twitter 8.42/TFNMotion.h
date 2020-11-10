//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, NSOperationQueue;

@interface TFNMotion : NSObject
{
    CMMotionManager *_manager;
    NSOperationQueue *_accelerometerUpdateQueue;
    unsigned long long _accelerometerUpdateSubscribersCount;
    unsigned long long _deviceOrientationNotificationSubscribersCount;
    long long _deviceOrientation;
    long long _lastDeviceOrientation;
}

+ (id)sharedMotion;
- (void).cxx_destruct;
@property(nonatomic) long long lastDeviceOrientation; // @synthesize lastDeviceOrientation=_lastDeviceOrientation;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
- (void)_accelerometerDidUpdate:(id)arg1 error:(id)arg2;
- (void)endGeneratingDeviceOrientationNotifications;
- (void)beginGeneratingDeviceOrientationNotifications;
@property(readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) _Bool generatesDeviceOrientationNotifications;
- (void)_pauseAccelerometerUpdates;
- (void)_stopAccelerometerUpdates;
- (void)_resumeAccelerometerUpdates;
- (void)_startAccelerometerUpdates;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

