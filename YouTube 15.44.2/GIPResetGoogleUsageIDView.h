//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCButton, NSAttributedString, NSString, UITextView;

@interface GIPResetGoogleUsageIDView : UIView
{
    CDUnknownBlockType _onResetPressed;
    NSAttributedString *_attributedText;
    NSString *_buttonTitle;
    UITextView *_textView;
    MDCButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MDCButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)buttonPressed:(id)arg1;
- (void)applyContainerScheme:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)flashScrollIndicators;
- (id)initWithText:(id)arg1 buttonTitle:(id)arg2 onResetPressed:(CDUnknownBlockType)arg3;

@end
