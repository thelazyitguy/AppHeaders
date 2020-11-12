//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class EChartView, UILabel;

@interface EChartCollectionViewCell : UICollectionViewCell
{
    UILabel *_chartOverviewLabel;
    UILabel *_chartOverviewStatLabel;
    EChartView *_chartView;
    UILabel *_chartXAxisLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *chartXAxisLabel; // @synthesize chartXAxisLabel=_chartXAxisLabel;
@property(nonatomic) __weak EChartView *chartView; // @synthesize chartView=_chartView;
@property(nonatomic) __weak UILabel *chartOverviewStatLabel; // @synthesize chartOverviewStatLabel=_chartOverviewStatLabel;
@property(nonatomic) __weak UILabel *chartOverviewLabel; // @synthesize chartOverviewLabel=_chartOverviewLabel;
- (void)loadChartData:(id)arg1;
- (void)setChartXAxisLabelText:(id)arg1;
- (void)configureAppearance;
- (void)awakeFromNib;

@end
