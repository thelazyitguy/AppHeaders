//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOPickerControl-Protocol.h"

@class GOODatePickerColorPalette, NSArray, NSCalendar, NSDate, NSString, UIImpactFeedbackGenerator, UILabel;
@protocol GOOTimeClockViewDelegate;

@interface GOOTimeClockView : UIView <GOOPickerControl>
{
    NSArray *_numberLabels;
    UILabel *_selectedLabel;
    UIView *_armContainerView;
    UIView *_centerView;
    UIView *_selectionView;
    UIView *_armView;
    NSCalendar *_calendar;
    double _lastAngle;
    _Bool _hapticsEnabled;
    long long _style;
    GOODatePickerColorPalette *_colorPalette;
    NSDate *_date;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _selectionStyle;
    id <GOOTimeClockViewDelegate> _delegate;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) __weak id <GOOTimeClockViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) _Bool hapticsEnabled; // @synthesize hapticsEnabled=_hapticsEnabled;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) GOODatePickerColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)setArmTransformWithAngle:(double)arg1;
- (void)setDate:(id)arg1 animated:(_Bool)arg2;
- (void)updateDateForLocation:(struct CGPoint)arg1;
- (id)labelForTickIndex:(unsigned long long)arg1;
- (long long)numberOfIntervals;
- (long long)tickIndexForAngle:(double)arg1;
- (double)angleForLocation:(struct CGPoint)arg1;
- (id)labelTextForIndex:(long long)arg1;
- (void)updateForCurrentSelectedDateAnimated:(_Bool)arg1;
- (void)updateForCurrentSelectionStyle;
- (void)updateForCurrentColorPalatte;
- (void)updateSelectedLabel;
- (void)handlePanEnd:(id)arg1;
- (void)handlePanChanged:(id)arg1;
- (void)didPan:(id)arg1;
- (void)didTapView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 calendar:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
