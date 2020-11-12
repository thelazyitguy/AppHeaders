//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray, NSString, STTSCardinal, STTSDecimal, STTSFraction, STTSMorphosyntacticFeatureVector;

@interface STTSMeasure : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) STTSCardinal *cardinal; // @dynamic cardinal;
@property(copy, nonatomic) NSString *codeSwitch; // @dynamic codeSwitch;
@property(retain, nonatomic) STTSDecimal *decimal; // @dynamic decimal;
@property(retain, nonatomic) NSMutableArray *fieldOrderArray; // @dynamic fieldOrderArray;
@property(readonly, nonatomic) unsigned long long fieldOrderArray_Count; // @dynamic fieldOrderArray_Count;
@property(retain, nonatomic) STTSFraction *fraction; // @dynamic fraction;
@property(nonatomic) _Bool hasCardinal; // @dynamic hasCardinal;
@property(nonatomic) _Bool hasCodeSwitch; // @dynamic hasCodeSwitch;
@property(nonatomic) _Bool hasDecimal; // @dynamic hasDecimal;
@property(nonatomic) _Bool hasFraction; // @dynamic hasFraction;
@property(nonatomic) _Bool hasMorphosyntacticFeatures; // @dynamic hasMorphosyntacticFeatures;
@property(nonatomic) _Bool hasPreserveOrder; // @dynamic hasPreserveOrder;
@property(nonatomic) _Bool hasStructuredFeatures; // @dynamic hasStructuredFeatures;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasUnits; // @dynamic hasUnits;
@property(copy, nonatomic) NSString *morphosyntacticFeatures; // @dynamic morphosyntacticFeatures;
@property(nonatomic) _Bool preserveOrder; // @dynamic preserveOrder;
@property(retain, nonatomic) STTSMorphosyntacticFeatureVector *structuredFeatures; // @dynamic structuredFeatures;
@property(nonatomic) int style; // @dynamic style;
@property(copy, nonatomic) NSString *units; // @dynamic units;

@end
