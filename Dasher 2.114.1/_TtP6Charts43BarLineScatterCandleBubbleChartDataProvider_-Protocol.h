//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtP6Charts17ChartDataProvider_-Protocol.h>

@class ChartTransformer;

@protocol _TtP6Charts43BarLineScatterCandleBubbleChartDataProvider_ <_TtP6Charts17ChartDataProvider_>
@property(nonatomic, readonly) double highestVisibleX;
@property(nonatomic, readonly) double lowestVisibleX;
- (_Bool)isInvertedWithAxis:(long long)arg1;
- (ChartTransformer *)getTransformerForAxis:(long long)arg1;
@end
