//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData;

@interface GCKPBCrl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSignature; // @dynamic hasSignature;
@property(nonatomic) _Bool hasSignerCert; // @dynamic hasSignerCert;
@property(nonatomic) _Bool hasTbsCrl; // @dynamic hasTbsCrl;
@property(copy, nonatomic) NSData *signature; // @dynamic signature;
@property(copy, nonatomic) NSData *signerCert; // @dynamic signerCert;
@property(copy, nonatomic) NSData *tbsCrl; // @dynamic tbsCrl;

@end

