//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBInt32Array;

@interface GMSx_GMTTDCompactPolyline : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GPBInt32Array *latitudeE7DiffArray; // @dynamic latitudeE7DiffArray;
@property(readonly, nonatomic) unsigned long long latitudeE7DiffArray_Count; // @dynamic latitudeE7DiffArray_Count;
@property(retain, nonatomic) GMSx_GPBInt32Array *longitudeE7DiffArray; // @dynamic longitudeE7DiffArray;
@property(readonly, nonatomic) unsigned long long longitudeE7DiffArray_Count; // @dynamic longitudeE7DiffArray_Count;

@end
