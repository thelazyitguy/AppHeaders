//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray, NSString, STTSMorphosyntacticFeatureVector;

@interface STTSTelephone : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *codeSwitch; // @dynamic codeSwitch;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(copy, nonatomic) NSString *extension; // @dynamic extension;
@property(retain, nonatomic) NSMutableArray *fieldOrderArray; // @dynamic fieldOrderArray;
@property(readonly, nonatomic) unsigned long long fieldOrderArray_Count; // @dynamic fieldOrderArray_Count;
@property(nonatomic) _Bool hasCodeSwitch; // @dynamic hasCodeSwitch;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasExtension; // @dynamic hasExtension;
@property(nonatomic) _Bool hasMorphosyntacticFeatures; // @dynamic hasMorphosyntacticFeatures;
@property(nonatomic) _Bool hasPreserveOrder; // @dynamic hasPreserveOrder;
@property(nonatomic) _Bool hasStructuredFeatures; // @dynamic hasStructuredFeatures;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(copy, nonatomic) NSString *morphosyntacticFeatures; // @dynamic morphosyntacticFeatures;
@property(retain, nonatomic) NSMutableArray *numberPartArray; // @dynamic numberPartArray;
@property(readonly, nonatomic) unsigned long long numberPartArray_Count; // @dynamic numberPartArray_Count;
@property(nonatomic) _Bool preserveOrder; // @dynamic preserveOrder;
@property(retain, nonatomic) STTSMorphosyntacticFeatureVector *structuredFeatures; // @dynamic structuredFeatures;
@property(nonatomic) int style; // @dynamic style;

@end
