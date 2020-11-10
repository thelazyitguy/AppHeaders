//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTBundleItemView, YTIBundleItemRenderer, YTTransferButton;
@protocol GA11YMixinImpl, YTBundleItemViewDelegate, YTResponder;

@interface YTBundleItemCell : YTCollectionViewCell <YTPageStyling, YTCollectionViewCellProtocol, GA11YMixinEmbedder, YTThumbnailMapping>
{
    YTBundleItemView *_bundleItemView;
    YTIBundleItemRenderer *_entry;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTBundleItemViewDelegate> _delegate;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTBundleItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)thumbnailMappings;
- (void)setEntry:(id)arg1;
- (id)entry;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) YTTransferButton *offlineButton;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
