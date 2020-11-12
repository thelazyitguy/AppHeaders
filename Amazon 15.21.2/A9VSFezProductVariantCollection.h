//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface A9VSFezProductVariantCollection : NSObject
{
    NSArray *_variants;
    NSArray *_dimensionKeys;
    NSArray *_dimensionValueLists;
    NSArray *_swatchLists;
}

@property(readonly, nonatomic) NSArray *swatchLists; // @synthesize swatchLists=_swatchLists;
@property(retain, nonatomic) NSArray *dimensionValueLists; // @synthesize dimensionValueLists=_dimensionValueLists;
@property(readonly, nonatomic) NSArray *dimensionKeys; // @synthesize dimensionKeys=_dimensionKeys;
@property(readonly, nonatomic) NSArray *variants; // @synthesize variants=_variants;
- (void).cxx_destruct;
- (id)swatchListForDimension:(unsigned long long)arg1;
- (_Bool)isValidDimension:(unsigned long long)arg1;
- (id)validDimensionValueIndiciesForDimension:(unsigned long long)arg1;
- (void)eliminateInvalidDimensionValues;
- (id)variantMatchingVariant:(id)arg1 dimensionValueIndex:(unsigned long long)arg2 alongDimension:(unsigned long long)arg3;
- (id)firstAvailableVariantForDimensionValueIndex:(unsigned long long)arg1 alongDimension:(unsigned long long)arg2;
- (id)variantsForASIN:(id)arg1 alongDimensionSymbols:(id)arg2;
- (id)variantForASIN:(id)arg1;
- (id)dimensionValueForVariant:(id)arg1 alongDimensionSymbol:(id)arg2;
- (id)availableDimensionValueIndicesForASIN:(id)arg1 alongDimension:(unsigned long long)arg2;
- (id)swatchImageURLForDimension:(unsigned long long)arg1 dimensionValueIndex:(unsigned long long)arg2;
- (_Bool)hasSwatchImagesForDimension:(unsigned long long)arg1;
- (unsigned long long)numberOfDimensionValuesForDimension:(unsigned long long)arg1;
- (id)displayStringForDimensionSymbol:(id)arg1;
- (id)displayStringForDimension:(unsigned long long)arg1;
- (_Bool)hasOneDimensionValueAlongDimensions;
- (id)initWithResult:(id)arg1;

@end
