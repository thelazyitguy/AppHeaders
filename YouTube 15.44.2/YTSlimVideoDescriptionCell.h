//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTExpandableCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSMutableArray, NSString, UIView, YTISlimVideoDescriptionRenderer;
@protocol GA11YMixinImpl, YTAttributedLabel, YTFormattedStringLabelDelegate, YTResponder, YTRichMetadataDelegate;

@interface YTSlimVideoDescriptionCell : YTExpandableCell <GA11YMixinEmbedder, UIGestureRecognizerDelegate, YTPageStyling, YTThumbnailMapping, YTCollectionViewCellProtocol, YTResponder>
{
    double _totalMetadataHeight;
    YTISlimVideoDescriptionRenderer *_entry;
    long long _pageStyle;
    _Bool _useTypeVariantPrimaryForDescription;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
    id <YTRichMetadataDelegate> _richMetadataDelegate;
    UIView *_descriptionContainer;
    UIView *_descriptionLabelGroup;
    UIView<YTAttributedLabel> *_descriptionLabel;
    NSMutableArray *_metadataRowLabels;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 expanded:(_Bool)arg2 size:(struct CGSize)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *metadataRowLabels; // @synthesize metadataRowLabels=_metadataRowLabels;
@property(retain, nonatomic) UIView<YTAttributedLabel> *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *descriptionLabelGroup; // @synthesize descriptionLabelGroup=_descriptionLabelGroup;
@property(retain, nonatomic) UIView *descriptionContainer; // @synthesize descriptionContainer=_descriptionContainer;
@property(nonatomic) _Bool useTypeVariantPrimaryForDescription; // @synthesize useTypeVariantPrimaryForDescription=_useTypeVariantPrimaryForDescription;
@property(nonatomic) __weak id <YTRichMetadataDelegate> richMetadataDelegate; // @synthesize richMetadataDelegate=_richMetadataDelegate;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)updateDescriptionLabelTypeKind;
- (struct CGSize)sizeSubviewsWithSize:(struct CGSize)arg1;
- (double)descriptionContainerHeight;
- (void)createDescriptionLabel;
- (void)clearDescriptionLabel;
- (void)createMetadataLabels;
- (void)clearMetadataLabels;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)thumbnailMappings;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)sidePadding;
- (double)menuButtonRightPadding;
- (double)disclosureArrowPaddingX;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

