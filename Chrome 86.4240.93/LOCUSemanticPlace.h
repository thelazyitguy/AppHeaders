//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class LOCUFeatureIdProto, NSMutableArray;

@interface LOCUSemanticPlace : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int confidence; // @dynamic confidence;
@property(retain, nonatomic) LOCUFeatureIdProto *featureId; // @dynamic featureId;
@property(retain, nonatomic) NSMutableArray *gconceptInstanceArray; // @dynamic gconceptInstanceArray;
@property(readonly, nonatomic) unsigned long long gconceptInstanceArray_Count; // @dynamic gconceptInstanceArray_Count;
@property(nonatomic) _Bool hasConfidence; // @dynamic hasConfidence;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasScore; // @dynamic hasScore;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) float score; // @dynamic score;
@property(nonatomic) int source; // @dynamic source;

@end
