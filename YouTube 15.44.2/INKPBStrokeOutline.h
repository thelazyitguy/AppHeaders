//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBFloatArray;

@interface INKPBStrokeOutline : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRgba; // @dynamic hasRgba;
@property(nonatomic) unsigned int rgba; // @dynamic rgba;
@property(retain, nonatomic) GPBFloatArray *xArray; // @dynamic xArray;
@property(readonly, nonatomic) unsigned long long xArray_Count; // @dynamic xArray_Count;
@property(retain, nonatomic) GPBFloatArray *yArray; // @dynamic yArray;
@property(readonly, nonatomic) unsigned long long yArray_Count; // @dynamic yArray_Count;

@end

