//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YOLayout;

@interface YOView : UIView
{
    YOLayout *_layout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YOLayout *layout; // @synthesize layout=_layout;
- (void)layoutView;
- (void)setNeedsLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewInit;

@end

