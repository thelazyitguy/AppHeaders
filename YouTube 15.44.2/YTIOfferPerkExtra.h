//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIFormattedString, YTIThumbnailDetails;

@interface YTIOfferPerkExtra : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *badgeIcon; // @dynamic badgeIcon;
@property(retain, nonatomic) YTIFormattedString *badgeText; // @dynamic badgeText;
@property(nonatomic) _Bool hasBadgeIcon; // @dynamic hasBadgeIcon;
@property(nonatomic) _Bool hasBadgeText; // @dynamic hasBadgeText;
@property(retain, nonatomic) NSMutableArray *imagesArray; // @dynamic imagesArray;
@property(readonly, nonatomic) unsigned long long imagesArray_Count; // @dynamic imagesArray_Count;

@end
