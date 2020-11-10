//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, SPTDrivingModeSliderView, UILabel;
@protocol SPTDrivingModeDurationViewDataSource, SPTDrivingModeDurationViewDelegate;

@interface SPTDrivingModeDurationView : UIView
{
    _Bool _labelsHidden;
    id <SPTDrivingModeDurationViewDelegate> _delegate;
    SPTDrivingModeSliderView *_progressSlider;
    UILabel *_timeRemainingLabel;
    UILabel *_timeTakenLabel;
    CADisplayLink *_displayLink;
    id <SPTDrivingModeDurationViewDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTDrivingModeDurationViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) UILabel *timeTakenLabel; // @synthesize timeTakenLabel=_timeTakenLabel;
@property(readonly, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(readonly, nonatomic) SPTDrivingModeSliderView *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(nonatomic) __weak id <SPTDrivingModeDurationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool labelsHidden; // @synthesize labelsHidden=_labelsHidden;
- (id)description;
- (void)dealloc;
- (void)progressSliderTouchCancel:(id)arg1;
- (void)progressSliderTouchBegin:(id)arg1;
- (void)progressSliderValueScrubbed:(id)arg1;
- (void)progressSliderValueChanged:(id)arg1;
- (void)progressSliderTapped:(id)arg1;
- (void)onDisplayLink:(id)arg1;
- (void)setupSliderGestureRecognizers;
- (void)setupSlider;
- (void)setupLabels;
- (void)setupDisplayLink;
- (void)updateProgressSlider;
- (void)stopUpdatingDurationLabels;
- (void)startUpdatingDurationLabels;
- (void)updateDurationLabels;
- (void)reloadData;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 dataSource:(id)arg2;

@end

