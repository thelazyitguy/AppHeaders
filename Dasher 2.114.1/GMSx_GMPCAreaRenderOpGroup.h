//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GMPCGeometryStats, NSMutableArray;

@interface GMSx_GMPCAreaRenderOpGroup : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *areaOpArray; // @dynamic areaOpArray;
@property(readonly, nonatomic) unsigned long long areaOpArray_Count; // @dynamic areaOpArray_Count;
@property(retain, nonatomic) GMSx_GMPCGeometryStats *geometryStats; // @dynamic geometryStats;
@property(nonatomic) _Bool hasGeometryStats; // @dynamic hasGeometryStats;

@end
