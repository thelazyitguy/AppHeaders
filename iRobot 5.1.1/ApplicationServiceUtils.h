//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ApplicationServiceUtils : NSObject
{
}

+ (void)disconnectAllAssets;
+ (void)addVirtualRobot:(id)arg1;
+ (void)removeAllRobots;
+ (void)removeAssetWithId:(id)arg1;
+ (void)setCurrentAssetIdString:(id)arg1;
+ (id)assetForId:(id)arg1;
+ (id)getAvailableAssets;
+ (_Bool)hasAvailableAssets;
+ (id)getActiveAsset;
+ (_Bool)isAssetAvailable:(id)arg1;
+ (id)applicationUIService;
+ (id)pmiApplicationService;

@end
