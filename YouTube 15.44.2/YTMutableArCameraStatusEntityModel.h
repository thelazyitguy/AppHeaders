//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTArCameraStatusEntityModel.h>

#import <Module_Framework/YTMutableEntity-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface YTMutableArCameraStatusEntityModel : YTArCameraStatusEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @dynamic entityMetadata;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) int webLoadingState; // @dynamic webLoadingState;
@property(nonatomic) _Bool isDeviceCompatible; // @dynamic isDeviceCompatible;
@property(nonatomic) _Bool isWelcomePagePassed; // @dynamic isWelcomePagePassed;
@property(nonatomic) int cameraLoadingState; // @dynamic cameraLoadingState;
@property(nonatomic) int cameraPermissionState; // @dynamic cameraPermissionState;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

