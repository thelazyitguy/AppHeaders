//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTableViewCell.h>

@class UIButton, UIImageView, UILabel, UIStackView;

@interface GoldCoinMarketingPageHeaderCell : BaseTableViewCell
{
    CDUnknownBlockType _learnMore;
    UIImageView *_bannerImageView;
    UILabel *_headerTextLabel;
    UIButton *_learnMoreButton;
    UILabel *_saleTimerLabel;
    UILabel *_subheaderTextLabel;
    UIStackView *_timerStackView;
    UIImageView *_clock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) UIStackView *timerStackView; // @synthesize timerStackView=_timerStackView;
@property(retain, nonatomic) UILabel *subheaderTextLabel; // @synthesize subheaderTextLabel=_subheaderTextLabel;
@property(retain, nonatomic) UILabel *saleTimerLabel; // @synthesize saleTimerLabel=_saleTimerLabel;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UILabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(copy, nonatomic) CDUnknownBlockType learnMore; // @synthesize learnMore=_learnMore;
- (void)setupViews;
- (void)learnMoreButtonDidTap:(id)arg1;
- (void)configureWithViewModel:(id)arg1 learnMore:(CDUnknownBlockType)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

