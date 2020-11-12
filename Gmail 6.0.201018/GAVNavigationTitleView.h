//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIStackView;

@interface GAVNavigationTitleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_containerStackView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIStackView *containerStackView; // @synthesize containerStackView=_containerStackView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateContainerStackViewAccessibilityLabel;
- (void)updateSubtitleTextColor:(id)arg1;
- (void)updateTitleTextColor:(id)arg1;
- (void)updateSubtitle:(id)arg1;
- (void)updateTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subtitle:(id)arg3;

@end
