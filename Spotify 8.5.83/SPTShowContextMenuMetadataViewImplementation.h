//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTShowContextMenuMetadataView-Protocol.h"

@class NSLayoutConstraint, NSString, NSURL, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UITextView;
@protocol SPTShowContextMenuMetadataViewDelegate, SPTThemableViewLayoutDelegate;

@interface SPTShowContextMenuMetadataViewImplementation : UIView <SPTShowContextMenuMetadataView>
{
    _Bool _showMoreDescriptionEnabled;
    _Bool _showMoreButtonHidden;
    id <SPTShowContextMenuMetadataViewDelegate> _delegate;
    NSString *_imageMetadataTitle;
    NSString *_longDescription;
    NSString *_subtitle;
    UIView *_subtitleAccessoryView;
    NSURL *_headerImageURL;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImageView *_showImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_metadataLabel;
    UILabel *_imageMetadataLabel;
    UITextView *_descriptionTextView;
    UIButton *_showMoreButton;
    UITapGestureRecognizer *_tapToShowMoreGestureRecognizer;
    long long _headerType;
    UIView *_containerView;
    NSLayoutConstraint *_containerBottomConstraint;
    NSLayoutConstraint *_subtitleLeftConstraint;
    NSLayoutConstraint *_subtitleAccessoryViewLeftConstraint;
    NSLayoutConstraint *_descriptionTextMaxHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *descriptionTextMaxHeightConstraint; // @synthesize descriptionTextMaxHeightConstraint=_descriptionTextMaxHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleAccessoryViewLeftConstraint; // @synthesize subtitleAccessoryViewLeftConstraint=_subtitleAccessoryViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLeftConstraint; // @synthesize subtitleLeftConstraint=_subtitleLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerBottomConstraint; // @synthesize containerBottomConstraint=_containerBottomConstraint;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) _Bool showMoreButtonHidden; // @synthesize showMoreButtonHidden=_showMoreButtonHidden;
@property(nonatomic) _Bool showMoreDescriptionEnabled; // @synthesize showMoreDescriptionEnabled=_showMoreDescriptionEnabled;
@property(retain, nonatomic) UITapGestureRecognizer *tapToShowMoreGestureRecognizer; // @synthesize tapToShowMoreGestureRecognizer=_tapToShowMoreGestureRecognizer;
@property(retain, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UILabel *imageMetadataLabel; // @synthesize imageMetadataLabel=_imageMetadataLabel;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *showImageView; // @synthesize showImageView=_showImageView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(readonly, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(copy, nonatomic) NSString *imageMetadataTitle; // @synthesize imageMetadataTitle=_imageMetadataTitle;
@property(nonatomic) __weak id <SPTShowContextMenuMetadataViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (_Bool)descriptionTextViewCanBeExpanded;
- (double)textViewTextHeight:(id)arg1 width:(double)arg2;
- (double)labelTextHeight:(id)arg1 width:(double)arg2;
- (double)calculatedHeight;
- (void)applyThemeLayout;
- (void)applySubtitleStyle;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *metadataTitle;
@property(retain, nonatomic) NSString *title;
- (_Bool)isIPad;
- (void)showMoreDescription;
- (void)updateTextViewToShowAllText;
- (void)updateDescriptionTextViewNumberOfLines;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)addImageMetadataLabelConstraints;
- (void)addSubtitlAccessoryViewConstraints;
- (void)setupConstraints;
- (void)setupDescriptionTextView;
- (id)initWithFrame:(struct CGRect)arg1 headerType:(long long)arg2 headerImageURL:(id)arg3;
- (id)arrowIcon;
- (double)preferredHeight;
- (struct CGSize)preferredImageSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

