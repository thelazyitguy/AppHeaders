//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <doordash_collectionview_ios/DDBorderAndTintCollectionViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface DDCDualLabelDisclosureCollectionViewCell : DDBorderAndTintCollectionViewCell
{
    UILabel *_textLabel;
    NSLayoutConstraint *_textLabelLeftSpacingConstraint;
    UILabel *_disclosureLabel;
    NSLayoutConstraint *_interLabelSpacingConstraint;
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewRightSpacingConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_imageViewLeftSpacingConstraint;
    UIImageView *_optionalIcon;
    UILabel *_textLabelUsedWithIcon;
}

+ (id)nib;
@property(nonatomic) UILabel *textLabelUsedWithIcon; // @synthesize textLabelUsedWithIcon=_textLabelUsedWithIcon;
@property(nonatomic) UIImageView *optionalIcon; // @synthesize optionalIcon=_optionalIcon;
@property(nonatomic) NSLayoutConstraint *imageViewLeftSpacingConstraint; // @synthesize imageViewLeftSpacingConstraint=_imageViewLeftSpacingConstraint;
@property(nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(nonatomic) NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
@property(nonatomic) NSLayoutConstraint *imageViewRightSpacingConstraint; // @synthesize imageViewRightSpacingConstraint=_imageViewRightSpacingConstraint;
@property(nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) NSLayoutConstraint *interLabelSpacingConstraint; // @synthesize interLabelSpacingConstraint=_interLabelSpacingConstraint;
@property(nonatomic) UILabel *disclosureLabel; // @synthesize disclosureLabel=_disclosureLabel;
@property(nonatomic) NSLayoutConstraint *textLabelLeftSpacingConstraint; // @synthesize textLabelLeftSpacingConstraint=_textLabelLeftSpacingConstraint;
@property(nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

@end
