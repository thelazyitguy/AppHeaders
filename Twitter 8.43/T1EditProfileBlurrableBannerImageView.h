//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UserBannerImageView.h>

@class UIImage;

@interface T1EditProfileBlurrableBannerImageView : T1UserBannerImageView
{
    UIImage *_customImage;
    UIImage *_fetchedImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *fetchedImage; // @synthesize fetchedImage=_fetchedImage;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
- (void)_t1_updateBaseImage;
- (void)setTip_fetchedImage:(id)arg1;
- (id)tip_fetchedImage;
- (void)setUserDataSource:(id)arg1;
- (void)_commonInitEditProfileBlurrableBannerImageView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
