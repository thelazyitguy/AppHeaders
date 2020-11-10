//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"

@class FLXLayout, GIMMe, NSString, UIGestureRecognizer, YTBadge, YTFormattedStringLabel, YTImageView, YTQTMButton, YTThumbnailController;
@protocol ELMContext, YTEngagementPanelHeaderViewDelegate;

@interface YTEngagementPanelHeaderView : UIView <YTPageStyling>
{
    FLXLayout *_layout;
    _Bool _showBottomShadow;
    YTThumbnailController *_thumbnailController;
    _Bool _resizable;
    UIGestureRecognizer *_thumbnailTapGestureRecognizer;
    NSString *_nestedEngagementPanelBackButtonStyle;
    GIMMe *_gimme;
    YTQTMButton *_backButton;
    YTQTMButton *_closeButton;
    YTQTMButton *_overflowMenuButton;
    id <YTEngagementPanelHeaderViewDelegate> _delegate;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_contextualInfoPrimaryLabel;
    YTFormattedStringLabel *_contextualInfoSecondaryLabel;
    UIView *_subheader;
    YTImageView *_thumbnail;
    YTImageView *_countBadge;
    YTBadge *_adBadge;
    YTFormattedStringLabel *_subtitleLabel;
    YTQTMButton *_actionButton;
    YTQTMButton *_sortFilterMenuButton;
    YTQTMButton *_informationButton;
    id <ELMContext> _elementsContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ELMContext> elementsContext; // @synthesize elementsContext=_elementsContext;
@property(retain, nonatomic) YTQTMButton *informationButton; // @synthesize informationButton=_informationButton;
@property(retain, nonatomic) YTQTMButton *sortFilterMenuButton; // @synthesize sortFilterMenuButton=_sortFilterMenuButton;
@property(retain, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) YTBadge *adBadge; // @synthesize adBadge=_adBadge;
@property(retain, nonatomic) YTImageView *countBadge; // @synthesize countBadge=_countBadge;
@property(retain, nonatomic) YTImageView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) UIView *subheader; // @synthesize subheader=_subheader;
@property(retain, nonatomic) YTFormattedStringLabel *contextualInfoSecondaryLabel; // @synthesize contextualInfoSecondaryLabel=_contextualInfoSecondaryLabel;
@property(retain, nonatomic) YTFormattedStringLabel *contextualInfoPrimaryLabel; // @synthesize contextualInfoPrimaryLabel=_contextualInfoPrimaryLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <YTEngagementPanelHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTQTMButton *overflowMenuButton; // @synthesize overflowMenuButton=_overflowMenuButton;
@property(readonly, nonatomic) YTQTMButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) YTQTMButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)reloadLayout;
- (void)didTapThumbnail;
- (void)didTapOverflowMenuButton:(id)arg1;
- (void)didTapInformationButton:(id)arg1;
- (void)didTapSortFilterMenuButton:(id)arg1;
- (void)didTapActionButton:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (void)didTapBackButton:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)root;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setTitle:(id)arg1;
- (void)setContextualInfo:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setResizable:(_Bool)arg1;
- (void)setShowBottomShadow:(_Bool)arg1;
- (void)setCloseButtonHidden:(_Bool)arg1;
- (void)setBackButtonHidden:(_Bool)arg1;
- (void)setRenderer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

