//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface PWCAesGCMSecureMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *aad; // @dynamic aad;
@property(nonatomic) _Bool hasAad; // @dynamic hasAad;
@property(nonatomic) _Bool hasInitializationVector; // @dynamic hasInitializationVector;
@property(nonatomic) _Bool hasMac; // @dynamic hasMac;
@property(nonatomic) _Bool hasPayload; // @dynamic hasPayload;
@property(copy, nonatomic) NSData *initializationVector; // @dynamic initializationVector;
@property(copy, nonatomic) NSData *mac; // @dynamic mac;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;

@end
