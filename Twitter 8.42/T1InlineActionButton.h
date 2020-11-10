//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLegacyButton.h>

@class TFNLegacyButtonAnimator, UIImpactFeedbackGenerator;
@protocol T1InlineActionButtonDelegate;

@interface T1InlineActionButton : TFNLegacyButton
{
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    unsigned long long _inlineActionType;
    unsigned long long _alternateInlineActionType;
    long long _count;
    id <T1InlineActionButtonDelegate> _delegate;
    TFNLegacyButtonAnimator *_animator;
}

+ (id)buttonWithSize:(unsigned long long)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 presentation:(unsigned long long)arg4;
+ (id)tintColorForUIControlState:(unsigned long long)arg1;
+ (id)imageColor;
+ (struct CGSize)buttonImageSize;
+ (id)highContrastButtonImageNameForUIControlState:(unsigned long long)arg1;
+ (id)buttonImageNameForUIControlState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNLegacyButtonAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak id <T1InlineActionButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long alternateInlineActionType; // @synthesize alternateInlineActionType=_alternateInlineActionType;
@property(nonatomic) unsigned long long inlineActionType; // @synthesize inlineActionType=_inlineActionType;
- (id)impactFeedbackGenerator;
- (struct UIEdgeInsets)_defaultTouchInsets;
- (void)_updateCountText;
- (void)setShouldAppearDisabled:(_Bool)arg1;
- (id)animationTypeForTransitionToSelectedState;
- (void)configureAnimatorWithAnimationType:(id)arg1;
- (id)initWithSize:(unsigned long long)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 presentation:(unsigned long long)arg4;
- (id)initWithInlineActionType:(unsigned long long)arg1 size:(unsigned long long)arg2 strength:(unsigned long long)arg3 variant:(unsigned long long)arg4 presentation:(unsigned long long)arg5;
- (void)didLongPressActionButton:(id)arg1;
- (void)didTap;

@end

