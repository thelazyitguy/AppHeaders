//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADEumBeaconManager : NSObject
{
    NSString *_crashBeaconFolder;
    NSString *_debugBeaconFolder;
    NSString *_regularBeaconFolder;
}

+ (id)debugUploadedFolder;
+ (id)crashBeaconFolder;
+ (id)regularBeaconFolder;
+ (id)makeFolderWithName:(id)arg1;
+ (id)rootDocsFolderName;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)saveBeacon:(id)arg1;
- (id)pathForName:(id)arg1 rootPath:(id)arg2;
- (void)clearPersistenceFolderForPersistenceType:(long long)arg1;
- (id)folderForPersistenceType:(long long)arg1;
- (void)removeBeacon:(id)arg1;
- (id)fetchBeaconsFromList:(id)arg1 persistenceType:(long long)arg2;
- (id)listMostRecentBeaconsWithLimit:(unsigned long long)arg1 persistenceType:(long long)arg2;
- (id)fetchMostRecentBeaconsWithLimit:(unsigned long long)arg1 persistenceType:(long long)arg2;
- (void)dropBeacons:(long long)arg1;
- (void)deleteBeacons:(id)arg1;
- (void)addBeacon:(id)arg1;
- (_Bool)fileExistsForBeaconWithSignature:(id)arg1 persistenceType:(long long)arg2;
- (_Bool)fileExistsForBeacon:(id)arg1;
- (id)init;
@property(retain) NSString *regularBeaconFolder; // @dynamic regularBeaconFolder;
@property(retain) NSString *debugBeaconFolder; // @dynamic debugBeaconFolder;
@property(retain) NSString *crashBeaconFolder; // @dynamic crashBeaconFolder;

@end
