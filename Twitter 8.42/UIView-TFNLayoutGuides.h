//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILayoutGuide;

@interface UIView (TFNLayoutGuides)
+ (void)load;
- (void)_tfn_swizzledSafeAreaInsetsDidChange;
- (void)_tfn_relativeVisibleSafeAreaInsetsDidChange;
- (_Bool)_tfn_shouldSendVisibleSafeAreaInsetsDidChange;
- (id)_tfn_visibleSafeAreaLayoutGuide;
- (struct UIEdgeInsets)_tfn_relativeVisibleSafeAreaInsets;
@property(readonly, nonatomic) UILayoutGuide *tfn_visibleSafeAreaLayoutGuide;
@property(readonly, nonatomic) struct UIEdgeInsets tfn_visibleSafeAreaInsets;
@end

