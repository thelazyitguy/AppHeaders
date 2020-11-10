//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIArCameraStatusEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) int cameraLoadingState; // @dynamic cameraLoadingState;
@property(nonatomic) int cameraPermissionState; // @dynamic cameraPermissionState;
@property(nonatomic) _Bool hasCameraLoadingState; // @dynamic hasCameraLoadingState;
@property(nonatomic) _Bool hasCameraPermissionState; // @dynamic hasCameraPermissionState;
@property(nonatomic) _Bool hasIsDeviceCompatible; // @dynamic hasIsDeviceCompatible;
@property(nonatomic) _Bool hasIsWelcomePagePassed; // @dynamic hasIsWelcomePagePassed;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasWebLoadingState; // @dynamic hasWebLoadingState;
@property(nonatomic) _Bool isDeviceCompatible; // @dynamic isDeviceCompatible;
@property(nonatomic) _Bool isWelcomePagePassed; // @dynamic isWelcomePagePassed;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) int webLoadingState; // @dynamic webLoadingState;

@end

