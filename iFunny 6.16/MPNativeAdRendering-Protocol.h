//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class MPNativeAdRenderingImageLoader, NSDictionary, NSNumber, NSString, UIImageView, UILabel, UINib, UIView;

@protocol MPNativeAdRendering <NSObject>

@optional
+ (UINib *)nibForAd;
+ (NSString *)localizedSponsoredByTextWithSponsorName:(NSString *)arg1;
- (void)layoutCustomAssetsWithProperties:(NSDictionary *)arg1 imageLoader:(MPNativeAdRenderingImageLoader *)arg2;
- (void)layoutStarRating:(NSNumber *)arg1;
- (UIImageView *)nativePrivacyInformationIconImageView;
- (UILabel *)nativeCallToActionTextLabel;
- (UIView *)nativeVideoView;
- (UILabel *)nativeSponsoredByCompanyTextLabel;
- (UIImageView *)nativeMainImageView;
- (UIImageView *)nativeIconImageView;
- (UILabel *)nativeTitleTextLabel;
- (UILabel *)nativeMainTextLabel;
@end
