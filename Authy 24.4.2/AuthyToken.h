//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AuthyTokenModelKit.h"

@class _TtC5Authy14OneTouchDevice;

@interface AuthyToken : AuthyTokenModelKit
{
    _Bool _isRegisteringInOT;
    _TtC5Authy14OneTouchDevice *_oneTouchDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC5Authy14OneTouchDevice *oneTouchDevice; // @synthesize oneTouchDevice=_oneTouchDevice;
@property(nonatomic) _Bool isRegisteringInOT; // @synthesize isRegisteringInOT=_isRegisteringInOT;
- (_Bool)isOneTouchEnabled;
- (void)sendOneTouchEnableAccountEventToAnalytics;
- (_Bool)uploadPublicKeyIfNeeded;
- (void)resetData;
- (id)secretKeySha256;
- (_Bool)checkSecretKey;
- (_Bool)remove;
- (void)removeOneTouchDevice;
- (void)removeOneTouchDeviceIfNeeded;
- (id)initWithDictionary:(id)arg1;

@end
