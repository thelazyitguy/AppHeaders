//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMBaseBlockView.h"

@class ASMImageView, ASMListItemBlock, ASMStyledTextListView, NSLayoutConstraint, UILayoutGuide;

@interface ASMListItemBlockView : ASMBaseBlockView
{
    ASMListItemBlock *_block;
    ASMStyledTextListView *_textListView;
    ASMImageView *_imageView;
    ASMImageView *_iconImageView;
    ASMImageView *_secondaryIconImageView;
    UILayoutGuide *_iconsWrappingGuide;
    NSLayoutConstraint *_listViewCardLeadingConstraint;
    NSLayoutConstraint *_listViewImageLeadingConstraint;
    NSLayoutConstraint *_listViewCardTrailingConstraint;
    NSLayoutConstraint *_listViewIconTrailingConstraint;
    NSLayoutConstraint *_imageIconHorizontalConstraint;
    NSLayoutConstraint *_imageCardTrailingConstraint;
    NSLayoutConstraint *_iconsHorizontalSpacingConstraint;
    NSLayoutConstraint *_secondaryIconTrailingConstraint;
    NSLayoutConstraint *_primaryIconLeadingConstraint;
}

+ (id)viewWithBlock:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *primaryIconLeadingConstraint; // @synthesize primaryIconLeadingConstraint=_primaryIconLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryIconTrailingConstraint; // @synthesize secondaryIconTrailingConstraint=_secondaryIconTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconsHorizontalSpacingConstraint; // @synthesize iconsHorizontalSpacingConstraint=_iconsHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageCardTrailingConstraint; // @synthesize imageCardTrailingConstraint=_imageCardTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageIconHorizontalConstraint; // @synthesize imageIconHorizontalConstraint=_imageIconHorizontalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *listViewIconTrailingConstraint; // @synthesize listViewIconTrailingConstraint=_listViewIconTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *listViewCardTrailingConstraint; // @synthesize listViewCardTrailingConstraint=_listViewCardTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *listViewImageLeadingConstraint; // @synthesize listViewImageLeadingConstraint=_listViewImageLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *listViewCardLeadingConstraint; // @synthesize listViewCardLeadingConstraint=_listViewCardLeadingConstraint;
@property(retain, nonatomic) UILayoutGuide *iconsWrappingGuide; // @synthesize iconsWrappingGuide=_iconsWrappingGuide;
@property(retain, nonatomic) ASMImageView *secondaryIconImageView; // @synthesize secondaryIconImageView=_secondaryIconImageView;
@property(retain, nonatomic) ASMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) ASMImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) ASMStyledTextListView *textListView; // @synthesize textListView=_textListView;
@property(retain, nonatomic) ASMListItemBlock *block; // @synthesize block=_block;
- (void)centerAndConstrainView:(id)arg1 verticallyInGuide:(id)arg2;
- (void)centerAndConstrainGuide:(id)arg1 verticallyInView:(id)arg2;
- (void)centerAndConstrainView:(id)arg1 verticallyInSuperview:(id)arg2;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)addSubviewConstraints;
- (id)textEntriesFromBlock:(id)arg1;
- (void)updateUIForCurrentBlock;
- (id)initWithBlock:(id)arg1;

@end
