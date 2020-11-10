//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface GOODatePickerColorPalette : NSObject
{
    UIColor *_selectionColor;
    UIColor *_backgroundColor;
    UIColor *_headerColor;
    UIColor *_chevronColor;
    UIColor *_textColor;
    UIColor *_weekdayColor;
    UIColor *_clockColor;
    UIColor *_primaryTitleColor;
    UIColor *_secondaryTitleColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *secondaryTitleColor; // @synthesize secondaryTitleColor=_secondaryTitleColor;
@property(readonly, nonatomic) UIColor *primaryTitleColor; // @synthesize primaryTitleColor=_primaryTitleColor;
@property(readonly, nonatomic) UIColor *clockColor; // @synthesize clockColor=_clockColor;
@property(readonly, nonatomic) UIColor *weekdayColor; // @synthesize weekdayColor=_weekdayColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIColor *chevronColor; // @synthesize chevronColor=_chevronColor;
@property(readonly, nonatomic) UIColor *headerColor; // @synthesize headerColor=_headerColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
- (id)initWithColorStyle:(long long)arg1;

@end

