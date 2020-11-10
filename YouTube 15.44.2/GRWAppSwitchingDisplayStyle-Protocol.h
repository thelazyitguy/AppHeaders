//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GRWAppSwitchingFloatingButton, MDCButton, NSString, UIButton, UIColor, UIImage, UIView;
@protocol GRWImageViewProtocol;

@protocol GRWAppSwitchingDisplayStyle <NSObject>
@property(readonly, nonatomic) UIImage *shareIcon;
@property(readonly, nonatomic) UIImage *editIcon;
@property(readonly, nonatomic) unsigned long long appSwitchingSettingsCollectionViewStyle;
@property(readonly, nonatomic) _Bool appSwitchingSettingsHidesFooterSeparators;
@property(readonly, nonatomic) _Bool appSwitchingHidesCellSeparators;
- (GRWAppSwitchingFloatingButton *)appSwitchingFloatingButtonWithPrimaryColor:(UIColor *)arg1 backgroundColor:(UIColor *)arg2 title:(NSString *)arg3 icon:(UIImage *)arg4;
- (MDCButton *)appSwitchingFeaturedAppActionButton;
- (UIView<GRWImageViewProtocol> *)appSwitchingFeaturedAppIconImageView;
- (UIButton *)appSwitchingSettingsCellActionButton;
- (UIButton *)appSwitchingCellActionButton;
@end

