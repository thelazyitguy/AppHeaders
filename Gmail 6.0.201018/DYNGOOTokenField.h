//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTokenField.h"

@class UILabel;

@interface DYNGOOTokenField : GOOTokenField
{
    UILabel *_placeholderLabel;
}

- (void).cxx_destruct;
- (void)setPlaceholderColor:(id)arg1;
- (id)placeholderColor;
- (void)setPlaceholder:(id)arg1;
- (void)textFieldDidChange;
- (void)updateTextFieldPlaceholderText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
