//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNFormAppearance, UILabel;

@interface TFNFormFieldErrorView : UIView
{
    UILabel *_textLabel;
    TFNFormAppearance *_appearance;
}

+ (double)heightForMessage:(id)arg1 withFormFieldWidth:(double)arg2 appearance:(id)arg3 layoutMetrics:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNFormAppearance *appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)addErrorViewMaskWithVisibleHeight:(double)arg1 layoutMetrics:(id)arg2 replaceIfExists:(_Bool)arg3;
- (void)animateErrorViewMaskForLayoutMetrics:(id)arg1 showError:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

