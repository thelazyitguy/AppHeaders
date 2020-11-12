//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/ChartComponentBase.h>

@class NSArray, UIColor, UIFont;

@interface ChartLegend : ChartComponentBase
{
    // Error parsing type: , name: entries
    // Error parsing type: , name: extraEntries
    // Error parsing type: , name: _isLegendCustom
    // Error parsing type: , name: horizontalAlignment
    // Error parsing type: , name: verticalAlignment
    // Error parsing type: , name: orientation
    // Error parsing type: , name: drawInside
    // Error parsing type: , name: direction
    // Error parsing type: , name: font
    // Error parsing type: , name: textColor
    // Error parsing type: , name: form
    // Error parsing type: , name: formSize
    // Error parsing type: , name: formLineWidth
    // Error parsing type: , name: formLineDashPhase
    // Error parsing type: , name: formLineDashLengths
    // Error parsing type: , name: xEntrySpace
    // Error parsing type: , name: yEntrySpace
    // Error parsing type: , name: formToTextSpace
    // Error parsing type: , name: stackSpace
    // Error parsing type: , name: calculatedLabelSizes
    // Error parsing type: , name: calculatedLabelBreakPoints
    // Error parsing type: , name: calculatedLineSizes
    // Error parsing type: , name: neededWidth
    // Error parsing type: , name: neededHeight
    // Error parsing type: , name: textWidthMax
    // Error parsing type: , name: textHeightMax
    // Error parsing type: , name: wordWrapEnabled
    // Error parsing type: , name: maxSizePercent
}

- (void).cxx_destruct;
@property(nonatomic, readonly) _Bool isLegendCustom;
- (void)resetCustom;
- (void)setCustomWithEntries:(id)arg1;
- (void)calculateDimensionsWithLabelFont:(id)arg1 viewPortHandler:(id)arg2;
@property(nonatomic) double maxSizePercent; // @synthesize maxSizePercent;
@property(nonatomic, readonly) _Bool isWordWrapEnabled;
@property(nonatomic) _Bool wordWrapEnabled; // @synthesize wordWrapEnabled;
@property(nonatomic) double textHeightMax; // @synthesize textHeightMax;
@property(nonatomic) double textWidthMax; // @synthesize textWidthMax;
@property(nonatomic) double neededHeight; // @synthesize neededHeight;
@property(nonatomic) double neededWidth; // @synthesize neededWidth;
- (struct CGSize)getMaximumEntrySizeWithFont:(id)arg1;
- (id)initWithEntries:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSArray *calculatedLineSizes;
@property(nonatomic, copy) NSArray *calculatedLabelBreakPoints;
@property(nonatomic, copy) NSArray *calculatedLabelSizes;
@property(nonatomic) double stackSpace; // @synthesize stackSpace;
@property(nonatomic) double formToTextSpace; // @synthesize formToTextSpace;
@property(nonatomic) double yEntrySpace; // @synthesize yEntrySpace;
@property(nonatomic) double xEntrySpace; // @synthesize xEntrySpace;
@property(nonatomic, copy) NSArray *formLineDashLengths;
@property(nonatomic) double formLineDashPhase; // @synthesize formLineDashPhase;
@property(nonatomic) double formLineWidth; // @synthesize formLineWidth;
@property(nonatomic) double formSize; // @synthesize formSize;
@property(nonatomic) long long form; // @synthesize form;
@property(nonatomic, retain) UIColor *textColor; // @synthesize textColor;
@property(nonatomic, retain) UIFont *font; // @synthesize font;
@property(nonatomic) long long direction; // @synthesize direction;
@property(nonatomic, readonly) _Bool isDrawInsideEnabled;
@property(nonatomic) _Bool drawInside; // @synthesize drawInside;
@property(nonatomic) long long orientation; // @synthesize orientation;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment;
@property(nonatomic, copy) NSArray *extraEntries;
@property(nonatomic, copy) NSArray *entries;

@end
