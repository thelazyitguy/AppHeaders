//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext;

@interface LPLockScreenPrompt : NSObject
{
    LAContext *_currentContext;
}

+ (long long)blocking_promptBiometricWithMessage:(id)arg1 fallbackMessage:(id)arg2;
+ (_Bool)isPromptActive;
+ (void)storeFingerprintState;
+ (_Bool)hasBiometryChanged;
+ (long long)biometryType;
+ (_Bool)isFingerprintAvailable;
+ (id)fingerprint_domain_state_pref_key;
- (void).cxx_destruct;
@property(retain, nonatomic) LAContext *currentContext; // @synthesize currentContext=_currentContext;
- (void)callbackCompletion:(CDUnknownBlockType)arg1 success:(_Bool)arg2 error:(id)arg3 afterDelay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)query:(id)arg1 attempt:(int)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)promptLockScreenWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)promptFingerprintWithMessage:(id)arg1 fallbackMessage:(id)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)promptFingerprintWithMessage:(id)arg1 fallbackMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)promptFingerprintWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;

@end
