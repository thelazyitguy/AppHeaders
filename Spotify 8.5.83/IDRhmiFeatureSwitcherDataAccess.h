//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString;

@interface IDRhmiFeatureSwitcherDataAccess : NSObject
{
    NSMutableDictionary *_dataSource;
    NSString *_dataSourcePath;
    NSLock *_dataSourceAccessLock;
}

+ (id)defaultFeatureSwitcherDataAccessWithVehicleInfo:(id)arg1;
+ (id)defaultFeatureSwitcherDataAccessForCurrentVehicle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLock *dataSourceAccessLock; // @synthesize dataSourceAccessLock=_dataSourceAccessLock;
@property(retain, nonatomic) NSString *dataSourcePath; // @synthesize dataSourcePath=_dataSourcePath;
- (id)dataSourcePathFromVehicleInfo:(id)arg1;
- (void)writeDataSourceToFileSystem:(id)arg1;
- (id)loadDataSourceFromFileSystem;
- (void)deleteFeatureInfo:(id)arg1;
- (void)persistFeatureInfo:(id)arg1;
- (id)featureInfosPassingTest:(CDUnknownBlockType)arg1;
- (id)featureInfosPassingFilter:(id)arg1;
- (id)allFeatureInfos;
@property(readonly, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
- (void)setDataSourcePathWithVehicleInfo:(id)arg1;
- (id)initWithDataSourcePath:(id)arg1;
- (id)initWithVehicleInfo:(id)arg1;
- (id)init;

@end

