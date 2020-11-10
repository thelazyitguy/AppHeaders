//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, GLUELabel, NSLayoutConstraint, NSString;

@interface SPTFreeTierTasteOnboardingArtistCell : UICollectionViewCell <GLUEStyleable>
{
    _Bool _newlyCreated;
    GLUEImageView *_imageView;
    GLUEImageView *_badgeImageView;
    GLUELabel *_textLabel;
    NSLayoutConstraint *_imageViewToTextLabelConstraint;
    NSLayoutConstraint *_badgeImageViewToImageViewSizeConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *badgeImageViewToImageViewSizeConstraint; // @synthesize badgeImageViewToImageViewSizeConstraint=_badgeImageViewToImageViewSizeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewToTextLabelConstraint; // @synthesize imageViewToTextLabelConstraint=_imageViewToTextLabelConstraint;
@property(readonly, nonatomic) GLUELabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) GLUEImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isNewlyCreated) _Bool newlyCreated; // @synthesize newlyCreated=_newlyCreated;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutSubviews;
- (void)activateConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
