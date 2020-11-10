//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTICommand, YTIFormattedString;

@interface YTIMobilePlaceResultRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPlaceId; // @dynamic hasPlaceId;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

