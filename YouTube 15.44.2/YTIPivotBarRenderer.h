//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray;

@interface YTIPivotBarRenderer : GPBMessage
{
}

+ (id)descriptor;
+ (id)pivotSupportedRenderersWithBrowseId:(id)arg1 title:(id)arg2 iconType:(int)arg3;
+ (id)minimalPivotBarWithFilter:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

