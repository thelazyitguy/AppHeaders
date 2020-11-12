//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseButton, BaseImageView, BaseLabel, Multi, ParallelHeaderTextWrapperView;
@protocol MultiPageHeaderViewDelegate, ViewContext;

@interface MultiPageHeaderView : BaseView
{
    id <MultiPageHeaderViewDelegate> _delegate;
    id <ViewContext> _viewContext;
    BaseImageView *_iconImageView;
    BaseLabel *_titleLabel;
    BaseLabel *_communityCountLabel;
    BaseLabel *_infoLabel;
    BaseButton *_actionButton;
    ParallelHeaderTextWrapperView *_descriptionTextView;
    Multi *_multi;
    double _previousHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double previousHeight; // @synthesize previousHeight=_previousHeight;
@property(retain, nonatomic) Multi *multi; // @synthesize multi=_multi;
@property(retain, nonatomic) ParallelHeaderTextWrapperView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) BaseButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) BaseLabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) BaseLabel *communityCountLabel; // @synthesize communityCountLabel=_communityCountLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BaseImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) __weak id <MultiPageHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionButtonPress:(id)arg1;
- (void)configureDescriptionLabelForMulti:(id)arg1;
- (void)configureActionButtonForMulti:(id)arg1;
- (void)configureInfoLabelForMulti:(id)arg1;
- (void)configureCommunityCountLabelForMulti:(id)arg1;
- (void)configureTitleLabelForMulti:(id)arg1;
- (void)configureIconForMulti:(id)arg1;
- (void)layoutSubviews;
- (void)configureView;
- (void)configureWithMulti:(id)arg1;
- (id)initWithViewContext:(id)arg1;

@end
