//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray;

@interface YTIMetadataRowContainerRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int collapsedItemCount; // @dynamic collapsedItemCount;
@property(nonatomic) _Bool hasCollapsedItemCount; // @dynamic hasCollapsedItemCount;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *rowsArray; // @dynamic rowsArray;
@property(readonly, nonatomic) unsigned long long rowsArray_Count; // @dynamic rowsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

