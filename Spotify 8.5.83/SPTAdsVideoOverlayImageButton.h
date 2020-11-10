//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface SPTAdsVideoOverlayImageButton : UIButton
{
    _Bool _isInActiveState;
    _Bool _isInteractive;
    CDUnknownBlockType _tapBlock;
    UIColor *_imageColor;
    UIImage *_activeStateImage;
    UIImage *_inactiveStateImage;
    struct CGSize _buttonSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(nonatomic) _Bool isInActiveState; // @synthesize isInActiveState=_isInActiveState;
@property(readonly, nonatomic) UIImage *inactiveStateImage; // @synthesize inactiveStateImage=_inactiveStateImage;
@property(readonly, nonatomic) UIImage *activeStateImage; // @synthesize activeStateImage=_activeStateImage;
@property(readonly, nonatomic) UIColor *imageColor; // @synthesize imageColor=_imageColor;
@property(readonly, nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void)addConstraints;
- (void)setStateToInactive;
- (void)setStateToActive;
- (void)updateState;
- (_Bool)activeState;
- (void)sendTapEvent;
- (id)initWithButtonSize:(struct CGSize)arg1 imageInsets:(struct UIEdgeInsets)arg2 activeStateImage:(id)arg3 inactiveStateImage:(id)arg4 isInteractive:(_Bool)arg5;

@end
