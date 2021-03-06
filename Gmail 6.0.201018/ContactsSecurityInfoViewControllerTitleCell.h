//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;
@protocol HUBColorScheme;

@interface ContactsSecurityInfoViewControllerTitleCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    id <HUBColorScheme> _colorScheme;
    _Bool _expanded;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
- (void)setImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 expanded:(_Bool)arg4 canExpand:(_Bool)arg5;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

