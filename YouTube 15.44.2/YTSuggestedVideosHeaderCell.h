//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTCellActionProtocol-Protocol.h>
#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class NSString, UIView, YTBadge, YTFormattedStringLabel, YTISuggestedVideosHeaderRenderer, YTImageView, YTQTMButton;
@protocol GA11YMixinImpl, YTResponder;

@interface YTSuggestedVideosHeaderCell : YTCollectionViewCell <GA11YMixinEmbedder, YTPageStyling, YTCellActionProtocol, YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTISuggestedVideosHeaderRenderer *_suggestedVideosHeaderRenderer;
    YTImageView *_thumbnailImageView;
    YTBadge *_adBadge;
    YTQTMButton *_menuButton;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_descriptionLabel;
    UIView *_separator;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)thumbnailMappings;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setEntry:(id)arg1;
- (id)entry;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

