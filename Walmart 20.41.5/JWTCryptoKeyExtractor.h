//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/JWTCryptoKeyExtractorProtocol-Protocol.h>

@class JWTCryptoKeyBuilder, NSString;

@interface JWTCryptoKeyExtractor : NSObject <JWTCryptoKeyExtractorProtocol>
{
    JWTCryptoKeyBuilder *_internalKeyBuilder;
    CDUnknownBlockType _keyBuilder;
}

+ (id)parametersKeyCertificatePassphrase;
+ (id)type;
+ (id)createWithType:(id)arg1;
+ (id)typesAndExtractors;
+ (id)availableExtractors;
+ (id)privateKeyWithPEMBase64;
+ (id)publicKeyWithPEMBase64;
+ (id)privateKeyInP12;
+ (id)publicKeyWithCertificate;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType keyBuilder; // @synthesize keyBuilder=_keyBuilder;
@property(retain, nonatomic) JWTCryptoKeyBuilder *internalKeyBuilder; // @synthesize internalKeyBuilder=_internalKeyBuilder;
- (id)keyFromString:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)keyFromData:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (void)setupFluent;
- (id)init;
@property(readonly, copy, nonatomic) NSString *type;
- (id)enhancedParameters:(id)arg1;
- (id)configuredByKeyBuilder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
