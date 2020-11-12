//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSCImageView.h"

@class NSString, NSURL, UIColor, UIGestureRecognizer, UILongPressGestureRecognizer;

@interface GSCAvatarView : GSCImageView
{
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIGestureRecognizer *_tapRecognizer;
    _Bool _allowAlpha;
    _Bool _allowAnimationAlpha;
    _Bool _loadProxyFirstIfAvailable;
    NSString *_viewerAccountId;
    NSURL *_avatarUrl;
    CDUnknownBlockType _didTapAvatarViewBlock;
    struct CGSize _imageSize;
    struct CGSize _size;
}

+ (unsigned long long)defaultAvatarSize;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didTapAvatarViewBlock; // @synthesize didTapAvatarViewBlock=_didTapAvatarViewBlock;
@property(nonatomic) _Bool loadProxyFirstIfAvailable; // @synthesize loadProxyFirstIfAvailable=_loadProxyFirstIfAvailable;
@property(nonatomic) _Bool allowAnimationAlpha; // @synthesize allowAnimationAlpha=_allowAnimationAlpha;
@property(nonatomic) _Bool allowAlpha; // @synthesize allowAlpha=_allowAlpha;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSURL *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *viewerAccountId; // @synthesize viewerAccountId=_viewerAccountId;
- (void)loadImage;
- (void)didTapAvatar:(id)arg1;
@property(nonatomic) _Bool allowAnimation;
@property(nonatomic) struct CGPoint origin;
@property(retain, nonatomic) NSString *contentsGravity;
- (void)setTintColor:(id)arg1;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double borderWidth;
@property(retain, nonatomic) UIColor *borderColor;
- (void)updateAvatarUrl:(id)arg1 placeholderImage:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
