//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MDCTextInputControllerBase.h>

@class NSLayoutConstraint;

@interface MDCTextInputControllerOutlinedTextArea : MDCTextInputControllerBase
{
    NSLayoutConstraint *_placeholderTop;
}

+ (void)setRoundedCornersDefault:(unsigned long long)arg1;
+ (unsigned long long)roundedCornersDefault;
+ (id)gmdc_controllerWithTextInput:(id)arg1 scheme:(id)arg2;
+ (id)gmdc_controllerWithColorScheme:(id)arg1 textInput:(id)arg2;
+ (id)gmdc_controllerWithTextInput:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *placeholderTop; // @synthesize placeholderTop=_placeholderTop;
- (double)underlineOffsetWithInsets:(struct UIEdgeInsets)arg1 widthHint:(double)arg2;
- (void)updateLayout;
- (void)updateBorder;
- (struct UIEdgeInsets)textInsets:(struct UIEdgeInsets)arg1 withSizeThatFitsWidthHint:(double)arg2;
- (void)setFloatingEnabled:(_Bool)arg1;
- (_Bool)isFloatingEnabled;
- (id)initWithTextInput:(id)arg1;

@end
