//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GTLRObject.h>

@class GTLRGrowthService_GrowthRequestHeader, NSNumber, NSString;

@interface GTLRGrowthService_SendPromoSmsExternalRequest : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) GTLRGrowthService_GrowthRequestHeader *header; // @dynamic header;
@property(retain, nonatomic) NSNumber *promoId; // @dynamic promoId;
@property(copy, nonatomic) NSString *smsContent; // @dynamic smsContent;
@property(copy, nonatomic) NSString *smsContentType; // @dynamic smsContentType;
@property(retain, nonatomic) NSNumber *testOnly; // @dynamic testOnly;
@end
