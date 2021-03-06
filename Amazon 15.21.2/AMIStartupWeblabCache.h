//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMIEarlyCrashCriticalRegion, NSArray, NSDictionary, NSMutableDictionary, NSUserDefaults;
@protocol AMIEarlyCrashReporterProtocol, AMIWeblabBridgeService;

@interface AMIStartupWeblabCache : NSObject
{
    _Bool _useDefaultTreatments;
    NSMutableDictionary *_defaultTreatments;
    NSArray *_oldUnusedWeblabs;
    id <AMIWeblabBridgeService> _weblabBridge;
    NSUserDefaults *_defaults;
    NSDictionary *_internalWeblabCache;
    AMIEarlyCrashCriticalRegion *_crashRegion;
    id <AMIEarlyCrashReporterProtocol> _crashReporter;
}

+ (id)sharedCache;
@property(retain, nonatomic) id <AMIEarlyCrashReporterProtocol> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) AMIEarlyCrashCriticalRegion *crashRegion; // @synthesize crashRegion=_crashRegion;
@property(nonatomic) _Bool useDefaultTreatments; // @synthesize useDefaultTreatments=_useDefaultTreatments;
@property(retain, nonatomic) NSDictionary *internalWeblabCache; // @synthesize internalWeblabCache=_internalWeblabCache;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) id <AMIWeblabBridgeService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
@property(retain, nonatomic) NSArray *oldUnusedWeblabs; // @synthesize oldUnusedWeblabs=_oldUnusedWeblabs;
@property(retain, nonatomic) NSMutableDictionary *defaultTreatments; // @synthesize defaultTreatments=_defaultTreatments;
- (void).cxx_destruct;
- (void)logIfRollbackToDefaultTreatments;
- (id)cacheKeyForWeblabName:(id)arg1;
- (id)weblabTreatmentFromDisk:(id)arg1;
- (void)buildWeblabCacheFromDefaults:(id)arg1;
- (void)reportSuccessfulStartup;
- (id)allCachedWeblabs;
- (void)updateCachedTreatments;
- (void)addWeblabsAndRegisterForUpdateWithWeblabService:(id)arg1;
- (void)clearUnusedWeblabs;
- (id)cachedTreatmentForWeblab:(id)arg1;
- (id)initWithDefaults:(id)arg1 weblabConfigurationClass:(Class)arg2;

@end

