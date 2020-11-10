//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class TFNTwitterUserDataSource, TIPImagePipeline;
@protocol T1UserViewModel;

@interface T1UserBannerImageView : UIImageView
{
    TFNTwitterUserDataSource *_userDataSource;
    id <T1UserViewModel> _userViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <T1UserViewModel> userViewModel; // @synthesize userViewModel=_userViewModel;
@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
- (void)_t1_resetUsers;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline;
- (void)_commonInitT1UserBannerImageView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

