//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray, NSString, STTSMorphosyntacticFeatureVector;

@interface STTSThoroughfare : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *dependentName; // @dynamic dependentName;
@property(retain, nonatomic) NSMutableArray *fieldOrderArray; // @dynamic fieldOrderArray;
@property(readonly, nonatomic) unsigned long long fieldOrderArray_Count; // @dynamic fieldOrderArray_Count;
@property(nonatomic) _Bool hasDependentName; // @dynamic hasDependentName;
@property(nonatomic) _Bool hasMorphosyntacticFeatures; // @dynamic hasMorphosyntacticFeatures;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasNumber; // @dynamic hasNumber;
@property(nonatomic) _Bool hasPremises; // @dynamic hasPremises;
@property(nonatomic) _Bool hasPreserveOrder; // @dynamic hasPreserveOrder;
@property(nonatomic) _Bool hasStructuredFeatures; // @dynamic hasStructuredFeatures;
@property(nonatomic) _Bool hasSubpremises; // @dynamic hasSubpremises;
@property(copy, nonatomic) NSString *morphosyntacticFeatures; // @dynamic morphosyntacticFeatures;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *number; // @dynamic number;
@property(copy, nonatomic) NSString *premises; // @dynamic premises;
@property(nonatomic) _Bool preserveOrder; // @dynamic preserveOrder;
@property(retain, nonatomic) STTSMorphosyntacticFeatureVector *structuredFeatures; // @dynamic structuredFeatures;
@property(copy, nonatomic) NSString *subpremises; // @dynamic subpremises;

@end
