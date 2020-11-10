//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTokenKeyboardEventTextField.h>

@class UIColor, UILabel;

@interface TFNTokenTextField : TFNTokenKeyboardEventTextField
{
    UILabel *_placeholderLabel;
    struct CGPoint _cursorPosition;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint cursorPosition; // @synthesize cursorPosition=_cursorPosition;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)layoutSubviews;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (id)accessibilityValue;
@property(retain, nonatomic) UIColor *placeholderColor;
@property(nonatomic) _Bool hidesPlaceholder;
- (double)editingHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

