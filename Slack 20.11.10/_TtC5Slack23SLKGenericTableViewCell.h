//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5Slack27SLKGenericBaseTableViewCell.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UISwitch, UIView;
@protocol _TtP5Slack31SLKGenericTableViewCellDelegate_;

@interface _TtC5Slack23SLKGenericTableViewCell : _TtC5Slack27SLKGenericBaseTableViewCell
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: mainLabel
    // Error parsing type: , name: detailLabel
    // Error parsing type: , name: accessorySwitch
    // Error parsing type: , name: chevron
    // Error parsing type: , name: checkmark
    // Error parsing type: , name: iconContainerView
    // Error parsing type: , name: detailLabelRightConstraint
    // Error parsing type: , name: mainLabelLeftConstraint
    // Error parsing type: , name: iconImageLeftConstraint
    // Error parsing type: , name: iconView
    // Error parsing type: , name: twoByTwoTeamIcon
    // Error parsing type: , name: twoByTwoTeamIconSize
    // Error parsing type: , name: appendSelectedTextForVoiceOver
    // Error parsing type: , name: accessory
    // Error parsing type: , name: accessorySwitchIsOn
    // Error parsing type: , name: icon
    // Error parsing type: , name: iconTintColor
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)switched:(id)arg1;
@property(nonatomic) _Bool accessorySwitchIsOn; // @synthesize accessorySwitchIsOn;
@property(nonatomic) long long accessory; // @synthesize accessory;
- (void)accessibilityDoubleTap;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic) _Bool appendSelectedTextForVoiceOver; // @synthesize appendSelectedTextForVoiceOver;
@property(nonatomic, retain) NSLayoutConstraint *iconImageLeftConstraint; // @synthesize iconImageLeftConstraint;
@property(nonatomic, retain) NSLayoutConstraint *mainLabelLeftConstraint; // @synthesize mainLabelLeftConstraint;
@property(nonatomic, retain) NSLayoutConstraint *detailLabelRightConstraint; // @synthesize detailLabelRightConstraint;
@property(nonatomic, retain) UIView *iconContainerView; // @synthesize iconContainerView;
@property(nonatomic, retain) UIImageView *checkmark; // @synthesize checkmark;
@property(nonatomic, retain) UIImageView *chevron; // @synthesize chevron;
@property(nonatomic, retain) UISwitch *accessorySwitch; // @synthesize accessorySwitch;
@property(nonatomic, retain) UILabel *detailLabel; // @synthesize detailLabel;
@property(nonatomic, retain) UILabel *mainLabel; // @synthesize mainLabel;
@property(nonatomic) __weak id <_TtP5Slack31SLKGenericTableViewCellDelegate_> delegate; // @synthesize delegate;

@end

