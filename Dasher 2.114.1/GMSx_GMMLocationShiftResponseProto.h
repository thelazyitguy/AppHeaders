//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GMMMapPointProto, GMSx_GPBInt64Array;

@interface GMSx_GMMLocationShiftResponseProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cacheSquareLength; // @dynamic cacheSquareLength;
@property(retain, nonatomic) GMSx_GPBInt64Array *coefficientArray; // @dynamic coefficientArray;
@property(readonly, nonatomic) unsigned long long coefficientArray_Count; // @dynamic coefficientArray_Count;
@property(nonatomic) _Bool hasCacheSquareLength; // @dynamic hasCacheSquareLength;
@property(nonatomic) _Bool hasOriginalPoint; // @dynamic hasOriginalPoint;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasValidSquareLength; // @dynamic hasValidSquareLength;
@property(retain, nonatomic) GMSx_GMMMapPointProto *originalPoint; // @dynamic originalPoint;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) int validSquareLength; // @dynamic validSquareLength;

@end
