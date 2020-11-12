//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRMapId, NSDictionary, NSSet, NSString;

@interface CMRMapInfo : NSObject
{
    int _learningPercentage;
    int _regionCount;
    int _unlabeledRegionCount;
    int _deviceCount;
    int _localizedDeviceCount;
    int _badWifiAreaCount;
    CMRMapId *_mapId;
    NSString *_mapName;
    NSSet *_usedRegionNames;
    NSSet *_usedZoneNames;
    NSString *_sceneId;
    NSDictionary *_imageData;
}

+ (id)MapInfoWithMapId:(id)arg1 mapName:(id)arg2 learningPercentage:(int)arg3 regionCount:(int)arg4 unlabeledRegionCount:(int)arg5 usedRegionNames:(id)arg6 usedZoneNames:(id)arg7 deviceCount:(int)arg8 localizedDeviceCount:(int)arg9 sceneId:(id)arg10 imageData:(id)arg11 badWifiAreaCount:(int)arg12;
- (void).cxx_destruct;
@property(readonly, nonatomic) int badWifiAreaCount; // @synthesize badWifiAreaCount=_badWifiAreaCount;
@property(readonly, nonatomic) NSDictionary *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(readonly, nonatomic) int localizedDeviceCount; // @synthesize localizedDeviceCount=_localizedDeviceCount;
@property(readonly, nonatomic) int deviceCount; // @synthesize deviceCount=_deviceCount;
@property(readonly, nonatomic) NSSet *usedZoneNames; // @synthesize usedZoneNames=_usedZoneNames;
@property(readonly, nonatomic) NSSet *usedRegionNames; // @synthesize usedRegionNames=_usedRegionNames;
@property(readonly, nonatomic) int unlabeledRegionCount; // @synthesize unlabeledRegionCount=_unlabeledRegionCount;
@property(readonly, nonatomic) int regionCount; // @synthesize regionCount=_regionCount;
@property(readonly, nonatomic) int learningPercentage; // @synthesize learningPercentage=_learningPercentage;
@property(readonly, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(readonly, nonatomic) CMRMapId *mapId; // @synthesize mapId=_mapId;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMapId:(id)arg1 mapName:(id)arg2 learningPercentage:(int)arg3 regionCount:(int)arg4 unlabeledRegionCount:(int)arg5 usedRegionNames:(id)arg6 usedZoneNames:(id)arg7 deviceCount:(int)arg8 localizedDeviceCount:(int)arg9 sceneId:(id)arg10 imageData:(id)arg11 badWifiAreaCount:(int)arg12;

@end
