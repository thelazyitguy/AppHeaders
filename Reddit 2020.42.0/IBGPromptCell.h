//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface IBGPromptCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UIView *_notificationBubbleView;
    UILabel *_notificationCountLabel;
    UILabel *_titleLabel;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorViewHeightConstraint;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak NSLayoutConstraint *separatorViewHeightConstraint; // @synthesize separatorViewHeightConstraint=_separatorViewHeightConstraint;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *notificationCountLabel; // @synthesize notificationCountLabel=_notificationCountLabel;
@property(nonatomic) __weak UIView *notificationBubbleView; // @synthesize notificationBubbleView=_notificationBubbleView;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)awakeFromNib;

@end

