//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASSMetricLogger, NSNumber, NSUserDefaults;

@interface ASSKeyChainCryptoMaterialProvider : NSObject
{
    NSUserDefaults *_userDefaults;
    NSNumber *_privateKeySizeInBits;
    NSNumber *_privateIsPermanent;
    NSNumber *_secKeyReturnRef;
    ASSMetricLogger *_metricsLogger;
}

@property(retain, nonatomic) ASSMetricLogger *metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(readonly, nonatomic) NSNumber *secKeyReturnRef; // @synthesize secKeyReturnRef=_secKeyReturnRef;
@property(readonly, nonatomic) NSNumber *privateIsPermanent; // @synthesize privateIsPermanent=_privateIsPermanent;
@property(readonly, nonatomic) NSNumber *privateKeySizeInBits; // @synthesize privateKeySizeInBits=_privateKeySizeInBits;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)saveCryptoMetaDataInNSUserDefaults:(id)arg1;
- (id)getAllCryptoMetaDataFromNSUserDefaults;
- (void)deleteCryptoMetaDataFromNSUserDefaults:(id)arg1 error:(id *)arg2;
- (id)getCryptoMetaData:(id)arg1 error:(id *)arg2;
- (id)generatePublicKey:(id)arg1;
- (int)deleteSecretKeyFromKeyChain:(id)arg1 secAccessControlRef:(id)arg2;
- (id)generateCryptoMaterial:(id)arg1 secAccessControlRef:(id)arg2 error:(id *)arg3;
- (id)searchAndGetKey:(id)arg1 secAccessControlRef:(id)arg2 error:(id *)arg3;
- (id)getNewAsymmetricPrivateKey:(id)arg1 secAccessControlRef:(id)arg2 error:(id *)arg3;
- (id)getAccessControl:(id)arg1 error:(id *)arg2;
- (id)getCryptoMaterialForCryptoMetaData:(id)arg1 secAccessControlRef:(id)arg2 error:(id *)arg3;
- (void)releaseCFReference:(void *)arg1;
- (id)getSecretNames;
- (id)getSecret:(id)arg1 keyChainOptions:(id)arg2 error:(id *)arg3;
- (void)deleteSecret:(id)arg1 keyChainOptions:(id)arg2 error:(id *)arg3;
- (id)getActiveSecretForEncryption:(id)arg1 keyChainOptions:(id)arg2 error:(id *)arg3;
- (id)getActiveSecretForDecryption:(id)arg1 keyChainOptions:(id)arg2 error:(id *)arg3;
- (id)initWithMetricsLogger:(id)arg1;

@end

