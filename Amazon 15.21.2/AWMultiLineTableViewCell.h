//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface AWMultiLineTableViewCell : UITableViewCell
{
}

+ (id)multiLineCellForTableView:(id)arg1 reuseIdentifier:(id)arg2 text:(id)arg3 font:(id)arg4 color:(id)arg5 accessoryType:(long long)arg6 extraLeftPadding:(double)arg7;
+ (double)heightForMultiLineCellForTableView:(id)arg1 text:(id)arg2 font:(id)arg3 accessoryType:(long long)arg4 extraLeftPadding:(double)arg5;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *multiLineLabel;

@end

