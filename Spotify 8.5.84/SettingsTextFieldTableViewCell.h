//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTSettingsTableViewCell.h"

@class NSString, UITextField;

@interface SettingsTextFieldTableViewCell : SPTSettingsTableViewCell
{
    UITextField *_textField;
    NSString *_placeholder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyThemeLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
