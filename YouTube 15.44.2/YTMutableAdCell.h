//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>
#import <Module_Framework/YTActionProtocol-Protocol.h>
#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class GADGestureRecognizer, NSString, UIImageView, UITapGestureRecognizer, UIView, YTMutedNativeAdView, YTQTMButton;
@protocol GA11YMixinImpl, YTMutableAdMutedAdStateRendererProtocol, YTMutableAdRendererProtocol, YTPromotedNativeAdView, YTResponder;

@interface YTMutableAdCell : YTCollectionViewCell <GA11YMixinEmbedder, YTPageStyling, UIGestureRecognizerDelegate, YTActionProtocol, YTCollectionViewCellProtocol, YTResponder, YTThumbnailMapping>
{
    UIView<YTPromotedNativeAdView> *_promotedView;
    YTMutedNativeAdView *_mutedView;
    YTQTMButton *_closeButton;
    id <YTMutableAdRendererProtocol> _renderer;
    GADGestureRecognizer *_adGestureRecognizer;
    struct CGRect _mutedFrame;
    UIImageView *_closeBadge;
    UITapGestureRecognizer *_closeBadgeGestureRecognizer;
    YTQTMButton *_actionButton;
    UIView *_bgView;
    UIView *_highlightView;
    _Bool _disableHighlightOnTouch;
    long long _pageStyle;
    _Bool _muted;
    _Bool _active;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    struct CGPoint _lastClickLocation;
}

+ (Class)viewClassForRenderer:(id)arg1;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 muted:(_Bool)arg3 active:(_Bool)arg4;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint lastClickLocation; // @synthesize lastClickLocation=_lastClickLocation;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)viewObjectForRenderer:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)thumbnailMappings;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)setCornerButtonVisibility;
- (id)cornerButton;
- (_Bool)requiresMenuButton;
- (_Bool)requiresHomeFormat;
- (_Bool)requiresWideForm;
- (_Bool)requiresGridForm;
@property(readonly, nonatomic) id <YTMutableAdMutedAdStateRendererProtocol> muteRenderer;
- (int)codeForClickLocation:(struct CGPoint)arg1;
- (int)behaviorForClickLocation:(struct CGPoint)arg1;
- (void)setVisibilityForLateAnimationWithActive:(_Bool)arg1;
- (void)setVisibilityForEarlyAnimationWithActive:(_Bool)arg1;
- (void)prepareForReuse;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)removeSpamTouchTargets;
- (void)removeAdSettingsTarget;
- (void)setAdSettingsTarget:(id)arg1 action:(SEL)arg2;
- (void)removeUndoTarget;
- (void)setUndoTarget:(id)arg1 action:(SEL)arg2;
- (void)removeCloseTarget;
- (void)setCloseTarget:(id)arg1 action:(SEL)arg2;
- (id)mutedView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutCornerButton;
- (void)layoutSubviews;
- (void)setBackgroundVisibilityWithMuted:(_Bool)arg1 active:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

