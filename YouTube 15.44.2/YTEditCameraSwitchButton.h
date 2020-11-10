//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTQTMButton.h>

@class UIImageView;

@interface YTEditCameraSwitchButton : YTQTMButton
{
    _Bool _lightweight;
    _Bool _compact;
    UIImageView *_outerView;
    UIImageView *_innerView;
}

+ (id)buttonV2;
+ (id)button;
- (void).cxx_destruct;
@property(nonatomic) _Bool compact; // @synthesize compact=_compact;
@property(retain, nonatomic) UIImageView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) UIImageView *outerView; // @synthesize outerView=_outerView;
@property(nonatomic, getter=isLightweight) _Bool lightweight; // @synthesize lightweight=_lightweight;
- (void)layoutSubviews;
- (void)animateRotation;
- (void)applyShadowToView:(id)arg1;

@end
