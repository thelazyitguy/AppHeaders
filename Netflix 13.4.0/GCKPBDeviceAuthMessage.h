//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFCW444/GPBMessage.h>

@class GCKPBAuthChallenge, GCKPBAuthError, GCKPBAuthResponse;

__attribute__((visibility("hidden")))
@interface GCKPBDeviceAuthMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPBAuthChallenge *challenge; // @dynamic challenge;
@property(retain, nonatomic) GCKPBAuthError *error; // @dynamic error;
@property(nonatomic) _Bool hasChallenge; // @dynamic hasChallenge;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasResponse; // @dynamic hasResponse;
@property(retain, nonatomic) GCKPBAuthResponse *response; // @dynamic response;

@end
