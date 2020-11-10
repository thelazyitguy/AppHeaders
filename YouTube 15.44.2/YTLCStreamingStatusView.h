//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, YTLCStreamingBadgeView;

@interface YTLCStreamingStatusView : UIView
{
    UIImageView *_viewerCountImageView;
    UIImageView *_thumbCountImageView;
    UIImageView *_totalPurchasedAmountImageView;
    UIView *_analyticsWrapperView;
    UILabel *_connectionLabel;
    NSString *_concurrentViewersString;
    NSString *_likesString;
    NSString *_totalPurchasedAmountString;
    long long _statusCode;
    YTLCStreamingBadgeView *_timerBadgeView;
    UILabel *_viewerCountLabel;
    UILabel *_thumbCountLabel;
    UILabel *_totalPurchasedAmountLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *totalPurchasedAmountLabel; // @synthesize totalPurchasedAmountLabel=_totalPurchasedAmountLabel;
@property(retain, nonatomic) UILabel *thumbCountLabel; // @synthesize thumbCountLabel=_thumbCountLabel;
@property(retain, nonatomic) UILabel *viewerCountLabel; // @synthesize viewerCountLabel=_viewerCountLabel;
@property(retain, nonatomic) YTLCStreamingBadgeView *timerBadgeView; // @synthesize timerBadgeView=_timerBadgeView;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *totalPurchasedAmountString; // @synthesize totalPurchasedAmountString=_totalPurchasedAmountString;
@property(copy, nonatomic) NSString *likesString; // @synthesize likesString=_likesString;
@property(copy, nonatomic) NSString *concurrentViewersString; // @synthesize concurrentViewersString=_concurrentViewersString;
- (void)layoutSubviewsWithoutAnimation;
- (struct CGSize)connectionLabelSizeThatFits:(struct CGSize)arg1 offsetFromLeft:(double)arg2;
- (id)analyticsAccessibilityLabel;
- (struct CGSize)iconSize;
- (void)setDuration:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect analyticsFrame;
- (void)hideConnectionLabel;
- (void)showConnectionLabelWithString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)personImageHeight;
- (double)statImageHeight;
- (double)liveAvatarImageHeight;

@end

