//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDKFileCV.h"

#import "GDKThemable-Protocol.h"

@class GDKAvatarView, GDKSharedWithMeFileCVO, NSString, UIImageView, UITraitCollection, UIView;

@interface GDKSharedWithMeFileCV : GDKFileCV <GDKThemable>
{
    GDKAvatarView *_sharingUserView;
    UIImageView *_organizationImageView;
    UIView *_fileIconBackgroundView;
    UIImageView *_fileIconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *fileIconImageView; // @synthesize fileIconImageView=_fileIconImageView;
@property(retain, nonatomic) UIView *fileIconBackgroundView; // @synthesize fileIconBackgroundView=_fileIconBackgroundView;
@property(retain, nonatomic) UIImageView *organizationImageView; // @synthesize organizationImageView=_organizationImageView;
@property(retain, nonatomic) GDKAvatarView *sharingUserView; // @synthesize sharingUserView=_sharingUserView;
- (_Bool)multiSelectBorderHidden;
- (double)textLabelLeadingOffsetFromImageView;
- (void)applyTheme:(id)arg1;
- (id)theme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewWithObject:(id)arg1 animated:(_Bool)arg2;
- (double)imageViewLeadingSpace;
- (void)layoutSubviews;
- (void)makeSharedWithMeConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GDKSharedWithMeFileCVO *object; // @dynamic object;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end
