//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class FNNativeAdImageView, NSMutableArray, UIImageView, UILabel, UIView;

@protocol NativeAdView <NSObject>
@property(nonatomic) struct CGSize mediaViewSize;
@property(retain, nonatomic) UIImageView *privacyView;
@property(retain, nonatomic) NSMutableArray *starImageViews;
@property(retain, nonatomic) UILabel *actionLabel;
@property(retain, nonatomic) UILabel *bottomLabel;
@property(retain, nonatomic) UILabel *bodyLabel;
@property(retain, nonatomic) UILabel *adsLabel;
@property(retain, nonatomic) UILabel *titleLabel;
@property(retain, nonatomic) UIView *starsView;
@property(retain, nonatomic) FNNativeAdImageView *iconImageView;
@property(retain, nonatomic) UIView *nativeMediaView;
@property(retain, nonatomic) FNNativeAdImageView *nativeImageView;
@property(retain, nonatomic) UIView *mainView;
@property(nonatomic) double maxHeight;
- (struct CGRect)adViewBounds;
- (void)setAdViewFrame:(struct CGRect)arg1;
- (void)addView:(UIView *)arg1;
@end
