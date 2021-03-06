//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/JWTAlgorithm-Protocol.h>

@class NSString;

@interface JWTAlgorithmNone : NSObject <JWTAlgorithm>
{
}

- (_Bool)verifySignedInput:(id)arg1 withSignature:(id)arg2 verificationKeyData:(id)arg3;
- (_Bool)verifySignedInput:(id)arg1 withSignature:(id)arg2 verificationKey:(id)arg3;
- (id)encodePayloadData:(id)arg1 withSecret:(id)arg2;
- (id)encodePayload:(id)arg1 withSecret:(id)arg2;
- (_Bool)verifyHash:(id)arg1 signature:(id)arg2 key:(id)arg3 error:(id *)arg4;
- (id)signHash:(id)arg1 key:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

