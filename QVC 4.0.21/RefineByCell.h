//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface RefineByCell : UITableViewCell
{
    UILabel *_tLabel;
    UIView *_lineView;
    NSLayoutConstraint *_labelLeftPadding;
    NSLayoutConstraint *_lineLeftPadding;
}

+ (double)defaultHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) __weak NSLayoutConstraint *lineLeftPadding; // @synthesize lineLeftPadding=_lineLeftPadding;
@property(nonatomic) __weak NSLayoutConstraint *labelLeftPadding; // @synthesize labelLeftPadding=_labelLeftPadding;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *tLabel; // @synthesize tLabel=_tLabel;
- (void)layoutSubviews;
- (void)setSeparatorColor:(id)arg1;
- (void)setTitleWithAttributedString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setLevelValue:(double)arg1;

@end
