//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class STPTheme, UIImageView, UILabel;
@protocol STPPaymentOption;

@interface STPPaymentOptionTableViewCell : UITableViewCell
{
    id <STPPaymentOption> _paymentOption;
    STPTheme *_theme;
    UIImageView *_leftIcon;
    UILabel *_titleLabel;
    UIImageView *_checkmarkIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *checkmarkIcon; // @synthesize checkmarkIcon=_checkmarkIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(retain, nonatomic) STPTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <STPPaymentOption> paymentOption; // @synthesize paymentOption=_paymentOption;
- (id)buildAttributedStringWithBrand:(long long)arg1 last4:(id)arg2 selected:(_Bool)arg3;
- (id)buildAttributedStringWithFPXBankBrand:(long long)arg1 selected:(_Bool)arg2;
- (id)buildAttributedStringWithCardPaymentMethodParams:(id)arg1 selected:(_Bool)arg2;
- (id)buildAttributedStringWithCardPaymentMethod:(id)arg1 selected:(_Bool)arg2;
- (id)buildAttributedStringWithCardSource:(id)arg1 selected:(_Bool)arg2;
- (id)buildAttributedStringWithCard:(id)arg1 selected:(_Bool)arg2;
- (id)buildAttributedStringWithPaymentOption:(id)arg1 selected:(_Bool)arg2;
- (id)primaryColorForPaymentOptionWithSelected:(_Bool)arg1;
- (void)configureForFPXRowWithTheme:(id)arg1;
- (void)configureWithPaymentOption:(id)arg1 theme:(id)arg2 selected:(_Bool)arg3;
- (void)configureForNewCardRowWithTheme:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

