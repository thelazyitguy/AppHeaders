//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBFloatArray;

@interface ORCH2GridContainerProperties : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int columnCount; // @dynamic columnCount;
@property(retain, nonatomic) GPBFloatArray *columnWeightsArray; // @dynamic columnWeightsArray;
@property(readonly, nonatomic) unsigned long long columnWeightsArray_Count; // @dynamic columnWeightsArray_Count;
@property(nonatomic) _Bool hasColumnCount; // @dynamic hasColumnCount;
@property(nonatomic) _Bool hasRowCount; // @dynamic hasRowCount;
@property(nonatomic) int rowCount; // @dynamic rowCount;
@property(retain, nonatomic) GPBFloatArray *rowWeightsArray; // @dynamic rowWeightsArray;
@property(readonly, nonatomic) unsigned long long rowWeightsArray_Count; // @dynamic rowWeightsArray_Count;

@end

