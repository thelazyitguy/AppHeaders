//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSNumberFormatter, UILabel;

@interface BadgeView : UIView
{
    UILabel *_label;
    NSNumberFormatter *_formatter;
    NSMutableArray *_emptyBadgeLabelConstaints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *emptyBadgeLabelConstaints; // @synthesize emptyBadgeLabelConstaints=_emptyBadgeLabelConstaints;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)manageViewSizeConstraints;
- (void)setBadgeStringValue:(id)arg1;
- (void)setBadgeValue:(long long)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)init;

@end
