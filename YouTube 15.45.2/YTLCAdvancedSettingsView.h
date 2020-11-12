//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, GOOMultilineTextField, NSArray, UIScrollView, YTLCNavigationBarView, YTLCPreferenceSelectButton, YTLCPreferenceToggleButton;

@interface YTLCAdvancedSettingsView : UIView
{
    UIScrollView *_scrollView;
    UIView *_previewView;
    double _keyboardHeight;
    NSArray *_preferenceButtons;
    CALayer *_descriptionBorderBottomLayer;
    _Bool _editingDescription;
    _Bool _landscape;
    YTLCPreferenceToggleButton *_chatButton;
    YTLCPreferenceToggleButton *_sponsorsOnlyLiveChatModeButton;
    YTLCPreferenceToggleButton *_ageRestrictionButton;
    YTLCPreferenceToggleButton *_paidProductPlacementButton;
    YTLCPreferenceToggleButton *_paidProductPlacementOverlayButton;
    YTLCPreferenceToggleButton *_defaultMonetizationUsagePolicyButton;
    YTLCPreferenceSelectButton *_monetizationUsagePolicyButton;
    GOOMultilineTextField *_descriptionTextField;
    YTLCNavigationBarView *_navigationBarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTLCNavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(nonatomic, getter=isLandscape) _Bool landscape; // @synthesize landscape=_landscape;
@property(retain, nonatomic) GOOMultilineTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(retain, nonatomic) YTLCPreferenceSelectButton *monetizationUsagePolicyButton; // @synthesize monetizationUsagePolicyButton=_monetizationUsagePolicyButton;
@property(retain, nonatomic) YTLCPreferenceToggleButton *defaultMonetizationUsagePolicyButton; // @synthesize defaultMonetizationUsagePolicyButton=_defaultMonetizationUsagePolicyButton;
@property(retain, nonatomic) YTLCPreferenceToggleButton *paidProductPlacementOverlayButton; // @synthesize paidProductPlacementOverlayButton=_paidProductPlacementOverlayButton;
@property(retain, nonatomic) YTLCPreferenceToggleButton *paidProductPlacementButton; // @synthesize paidProductPlacementButton=_paidProductPlacementButton;
@property(retain, nonatomic) YTLCPreferenceToggleButton *ageRestrictionButton; // @synthesize ageRestrictionButton=_ageRestrictionButton;
@property(retain, nonatomic) YTLCPreferenceToggleButton *sponsorsOnlyLiveChatModeButton; // @synthesize sponsorsOnlyLiveChatModeButton=_sponsorsOnlyLiveChatModeButton;
@property(retain, nonatomic) YTLCPreferenceToggleButton *chatButton; // @synthesize chatButton=_chatButton;
- (void)updateScrollViewContentSize;
- (void)animateLayoutChange;
- (void)layoutOptionsWithFullDescriptionsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)resizeTitleTextToFit;
- (void)showNormalLayoutWithAnimationDuration:(double)arg1 animationCurveOptions:(unsigned long long)arg2;
- (void)showDescriptionEditorLayoutWithKeyboardHeight:(double)arg1 animationDuration:(double)arg2 animationCurveOptions:(unsigned long long)arg3;
- (void)setPreviewView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
