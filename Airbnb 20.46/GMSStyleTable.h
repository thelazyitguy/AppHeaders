//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSStyleTable-Protocol.h"

@class GMSLazyMultiZoomStyleTable, NSString;

@interface GMSStyleTable : NSObject <GMSStyleTable>
{
    map_f929ff81 _IDToStylesMap;
    vector_bbba3654 _orderedIDs;
    GMSLazyMultiZoomStyleTable *_lazyStyleTable;
    struct Mutex _lazyIDToStylesMapMutex;
    map_f929ff81 _lazyIDToStylesOrNullMap;
    vector_12bd641b _minRanksByZoom;
    struct map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, int>>> _boostAmountToZoomOffset;
    _Bool _isGlobalTable;
    struct map<std::__1::tuple<gmscore::model::StyleID, int>, GMSModelStyle *, std::__1::less<std::__1::tuple<gmscore::model::StyleID, int>>, std::__1::allocator<std::__1::pair<const std::__1::tuple<gmscore::model::StyleID, int>, GMSModelStyle *>>> _synthesizedCache;
    int _globalMapStyle;
}

+ (id)styleTableWithMultiZoomStyles:(id)arg1 globalMapStyle:(int)arg2;
+ (id)styleTableFromStyleTable:(id)arg1 globalStyleTable:(id)arg2;
+ (id)emptyStyleTable;
+ (id)styleTableWithMultiZoomStyles:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) int globalMapStyle; // @synthesize globalMapStyle=_globalMapStyle;
- (unsigned long long)unpackMultiZoomStyleAtIndex:(unsigned long long)arg1 intoStyleMap:(map_f929ff81 *)arg2;
- (void)offsetsForBoostAmount:(int)arg1 zoomLevel:(int)arg2 outRankOffset:(int *)arg3 outZoomOffset:(int *)arg4;
- (unsigned long long)styleCount;
- (id)styleForFeatureStyle:(id)arg1 zoomLevel:(int)arg2 transformTags:(id)arg3 substyleTag:(long long)arg4;
- (id)styleForFeatureStyle:(id)arg1 zoomLevel:(int)arg2;
- (_Bool)isLocallyDefinedStyle:(id)arg1;
- (_Bool)isStyle:(id)arg1 visibleAtZoomLevel:(int)arg2;
- (id)stylesForFeatureStyle:(id)arg1 transformTags:(id)arg2 substyleTag:(long long)arg3;
- (id)stylesForFeatureStyle:(id)arg1;
- (id)internalStylesForFeatureStyle:(id)arg1 transformTags:(id)arg2 substyleTag:(long long)arg3 outTransformedID:(struct StyleID *)arg4;
- (id)multiZoomStyleForStylingID:(const struct StyleID *)arg1 transformTags:(id)arg2 substyleTag:(long long)arg3;
- (id)internalMultiZoomStyleForStylingID:(const struct StyleID *)arg1 transformTags:(id)arg2 substyleTag:(long long)arg3 outTransformedID:(struct StyleID *)arg4;
- (id)lazyMultiZoomStyleForStylingID:(const struct StyleID *)arg1 outIsError:(_Bool *)arg2;
- (void)unpackLazyStylesForStylingID:(const struct StyleID *)arg1;
- (struct StyleID)stylingIDForNamedStyle:(int)arg1 type:(unsigned long long)arg2;
- (id)styleAtIndex:(int)arg1 type:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)initLabelRanks:(id)arg1;
- (id)initWithStylesMap:(map_f929ff81 *)arg1 orderedIDs:(vector_bbba3654 *)arg2 isGlobalTable:(_Bool)arg3 globalMapStyle:(int)arg4 labelRanks:(id)arg5;
- (id)initWithStylesMap:(map_f929ff81 *)arg1;
- (id)initWithLazyStyleTable:(id)arg1 globalMapStyle:(int)arg2 labelRanks:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

