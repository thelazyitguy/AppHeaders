//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIRenderer;

@interface YTISponsorshipsOfferListRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *accountBar; // @dynamic accountBar;
@property(retain, nonatomic) YTIRenderer *appBar; // @dynamic appBar;
@property(nonatomic) _Bool hasAccountBar; // @dynamic hasAccountBar;
@property(nonatomic) _Bool hasAppBar; // @dynamic hasAppBar;
@property(nonatomic) _Bool hasItemSection; // @dynamic hasItemSection;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *itemSection; // @dynamic itemSection;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
