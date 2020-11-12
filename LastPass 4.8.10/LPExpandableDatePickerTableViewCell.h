//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LPTableViewModelCell.h"

#import "MeasureableTableViewCell-Protocol.h"

@class NSString, UIControl, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol LPUIDatePickerProtocol;

@interface LPExpandableDatePickerTableViewCell : LPTableViewModelCell <MeasureableTableViewCell>
{
    _Bool _isExpanded;
    UILabel *_label;
    UIControl<LPUIDatePickerProtocol> *_datePicker;
    NSString *_datePickerType;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_rowOverlay;
}

- (void).cxx_destruct;
@property(readonly) UIView *rowOverlay; // @synthesize rowOverlay=_rowOverlay;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSString *datePickerType; // @synthesize datePickerType=_datePickerType;
@property(retain, nonatomic) UIControl<LPUIDatePickerProtocol> *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)datePicker_valueChanged:(id)arg1;
- (void)cellTapped:(id)arg1;
- (void)setValueLabel;
- (void)load;
- (double)measureHeightForWidth:(double)arg1;
- (void)layoutForWidth:(double)arg1;
- (void)removeGestureRecognizers;
- (void)addGestureRecognizers;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithReuseIdentififer:(id)arg1;

@end
