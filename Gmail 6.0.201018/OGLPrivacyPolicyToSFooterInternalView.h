//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "OGLPrivacyPolicyToSFooterButtonDelegate-Protocol.h"

@class OGLPrivacyPolicyToSFooterButton, UIColor;
@protocol OGLPrivacyPolicyToSFooterView, OGLPrivacyPolicyToSFooterViewDelegate, OGLUILogger;

@interface OGLPrivacyPolicyToSFooterInternalView : UIView <OGLPrivacyPolicyToSFooterButtonDelegate>
{
    _Bool _shouldLogUI;
    id <OGLPrivacyPolicyToSFooterViewDelegate> _delegate;
    UIView<OGLPrivacyPolicyToSFooterView> *_parentFooterView;
    UIColor *_buttonHighlightColor;
    UIColor *_textColor;
    id <OGLUILogger> _uiLogger;
    OGLPrivacyPolicyToSFooterButton *_privacyPolicyButton;
    OGLPrivacyPolicyToSFooterButton *_termsOfServiceButton;
    OGLPrivacyPolicyToSFooterButton *_customLinkButton;
    UIView *_firstColumnDividerView;
    UIView *_secondColumnDividerView;
    UIView *_firstRowDividerView;
    UIView *_secondRowDividerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *secondRowDividerView; // @synthesize secondRowDividerView=_secondRowDividerView;
@property(retain, nonatomic) UIView *firstRowDividerView; // @synthesize firstRowDividerView=_firstRowDividerView;
@property(retain, nonatomic) UIView *secondColumnDividerView; // @synthesize secondColumnDividerView=_secondColumnDividerView;
@property(retain, nonatomic) UIView *firstColumnDividerView; // @synthesize firstColumnDividerView=_firstColumnDividerView;
@property(retain, nonatomic) OGLPrivacyPolicyToSFooterButton *customLinkButton; // @synthesize customLinkButton=_customLinkButton;
@property(retain, nonatomic) OGLPrivacyPolicyToSFooterButton *termsOfServiceButton; // @synthesize termsOfServiceButton=_termsOfServiceButton;
@property(retain, nonatomic) OGLPrivacyPolicyToSFooterButton *privacyPolicyButton; // @synthesize privacyPolicyButton=_privacyPolicyButton;
@property(nonatomic) _Bool shouldLogUI; // @synthesize shouldLogUI=_shouldLogUI;
@property(retain, nonatomic) id <OGLUILogger> uiLogger; // @synthesize uiLogger=_uiLogger;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *buttonHighlightColor; // @synthesize buttonHighlightColor=_buttonHighlightColor;
@property(nonatomic) __weak UIView<OGLPrivacyPolicyToSFooterView> *parentFooterView; // @synthesize parentFooterView=_parentFooterView;
@property(nonatomic) __weak id <OGLPrivacyPolicyToSFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapButton:(id)arg1 buttonType:(int)arg2;
- (_Bool)isButtonAnimating:(id)arg1;
- (_Bool)hasCustomLinkButton;
- (void)didTapCustomLinkForView:(id)arg1;
- (void)didTapTermsOfService:(id)arg1;
- (void)didTapPrivacyPolicy:(id)arg1;
- (void)applyTheme;
- (void)instrumentVisualElements;
- (double)heightOfUpdatedLayoutForSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *titleColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeForButton:(id)arg1 width:(double)arg2;
- (double)columnDividerInsetForNumber:(unsigned long long)arg1;
- (double)columnDividersWidthWithNumber:(unsigned long long)arg1;
- (double)buttonWidthToFit:(id)arg1 columnDividers:(id)arg2 size:(struct CGSize)arg3;
- (double)maxButtonWidth:(id)arg1 size:(struct CGSize)arg2;
- (double)totalWidth:(id)arg1 size:(struct CGSize)arg2;
- (void)layoutColumnDivider:(id)arg1 forDisplayInRowFrame:(struct CGRect)arg2 centerX:(double)arg3;
- (void)layoutColumnDivider:(id)arg1 forDisplayInRowFrame:(struct CGRect)arg2 originX:(double)arg3;
- (void)layoutRowDivider:(id)arg1 centerY:(double)arg2;
- (double)heightOfUpdatedLayoutForThreeButtonsWithVerticalOffset:(double)arg1 buttons:(id)arg2 columnDividers:(id)arg3 size:(struct CGSize)arg4;
- (double)heightOfUpdatedLayoutForTwoButtonsWithVerticalOffset:(double)arg1 buttons:(id)arg2 columnDividers:(id)arg3 size:(struct CGSize)arg4;
- (double)heightOfUpdatedLayoutForOneButtonWithVerticalOffset:(double)arg1 buttons:(id)arg2 columnDividers:(id)arg3 size:(struct CGSize)arg4;
- (double)heightOfUpdatedLayoutWithVerticalOffset:(double)arg1 buttons:(id)arg2 columnDividers:(id)arg3 size:(struct CGSize)arg4;
- (double)heightOfUpdatedLayoutWithFirstRowButtons:(id)arg1 secondRowButtons:(id)arg2 thirdRowButtons:(id)arg3 columnDividers:(id)arg4 rowDividers:(id)arg5 size:(struct CGSize)arg6;
- (double)heightOfUpdatedLayoutWithFirstRowButtons:(id)arg1 secondRowButtons:(id)arg2 columnDividers:(id)arg3 rowDividers:(id)arg4 size:(struct CGSize)arg5;
- (double)heightOfUpdatedLayoutForOneRowWithButtons:(id)arg1 columnDividers:(id)arg2 size:(struct CGSize)arg3;
- (double)heightOfUpdatedLayoutWithButtons:(id)arg1 columnDividers:(id)arg2 rowDividers:(id)arg3 showCustomLink:(_Bool)arg4 size:(struct CGSize)arg5;

@end

