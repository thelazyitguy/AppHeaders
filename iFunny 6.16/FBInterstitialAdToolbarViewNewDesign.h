//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FBInterstitialAdToolbarView.h>

@class FBAdToolbarConfiguration, UIButton, UIImageView, UILabel, UIStackView, UIView;
@protocol FBAdFunnelLoggingDelegate;

@interface FBInterstitialAdToolbarViewNewDesign : FBInterstitialAdToolbarView
{
    UILabel *_titleLabel;
    UILabel *_sponsoredLabel;
    UIImageView *_iconImageView;
    UILabel *_closeHintLabel;
    UIView *_closeButtonContainer;
    UIView *_rightButtonsContainer;
    UIStackView *_rightButtonsStackView;
    UIButton *_rightCombinedButton;
    FBAdToolbarConfiguration *_configuration;
    id <FBAdFunnelLoggingDelegate> _funnelLoggerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBAdFunnelLoggingDelegate> funnelLoggerDelegate; // @synthesize funnelLoggerDelegate=_funnelLoggerDelegate;
@property(retain, nonatomic) FBAdToolbarConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIButton *rightCombinedButton; // @synthesize rightCombinedButton=_rightCombinedButton;
@property(retain, nonatomic) UIStackView *rightButtonsStackView; // @synthesize rightButtonsStackView=_rightButtonsStackView;
@property(retain, nonatomic) UIView *rightButtonsContainer; // @synthesize rightButtonsContainer=_rightButtonsContainer;
@property(retain, nonatomic) UIView *closeButtonContainer; // @synthesize closeButtonContainer=_closeButtonContainer;
@property(retain, nonatomic) UILabel *closeHintLabel; // @synthesize closeHintLabel=_closeHintLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *sponsoredLabel; // @synthesize sponsoredLabel=_sponsoredLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)closeButton;
- (void)setCloseButtonStyle:(long long)arg1;
- (void)setInlineClientToken:(id)arg1;
- (id)adChoicesButton;
- (void)closeButtonTapped:(id)arg1;
- (void)infoButtonTapped:(id)arg1;
- (void)setAdIconType:(long long)arg1;
- (id)adInfoButton;
- (double)toolbarHeight;
- (void)setForcedViewTime:(CDStruct_1b6d18a9)arg1;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)disableForcedView;
- (struct CGRect)rightButtonRect;
- (void)updateHintTextIfNeeded;
- (void)setup;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

