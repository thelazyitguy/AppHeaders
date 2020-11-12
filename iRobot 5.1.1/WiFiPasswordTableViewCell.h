//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UITextField;
@protocol WiFiPasswordTableViewCellDelegate;

@interface WiFiPasswordTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_wrongPasswordLabel;
    UITextField *_passwordTextField;
    UIButton *_noPasswordCheckBox;
    UILabel *_noPasswordLabel;
    id <WiFiPasswordTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WiFiPasswordTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *noPasswordLabel; // @synthesize noPasswordLabel=_noPasswordLabel;
@property(nonatomic) __weak UIButton *noPasswordCheckBox; // @synthesize noPasswordCheckBox=_noPasswordCheckBox;
@property(nonatomic) __weak UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak UILabel *wrongPasswordLabel; // @synthesize wrongPasswordLabel=_wrongPasswordLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)configureAccessibility;
- (void)checkboxPressed:(id)arg1;
- (void)commonInit;
- (void)awakeFromNib;

@end
