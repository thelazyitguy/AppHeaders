//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UILabel, UIView;

@interface BBInputCellButtonView : UIControl
{
    NSString *_promptText;
    NSString *_infoText;
    UILabel *_promptLabel;
    UILabel *_infoLabel;
    UIView *_chevronView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(retain, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
