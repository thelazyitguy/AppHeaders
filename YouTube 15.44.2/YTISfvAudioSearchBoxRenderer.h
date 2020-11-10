//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTICommand, YTIFormattedString;

@interface YTISfvAudioSearchBoxRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOnTap; // @dynamic hasOnTap;
@property(nonatomic) _Bool hasPlaceholderText; // @dynamic hasPlaceholderText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *onTap; // @dynamic onTap;
@property(retain, nonatomic) YTIFormattedString *placeholderText; // @dynamic placeholderText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

