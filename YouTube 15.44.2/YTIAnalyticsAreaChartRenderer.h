//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBDoubleArray, GPBInt64Array, YTIAnalyticsChartHighlight;

@interface YTIAnalyticsAreaChartRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int areaColor; // @dynamic areaColor;
@property(retain, nonatomic) YTIAnalyticsChartHighlight *chartHighlight; // @dynamic chartHighlight;
@property(nonatomic) int chartValuesType; // @dynamic chartValuesType;
@property(retain, nonatomic) GPBInt64Array *datesArray; // @dynamic datesArray;
@property(readonly, nonatomic) unsigned long long datesArray_Count; // @dynamic datesArray_Count;
@property(nonatomic) _Bool hasAreaColor; // @dynamic hasAreaColor;
@property(nonatomic) _Bool hasChartHighlight; // @dynamic hasChartHighlight;
@property(nonatomic) _Bool hasChartValuesType; // @dynamic hasChartValuesType;
@property(retain, nonatomic) GPBDoubleArray *valuesArray; // @dynamic valuesArray;
@property(readonly, nonatomic) unsigned long long valuesArray_Count; // @dynamic valuesArray_Count;

@end

