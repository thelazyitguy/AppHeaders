//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class GBTBannerTextView, GBTVisualElement, HUBTextButton, NSLayoutConstraint, NSString, UIImageView, UIStackView;
@protocol GBTUserDataProcessingService, GBTVisualElementLoggerService, HUBColorScheme;

@interface GBTUserDataProcessingBannerView : UIView <UITextViewDelegate>
{
    id <GBTUserDataProcessingService> _userDataProcessingService;
    id <GBTVisualElementLoggerService> _visualElementLoggerService;
    id <HUBColorScheme> _colorScheme;
    UIView *_containerView;
    UIView *_borderView;
    UIView *_topBorderView;
    UIView *_separatorView;
    UIStackView *_stackView;
    UIStackView *_textStackView;
    UIView *_imageWrapper;
    UIImageView *_imageView;
    GBTBannerTextView *_textView;
    NSLayoutConstraint *_iconWidthContraint;
    HUBTextButton *_dismissButton;
    _Bool _dismissible;
    _Bool _didLogImpression;
    unsigned long long _bannerType;
    GBTVisualElement *_parentVisualElement;
}

+ (double)stackViewSpacingForType:(unsigned long long)arg1;
+ (double)iconWidthForType:(unsigned long long)arg1;
+ (unsigned long long)bannerLayoutForType:(unsigned long long)arg1;
+ (id)attributedStringWithFormat:(id)arg1 layout:(unsigned long long)arg2;
+ (id)attributedStringWithBannerType:(unsigned long long)arg1;
+ (unsigned long long)bannerTypeForNavigationType:(unsigned long long)arg1;
+ (double)heightWithBannerType:(unsigned long long)arg1 forWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets)arg3 isDismissible:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) GBTVisualElement *parentVisualElement; // @synthesize parentVisualElement=_parentVisualElement;
@property(retain, nonatomic) id <GBTVisualElementLoggerService> visualElementLoggerService; // @synthesize visualElementLoggerService=_visualElementLoggerService;
@property(retain, nonatomic) id <GBTUserDataProcessingService> userDataProcessingService; // @synthesize userDataProcessingService=_userDataProcessingService;
@property(nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
- (void)updateInGmailAsOptedIn;
- (void)setTitleLabelWithType:(unsigned long long)arg1;
- (void)setIconWithType:(unsigned long long)arg1;
- (void)setUpConstraints;
- (void)setUpViews;
- (void)didTapDismiss:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)setVisualElementWithType:(unsigned long long)arg1;
- (void)updateBannerForWidth:(double)arg1 layoutMargins:(struct UIEdgeInsets)arg2 inHeaderForTableView:(id)arg3;
- (void)updateHeightForWidth:(double)arg1 layoutMargins:(struct UIEdgeInsets)arg2;
@property(readonly, nonatomic) _Bool shouldDisplay;
- (void)layoutSubviews;
- (id)initWithBannerWithType:(unsigned long long)arg1 layoutMargins:(struct UIEdgeInsets)arg2 isDismissible:(_Bool)arg3 userDataProcessingService:(id)arg4 visualElementLoggerService:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
