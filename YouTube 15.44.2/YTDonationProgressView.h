//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YTDonationProgressBar, YTFormattedStringLabel;

@interface YTDonationProgressView : UIView
{
    YTDonationProgressBar *_progressBar;
    YTFormattedStringLabel *_matchLabel;
    YTFormattedStringLabel *_amountRaisedLabel;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setEntry:(id)arg1;
- (void)layoutSubviews;
- (void)setFormattedStringLabelDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

