//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDatePicker.h>

@class UIColor;

@interface TFNDatePicker : UIDatePicker
{
    UIColor *_labelTextColor;
    UIColor *_disabledLabelTextColor;
    UIColor *_selectionTextColor;
    UIColor *_selectionTodayTextColor;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *selectionTodayTextColor; // @synthesize selectionTodayTextColor=_selectionTodayTextColor;
@property(retain, nonatomic) UIColor *selectionTextColor; // @synthesize selectionTextColor=_selectionTextColor;
@property(retain, nonatomic) UIColor *disabledLabelTextColor; // @synthesize disabledLabelTextColor=_disabledLabelTextColor;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
- (void)sizeToFitInputView;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

