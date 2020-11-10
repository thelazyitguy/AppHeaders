//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTScrollFocusControllerSetting : NSObject
{
    _Bool _markedAsDisabled;
    long long _scrollFocusRateControl;
    double _verticalPercentageThreshold;
    double _horizontalPercentageThreshold;
    long long _selectionSize;
    long long _sortPriority;
    NSString *_scrollFocusSettingName;
}

+ (double)fractionForSortPriority:(long long)arg1;
+ (long long)sortPriorityForFraction:(double)arg1;
+ (double)fractionForSelectionCount:(long long)arg1;
+ (long long)selectionCountForSliderValue:(double)arg1;
+ (double)fractionForRateControl:(long long)arg1;
+ (long long)rateControlForFraction:(double)arg1;
+ (id)nameForSortPriority:(long long)arg1;
+ (int)rateControlTickCount:(long long)arg1;
+ (id)nameForRateControl:(long long)arg1;
+ (id)categoryNameForSubCategory:(long long)arg1;
+ (id)categoryNameForCategory:(long long)arg1;
+ (CDStruct_c3b9c2ee)sortPrioritySliderRange;
+ (CDStruct_c3b9c2ee)selectionCountSliderRange;
+ (CDStruct_c3b9c2ee)horizontalPercentageThresholdSliderRange;
+ (CDStruct_c3b9c2ee)verticalPercentageThresholdSliderRange;
+ (CDStruct_c3b9c2ee)rateControlSliderRange;
- (void).cxx_destruct;
@property(nonatomic) _Bool markedAsDisabled; // @synthesize markedAsDisabled=_markedAsDisabled;
@property(retain, nonatomic) NSString *scrollFocusSettingName; // @synthesize scrollFocusSettingName=_scrollFocusSettingName;
@property(nonatomic) long long sortPriority; // @synthesize sortPriority=_sortPriority;
@property(nonatomic) long long selectionSize; // @synthesize selectionSize=_selectionSize;
@property(nonatomic) double horizontalPercentageThreshold; // @synthesize horizontalPercentageThreshold=_horizontalPercentageThreshold;
@property(nonatomic) double verticalPercentageThreshold; // @synthesize verticalPercentageThreshold=_verticalPercentageThreshold;
@property(nonatomic) long long scrollFocusRateControl; // @synthesize scrollFocusRateControl=_scrollFocusRateControl;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScrollFocusRateControl:(long long)arg1 verticalPercentageThreshold:(double)arg2 horizontalPercentageThreshold:(double)arg3 selectionCount:(long long)arg4 sortPriority:(long long)arg5;

@end

