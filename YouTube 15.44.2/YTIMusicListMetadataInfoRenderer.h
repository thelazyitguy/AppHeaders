//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray;

@interface YTIMusicListMetadataInfoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *briefMessagesArray; // @dynamic briefMessagesArray;
@property(readonly, nonatomic) unsigned long long briefMessagesArray_Count; // @dynamic briefMessagesArray_Count;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasListItemType; // @dynamic hasListItemType;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *iconsArray; // @dynamic iconsArray;
@property(readonly, nonatomic) unsigned long long iconsArray_Count; // @dynamic iconsArray_Count;
@property(nonatomic) int listItemType; // @dynamic listItemType;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

