//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSMobileAnalyticsSystem-Protocol.h"

@class NSString;
@protocol AWSMobileAnalyticsConnectivity, AWSMobileAnalyticsFileManager, AWSMobileAnalyticsLifeCycleManager, AWSMobileAnalyticsPreferences;

@interface AWSMobileAnalyticsIOSSystem : NSObject <AWSMobileAnalyticsSystem>
{
    id <AWSMobileAnalyticsFileManager> _fileManager;
    id <AWSMobileAnalyticsPreferences> _preferences;
    id <AWSMobileAnalyticsConnectivity> _connectivity;
    id <AWSMobileAnalyticsLifeCycleManager> _lifeCycleManager;
}

+ (id)rootFileDirectoryWithFileManager:(id)arg1;
@property(readonly, nonatomic) id <AWSMobileAnalyticsLifeCycleManager> lifeCycleManager; // @synthesize lifeCycleManager=_lifeCycleManager;
@property(retain, nonatomic) id <AWSMobileAnalyticsConnectivity> connectivity; // @synthesize connectivity=_connectivity;
@property(retain, nonatomic) id <AWSMobileAnalyticsPreferences> preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) id <AWSMobileAnalyticsFileManager> fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1 withFileManager:(id)arg2;
- (_Bool)readClientIDFromCachesDirectoryWithInsightsPrivateKey:(id)arg1 cachesClientIDRef:(id *)arg2 cachesDirectoryAbsolutePath:(id)arg3;
- (_Bool)performMigrateMobileAnalyticsDataWithInsightsPrivateKey:(id)arg1 absolutePath:(id)arg2 cachesClientIDRef:(id *)arg3 cachesDirectoryAbsolutePath:(id)arg4;
- (_Bool)migrateMobileAnalyticsDataWithIdentifier:(id)arg1 insightsPrivateKey:(id)arg2 absolutePath:(id)arg3 withRootFile:(id)arg4 cachesClientIDRef:(id *)arg5;
- (id)initWithIdentifier:(id)arg1 insightsPrivateKey:(id)arg2 withRootPath:(id)arg3;
- (id)initWithIdentifier:(id)arg1 insightsPrivateKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
