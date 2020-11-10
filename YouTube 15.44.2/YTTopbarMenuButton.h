//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTQTMButton.h>

@class UILongPressGestureRecognizer, UIView, YTITopbarMenuButtonRenderer, YTImageView;

@interface YTTopbarMenuButton : YTQTMButton
{
    YTITopbarMenuButtonRenderer *_renderer;
    YTImageView *_iconImageView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIView *_activityDot;
    YTImageView *_avatarImageView;
}

+ (id)button;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (double)activityDotPadding;
- (void)dealloc;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)setAccountButtonNotificationDotVisible:(_Bool)arg1;
- (void)setRenderer:(id)arg1;
- (void)layoutSubviews;

@end

