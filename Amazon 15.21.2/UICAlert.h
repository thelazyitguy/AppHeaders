//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSAttributedString, NSMutableDictionary, UICArrowView, UIImage, UIImageView, UILabel;
@protocol UICAlertViewDelegate;

@interface UICAlert : UIView
{
    _Bool _showDisclosureIndicator;
    id <UICAlertViewDelegate> _delegate;
    UIImage *_alertIcon;
    NSAttributedString *_alertMessage;
    UIImageView *_alertIconView;
    UILabel *_alertMessageLabel;
    UIView *_alertMessageView;
    UICArrowView *_disclosureIndicator;
    CALayer *_innerLayer;
    NSMutableDictionary *_disclosureIndicatorColors;
}

@property(retain, nonatomic) NSMutableDictionary *disclosureIndicatorColors; // @synthesize disclosureIndicatorColors=_disclosureIndicatorColors;
@property(nonatomic) CALayer *innerLayer; // @synthesize innerLayer=_innerLayer;
@property(retain, nonatomic) UICArrowView *disclosureIndicator; // @synthesize disclosureIndicator=_disclosureIndicator;
@property(retain, nonatomic) UIView *alertMessageView; // @synthesize alertMessageView=_alertMessageView;
@property(retain, nonatomic) UILabel *alertMessageLabel; // @synthesize alertMessageLabel=_alertMessageLabel;
@property(retain, nonatomic) UIImageView *alertIconView; // @synthesize alertIconView=_alertIconView;
@property(nonatomic) _Bool showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
@property(retain, nonatomic) NSAttributedString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain, nonatomic) UIImage *alertIcon; // @synthesize alertIcon=_alertIcon;
@property(nonatomic) __weak id <UICAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertMessageTapped:(id)arg1;
- (id)disclosureIndicatorColor;
- (void)setDisclosureIndicatorColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (struct CGSize)layoutMessageView:(struct CGSize)arg1 setFrames:(_Bool)arg2;
- (struct CGSize)layoutAttributes:(struct CGSize)arg1 setFrames:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initializeDisclosureIndicator;
- (id)createAlertMessageLabel;
- (id)createAlertMessageView;
- (id)createInnerlayer;
- (void)createAlertViewRect:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withAlertType:(long long)arg2 withMessage:(id)arg3;

@end
