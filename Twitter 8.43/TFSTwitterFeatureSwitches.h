//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterFeatureSwitches-Protocol.h>

@class NSMutableDictionary, NSString;

@interface TFSTwitterFeatureSwitches : NSObject <TFNTwitterFeatureSwitches>
{
    NSMutableDictionary *_mainThreadValueCache;
    NSMutableDictionary *_mainThreadIsInExperimentForKeyCache;
    NSMutableDictionary *_mainThreadHasNonDefaultValueForKeyCache;
    NSString *_accountID;
}

+ (id)archiveFileNameForAccountID:(id)arg1;
+ (id)manifestDirectory;
+ (_Bool)initializeWithContentsOfFile:(id)arg1 forDevice:(id)arg2 isUsingVoiceOver:(_Bool)arg3 scribeDelegate:(id)arg4 host:(id)arg5 instrumentation:(_Bool)arg6 mode:(long long)arg7 error:(id *)arg8;
+ (id)scribeDelegateForAccountID:(id)arg1;
+ (id)featureSwitchesForAccountID:(id)arg1;
+ (id)featureSwitchesForDevice;
+ (void)shutdown;
+ (id)host;
+ (id)service;
+ (long long)mode;
+ (_Bool)isInitialized;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)_applicationDidEnterBackground;
- (_Bool)updatePendingConfig:(id)arg1;
- (id)rawFeatureSwitchesDictionary;
- (id)overriddenRawValueForKey:(id)arg1;
- (void)overrideAllValuesInDictionary:(id)arg1 employeeBuildOrOverrideEnabledAccountID:(id)arg2;
- (void)removeOverrideForKey:(id)arg1 employeeBuildOrOverrideEnabledAccountID:(id)arg2;
- (void)overrideRawValue:(id)arg1 forKey:(id)arg2 employeeBuildOrOverrideEnabledAccountID:(id)arg3;
- (id)secondaryConfigurationForKey:(id)arg1;
- (id)bucketNameForExperimentKey:(id)arg1 honoringLongtermHoldbackKey:(id)arg2;
- (double)unsafePeekDoubleForKey:(id)arg1;
- (_Bool)unsafePeekBoolForKey:(id)arg1;
- (id)unsafePeekSetForKey:(id)arg1;
- (id)unsafePeekArrayForKey:(id)arg1;
- (id)unsafePeekStringForKey:(id)arg1;
- (long long)unsafePeekIntegerForKey:(id)arg1;
- (_Bool)hasNonDefaultValueForKey:(id)arg1;
- (_Bool)isInExperimentForKey:(id)arg1;
- (void)partiallyApplyPendingWithAccountID:(id)arg1 keys:(id)arg2;
- (void)applyPendingDeviceFeatureSwitches;
- (void)applyPendingWithAccountID:(id)arg1;
- (void)forceRefreshDeviceFeatureSwitchesWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceRefreshWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshDeviceFeatureSwitchesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshIfNecessaryWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshWithAccountID:(id)arg1 maxStale:(double)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshWithAccountID:(id)arg1 maxStale:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)setForKey:(id)arg1;
- (id)rawValueForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (double)CGFloatForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (void)resetMainThreadCache;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 scribeDelegate:(id)arg2 host:(id)arg3 enableMainThreadCache:(_Bool)arg4;
- (id)initWithAccountID:(id)arg1 scribeDelegate:(id)arg2 host:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
