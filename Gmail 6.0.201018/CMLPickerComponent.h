//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMLViewComponent.h"

@class CMLPicker, NSArray, UIColor, UIFont;

@interface CMLPickerComponent : CMLViewComponent
{
    CMLPicker *picker_;
    _Bool disabled_;
    UIFont *font_;
    UIColor *textColor_;
    UIColor *pickerBackgroundColor_;
    long long selectedIndex_;
    NSArray *items_;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=disabled_;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=items_;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=selectedIndex_;
@property(readonly, nonatomic) UIColor *pickerBackgroundColor; // @synthesize pickerBackgroundColor=pickerBackgroundColor_;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=textColor_;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=font_;
- (void)tearDown;
- (_Bool)shouldAddGestureRecognizer;
- (id)accessibilityCustomActions;
- (id)createView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applyComponent:(id)arg1;

@end
