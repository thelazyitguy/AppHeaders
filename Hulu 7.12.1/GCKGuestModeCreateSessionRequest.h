//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GoogleCast/GCKGuestModeServerRequest.h>

@class GCKOCCreateSessionRequest, NSString;
@protocol GCKGuestModeCreateSessionRequestDelegate;

@interface GCKGuestModeCreateSessionRequest : GCKGuestModeServerRequest
{
    int _pinType;
    NSString *_pinCode;
    GCKOCCreateSessionRequest *_sessionRequest;
    id <GCKGuestModeCreateSessionRequestDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCKGuestModeCreateSessionRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)processPostError:(id)arg1;
- (void)processPostResponseData:(id)arg1 statusCode:(long long)arg2;
- (void)start;
@property(readonly, copy, nonatomic) NSString *pinCode;
@property(readonly, nonatomic) int pinType;
- (id)initWithEnvironmentScan:(id)arg1 pinType:(int)arg2 pinCode:(id)arg3 TLSCertificateHash:(id)arg4;

@end
