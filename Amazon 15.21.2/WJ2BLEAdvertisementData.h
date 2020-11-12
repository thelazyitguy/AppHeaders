//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WJ2BLEAdvertisementData : NSObject
{
    BOOL _setupFlags;
    NSData *_authMaterialIndex;
    NSData *_productIndex;
    NSData *_nonce;
    NSData *_deviceCapabilityIndex;
}

@property BOOL setupFlags; // @synthesize setupFlags=_setupFlags;
@property(readonly) NSData *deviceCapabilityIndex; // @synthesize deviceCapabilityIndex=_deviceCapabilityIndex;
@property(readonly) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly) NSData *productIndex; // @synthesize productIndex=_productIndex;
@property(readonly) NSData *authMaterialIndex; // @synthesize authMaterialIndex=_authMaterialIndex;
- (void).cxx_destruct;
- (_Bool)isAuthenticatedEcdheSupported;
- (_Bool)isUnauthenticatedEcdheSupported;
- (_Bool)isPinSupported;
- (_Bool)isEqual:(id)arg1;
- (id)getAuthMaterialIndex;
- (id)getProductIndex;
- (id)initWithAuthMaterialIndex:(id)arg1 nonce:(id)arg2 productIndex:(id)arg3 deviceCapabilityIndex:(id)arg4 flags:(id)arg5;

@end
