//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface UIImageViewAligned : UIImageView
{
    _Bool _enableScaleUp;
    _Bool _enableScaleDown;
    int _alignment;
    UIImageView *_realImageView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *realImageView; // @synthesize realImageView=_realImageView;
@property(nonatomic) _Bool enableScaleDown; // @synthesize enableScaleDown=_enableScaleDown;
@property(nonatomic) _Bool enableScaleUp; // @synthesize enableScaleUp=_enableScaleUp;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) _Bool alignBottom;
@property(nonatomic) _Bool alignTop;
@property(nonatomic) _Bool alignRight;
@property(nonatomic) _Bool alignLeft;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)realContentSize;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

