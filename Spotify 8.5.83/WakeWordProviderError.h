//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface WakeWordProviderError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(copy, nonatomic) NSString *errorDomain; // @dynamic errorDomain;
@property(nonatomic) _Bool hasErrorDescription; // @dynamic hasErrorDescription;
@property(nonatomic) _Bool hasErrorDomain; // @dynamic hasErrorDomain;
@property(nonatomic) _Bool hasProviderId; // @dynamic hasProviderId;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(copy, nonatomic) NSString *providerId; // @dynamic providerId;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

