//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class SGWPPEDynamiteExtendedData, SGWPPEPaisaExtendedData;

@interface PSKClientSpecificData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SGWPPEDynamiteExtendedData *dynamiteExtendedData; // @dynamic dynamiteExtendedData;
@property(nonatomic) _Bool hasDynamiteExtendedData; // @dynamic hasDynamiteExtendedData;
@property(nonatomic) _Bool hasIsPlaceholder; // @dynamic hasIsPlaceholder;
@property(nonatomic) _Bool hasPaisaExtendedData; // @dynamic hasPaisaExtendedData;
@property(nonatomic) _Bool isPlaceholder; // @dynamic isPlaceholder;
@property(retain, nonatomic) SGWPPEPaisaExtendedData *paisaExtendedData; // @dynamic paisaExtendedData;

@end

