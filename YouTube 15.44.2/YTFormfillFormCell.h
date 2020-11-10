//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class NSMutableArray, NSString, UIButton, YTFormattedStringLabel, YTFormfillFormHeaderView, YTIFormfillFormRenderer, YTQTMButton;
@protocol GA11YMixinImpl, YTFormattedStringLabelDelegate, YTResponder;

@interface YTFormfillFormCell : YTCollectionViewCell <GA11YMixinEmbedder, YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTIFormfillFormRenderer *_renderer;
    YTFormfillFormHeaderView *_headerView;
    YTFormattedStringLabel *_disclaimerLabel;
    NSMutableArray *_inputViewArray;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTQTMButton *_closeButton;
    UIButton *_submitButton;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(readonly, nonatomic) YTQTMButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (_Bool)shouldShowCloseButton;
- (_Bool)shouldShowDisclaimer;
- (_Bool)shouldShowHeader;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)thumbnailMappings;
- (void)setFormattedStringLabelDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)addDidPressSubmitTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressCloseTarget:(id)arg1 action:(SEL)arg2;
- (void)removeAllInputViews;
- (void)addInputView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

