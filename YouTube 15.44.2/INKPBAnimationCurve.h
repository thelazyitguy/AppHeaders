//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBFloatArray;

@interface INKPBAnimationCurve : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) GPBFloatArray *paramsArray; // @dynamic paramsArray;
@property(readonly, nonatomic) unsigned long long paramsArray_Count; // @dynamic paramsArray_Count;
@property(nonatomic) int type; // @dynamic type;

@end

