//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GRWSGrowthRequestHeader, NSString;

@interface SendPromoSmsExternalRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasPromoId; // @dynamic hasPromoId;
@property(nonatomic) _Bool hasSmsContent; // @dynamic hasSmsContent;
@property(nonatomic) _Bool hasSmsContentType; // @dynamic hasSmsContentType;
@property(nonatomic) _Bool hasTestOnly; // @dynamic hasTestOnly;
@property(retain, nonatomic) GRWSGrowthRequestHeader *header; // @dynamic header;
@property(nonatomic) int promoId; // @dynamic promoId;
@property(copy, nonatomic) NSString *smsContent; // @dynamic smsContent;
@property(nonatomic) int smsContentType; // @dynamic smsContentType;
@property(nonatomic) _Bool testOnly; // @dynamic testOnly;

@end

