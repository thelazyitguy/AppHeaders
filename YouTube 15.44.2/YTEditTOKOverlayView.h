//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GIMMe, MDCSlider;

@interface YTEditTOKOverlayView : UIView
{
    _Bool _overlayHidden;
    GIMMe *_gimme;
    UIView *_editTextColorPickerView;
    MDCSlider *_textSizeSliderView;
    UIView *_editTextMenuView;
    double _textFontSizeSliderHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(nonatomic) double textFontSizeSliderHeight; // @synthesize textFontSizeSliderHeight=_textFontSizeSliderHeight;
@property(retain, nonatomic) UIView *editTextMenuView; // @synthesize editTextMenuView=_editTextMenuView;
@property(retain, nonatomic) MDCSlider *textSizeSliderView; // @synthesize textSizeSliderView=_textSizeSliderView;
@property(retain, nonatomic) UIView *editTextColorPickerView; // @synthesize editTextColorPickerView=_editTextColorPickerView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
