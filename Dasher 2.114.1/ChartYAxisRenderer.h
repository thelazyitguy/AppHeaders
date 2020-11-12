//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/ChartAxisRendererBase.h>

@interface ChartYAxisRenderer : ChartAxisRendererBase
{
}

- (id)initWithViewPortHandler:(id)arg1 transformer:(id)arg2 axis:(id)arg3;
- (void)renderLimitLinesWithContext:(struct CGContext *)arg1;
- (void)drawZeroLineWithContext:(struct CGContext *)arg1;
- (id)transformedPositions;
- (void)drawGridLineWithContext:(struct CGContext *)arg1 position:(struct CGPoint)arg2;
@property(nonatomic, readonly) struct CGRect gridClippingRect;
- (void)renderGridLinesWithContext:(struct CGContext *)arg1;
- (void)renderAxisLineWithContext:(struct CGContext *)arg1;
- (void)renderAxisLabelsWithContext:(struct CGContext *)arg1;
- (id)initWithViewPortHandler:(id)arg1 yAxis:(id)arg2 transformer:(id)arg3;

@end
