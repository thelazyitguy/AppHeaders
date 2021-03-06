//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SFCOAuth2Authentication.h>

@class NSDate, NSObject, NSString, NSTimer, NSURL;
@protocol SFCOAuth2DeviceAuthenticationDelegate;

@interface SFCOAuth2DeviceAuthentication : SFCOAuth2Authentication
{
    NSTimer *_refreshTimer;
    CDUnknownBlockType _completionBlock;
    _Bool _waitingForAuthorization;
    NSObject<SFCOAuth2DeviceAuthenticationDelegate> *_delegate;
    NSString *_deviceCode;
    NSString *_userCode;
    NSURL *_verificationUri;
    double _interval;
    NSDate *_expiresAt;
}

@property(readonly, nonatomic) NSDate *expiresAt; // @synthesize expiresAt=_expiresAt;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) NSURL *verificationUri; // @synthesize verificationUri=_verificationUri;
@property(readonly, copy, nonatomic) NSString *userCode; // @synthesize userCode=_userCode;
@property(readonly, copy, nonatomic) NSString *deviceCode; // @synthesize deviceCode=_deviceCode;
@property(readonly, nonatomic, getter=isWaitingForAuthorization) _Bool waitingForAuthorization; // @synthesize waitingForAuthorization=_waitingForAuthorization;
@property(nonatomic) __weak NSObject<SFCOAuth2DeviceAuthenticationDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retryTimerFired:(id)arg1;
- (void)startRetryTimer;
- (_Bool)handleResponse:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)authenticationDictionary;
- (id)responseType;
- (id)grantType;
- (void)beginAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

