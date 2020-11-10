//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASMImage, NSLayoutConstraint, UIImageView;

@interface ASMImageView : UIView
{
    _Bool _tintColorExternallySet;
    ASMImage *_imageData;
    NSLayoutConstraint *_imageHeightConstraint;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_frameHeightConstraint;
    NSLayoutConstraint *_frameWidthConstraint;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool tintColorExternallySet; // @synthesize tintColorExternallySet=_tintColorExternallySet;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSLayoutConstraint *frameWidthConstraint; // @synthesize frameWidthConstraint=_frameWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *frameHeightConstraint; // @synthesize frameHeightConstraint=_frameHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) ASMImage *imageData; // @synthesize imageData=_imageData;
- (void)setTintColor:(id)arg1;
- (void)setConstraintsWithWidth:(double)arg1 height:(double)arg2;
- (id)initWithImageData:(id)arg1;

@end

