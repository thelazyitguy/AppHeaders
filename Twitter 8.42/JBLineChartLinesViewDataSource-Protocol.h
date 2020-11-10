//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JBChart/NSObject-Protocol.h>

@class CAGradientLayer, JBLineChartLinesView, NSArray, UIColor;

@protocol JBLineChartLinesViewDataSource <NSObject>
- (CAGradientLayer *)lineChartLinesView:(JBLineChartLinesView *)arg1 selectionFillGradientForLineAtLineIndex:(unsigned long long)arg2;
- (UIColor *)lineChartLinesView:(JBLineChartLinesView *)arg1 selectionFillColorForLineAtLineIndex:(unsigned long long)arg2;
- (CAGradientLayer *)lineChartLinesView:(JBLineChartLinesView *)arg1 selectionGradientForLineAtLineIndex:(unsigned long long)arg2;
- (UIColor *)lineChartLinesView:(JBLineChartLinesView *)arg1 selectionColorForLineAtLineIndex:(unsigned long long)arg2;
- (double)lineChartLinesView:(JBLineChartLinesView *)arg1 widthForLineAtLineIndex:(unsigned long long)arg2;
- (CAGradientLayer *)lineChartLinesView:(JBLineChartLinesView *)arg1 fillGradientForLineAtLineIndex:(unsigned long long)arg2;
- (UIColor *)lineChartLinesView:(JBLineChartLinesView *)arg1 fillColorForLineAtLineIndex:(unsigned long long)arg2;
- (CAGradientLayer *)lineChartLinesView:(JBLineChartLinesView *)arg1 gradientForLineAtLineIndex:(unsigned long long)arg2;
- (UIColor *)lineChartLinesView:(JBLineChartLinesView *)arg1 colorForLineAtLineIndex:(unsigned long long)arg2;
- (double)lineChartLinesView:(JBLineChartLinesView *)arg1 dimmedSelectionOpacityAtLineIndex:(unsigned long long)arg2;
- (NSArray *)lineChartLinesForLineChartLinesView:(JBLineChartLinesView *)arg1;
@end

