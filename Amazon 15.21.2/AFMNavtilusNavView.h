//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXSubNavView.h"

@class CALayer, NSArray, NSDictionary, SDWebImageManager, UIButton, UIImageView, UILabel, UIView;

@interface AFMNavtilusNavView : SXSubNavView
{
    _Bool _interfaceInitialized;
    NSArray *_navtilusContent;
    NSDictionary *_navtilusContentDictionary;
    UIView *_leftVertical;
    UIView *_rightVertical;
    UIButton *_leftButton;
    UIImageView *_leftChevron;
    UIButton *_middleButton;
    UIButton *_rightButton;
    UIImageView *_programBrandingLogo;
    CALayer *_colorBar;
    UIView *_bottomSeparatorView;
    UILabel *_deliveryLabel;
    UILabel *_dateLabel;
    SDWebImageManager *_imageManager;
}

@property(retain, nonatomic) SDWebImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *deliveryLabel; // @synthesize deliveryLabel=_deliveryLabel;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) CALayer *colorBar; // @synthesize colorBar=_colorBar;
@property(nonatomic) _Bool interfaceInitialized; // @synthesize interfaceInitialized=_interfaceInitialized;
@property(retain, nonatomic) UIImageView *programBrandingLogo; // @synthesize programBrandingLogo=_programBrandingLogo;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *middleButton; // @synthesize middleButton=_middleButton;
@property(retain, nonatomic) UIImageView *leftChevron; // @synthesize leftChevron=_leftChevron;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *rightVertical; // @synthesize rightVertical=_rightVertical;
@property(retain, nonatomic) UIView *leftVertical; // @synthesize leftVertical=_leftVertical;
@property(retain, nonatomic) NSDictionary *navtilusContentDictionary; // @synthesize navtilusContentDictionary=_navtilusContentDictionary;
@property(retain, nonatomic) NSArray *navtilusContent; // @synthesize navtilusContent=_navtilusContent;
- (void).cxx_destruct;
- (void)setupReservationInfo:(id)arg1 textLines:(id)arg2 date:(id)arg3;
- (double)renderItemButton:(id)arg1 withContent:(id)arg2;
- (double)renderTextButton:(id)arg1 withContent:(id)arg2;
- (void)renderImageView:(id)arg1 withContent:(id)arg2;
- (double)renderImageButton:(id)arg1 withContent:(id)arg2;
- (double)renderButton:(id)arg1 withButton:(id)arg2;
- (void)hideButtons;
- (double)calcShopAislesMaxWidth:(double)arg1 stringWidth:(double)arg2 leftButtonX:(double)arg3 contentSize:(double)arg4;
- (double)setupProgramBrandingLogo:(id)arg1;
- (_Bool)shouldShowProgramBranding;
- (void)setupRightButton:(id)arg1;
- (double)setupMiddleButton:(id)arg1 leftButtonXValue:(double)arg2 navtilusContentSize:(double)arg3;
- (double)setupLeftButton:(id)arg1;
- (void)navtilusContentAutoLayout:(double)arg1 middleButtonFinalWidth:(double)arg2 navtilusContentSize:(double)arg3;
- (id)createFormatWithoutRightVertical:(double)arg1 middleButtonFinalWidth:(double)arg2;
- (id)createFormatWithProgramBrandingLogo:(double)arg1 middleButtonFinalWidth:(double)arg2;
- (id)createFormatWithRightVertical:(double)arg1 middleButtonFinalWidth:(double)arg2;
- (void)layoutContentFromDictionary;
- (void)newLayoutContent;
- (void)resetInterface;
- (void)setupInterface;
- (id)initWithFrame:(struct CGRect)arg1;

@end
