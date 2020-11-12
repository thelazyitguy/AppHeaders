//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASSSecureStorage-Protocol.h"

@class ASSCrypter, ASSFeatureLever, ASSKillSwitchLever, ASSMetricLogger, ASSSecureStorageConfiguration, ASSValidator, NSString;
@protocol ASSDataStore;

@interface ASSSecureStorageImpl : NSObject <ASSSecureStorage>
{
    id <ASSDataStore> _dataStore;
    ASSMetricLogger *_metricsLogger;
    ASSValidator *_validator;
    ASSSecureStorageConfiguration *_configuration;
    ASSFeatureLever *_featureLever;
    ASSKillSwitchLever *_killSwitchLever;
    ASSCrypter *_crypter;
}

@property(retain, nonatomic) ASSCrypter *crypter; // @synthesize crypter=_crypter;
@property(retain, nonatomic) ASSKillSwitchLever *killSwitchLever; // @synthesize killSwitchLever=_killSwitchLever;
@property(retain, nonatomic) ASSFeatureLever *featureLever; // @synthesize featureLever=_featureLever;
@property(retain, nonatomic) ASSSecureStorageConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) ASSValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) ASSMetricLogger *metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(retain, nonatomic) id <ASSDataStore> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (void)validateFeatureSupport;
- (long long)convertExceptionNameToErrorCode:(id)arg1;
- (id)handleException:(id)arg1;
- (id)getCustomerId;
- (id)getFeatureId;
- (id)toSecureItem:(id)arg1;
- (id)toSecureEnvelope:(id)arg1;
- (id)getKeyChainOptions;
- (unsigned long long)mapToKeyChainAccessControlFlags:(unsigned long long)arg1;
- (id)mapToKeyChainAccessibilityOptions:(unsigned long long)arg1;
- (void)clear:(id *)arg1;
- (void)removeItem:(id)arg1 error:(id *)arg2;
- (id)getIds:(id *)arg1;
- (id)get:(id)arg1 error:(id *)arg2;
- (void)put:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 withDataStore:(id)arg2 withMetricsLogger:(id)arg3 withValidator:(id)arg4 withFeatureLever:(id)arg5 withKillSwitchLever:(id)arg6 withCrypter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
