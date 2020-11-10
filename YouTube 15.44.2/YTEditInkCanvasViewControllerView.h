//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKView.h>

@class GIMMe, UIView, YTEditInkMenuView, YTEditInkPenSizeSlider, YTTimedAction;

@interface YTEditInkCanvasViewControllerView : GLKView
{
    YTTimedAction *_delayAnimationAction;
    _Bool _tracking;
    _Bool _displayColorPicker;
    _Bool _displayPenSizeSlider;
    GIMMe *_gimme;
    YTEditInkMenuView *_menuView;
    UIView *_colorPickerView;
    YTEditInkPenSizeSlider *_inkSizeSliderView;
}

- (void).cxx_destruct;
@property(nonatomic, getter=shouldDisplayPenSizeSlider) _Bool displayPenSizeSlider; // @synthesize displayPenSizeSlider=_displayPenSizeSlider;
@property(nonatomic, getter=shouldDisplayColorPicker) _Bool displayColorPicker; // @synthesize displayColorPicker=_displayColorPicker;
@property(nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(readonly, nonatomic) YTEditInkPenSizeSlider *inkSizeSliderView; // @synthesize inkSizeSliderView=_inkSizeSliderView;
@property(retain, nonatomic) UIView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(readonly, nonatomic) YTEditInkMenuView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)performTrackingAnimation;
- (void)updateColorPickerAndPenSizeUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
