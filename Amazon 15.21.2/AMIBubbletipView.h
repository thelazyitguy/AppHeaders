//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;
@protocol AMIBubbleTipDisplayConfig;

@interface AMIBubbletipView : UIView
{
    id <AMIBubbleTipDisplayConfig> _displayConfig;
    UIImageView *_arrowImageView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) id <AMIBubbleTipDisplayConfig> displayConfig; // @synthesize displayConfig=_displayConfig;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)attributedTextFromText:(id)arg1;
- (id)textLabelConstraints;
- (id)arrowImageViewConstraints;
- (void)setUpConstraints;
- (void)setUpViews;
- (void)applyDisplayConfig:(id)arg1;
@property(retain, nonatomic) NSString *text;
- (id)initWithDisplayConfig:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
