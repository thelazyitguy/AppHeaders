//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFCW444/GPBMessage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GCKPBAuthChallenge : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHashAlgorithm; // @dynamic hasHashAlgorithm;
@property(nonatomic) _Bool hasSenderNonce; // @dynamic hasSenderNonce;
@property(nonatomic) int hashAlgorithm; // @dynamic hashAlgorithm;
@property(copy, nonatomic) NSData *senderNonce; // @dynamic senderNonce;

@end

