//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTImageViewContainer-Protocol.h>

@class FLXLayout, GIMMe, NSString, UIImageView, UIView, YTFormattedStringLabel, YTIAccountItemRenderer, YTImageView;
@protocol GA11YMixinImpl;

@interface YTInlineSignInChannelCell : UICollectionViewCell <GA11YMixinEmbedder, YTImageViewContainer>
{
    FLXLayout *_layout;
    _Bool _disabled;
    _Bool _disableSelectionState;
    YTImageView *_imageView;
    id <GA11YMixinImpl> _accessibilityMixin;
    GIMMe *_gimme;
    YTIAccountItemRenderer *_accountItemRenderer;
    UIView *_selectedCircleView;
    YTFormattedStringLabel *_nameLabel;
    YTFormattedStringLabel *_bylineLabel;
    UIImageView *_checkView;
    YTFormattedStringLabel *_unlimitedStatusLabel;
    YTFormattedStringLabel *_signInRestrictionReasonLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTFormattedStringLabel *signInRestrictionReasonLabel; // @synthesize signInRestrictionReasonLabel=_signInRestrictionReasonLabel;
@property(retain, nonatomic) YTFormattedStringLabel *unlimitedStatusLabel; // @synthesize unlimitedStatusLabel=_unlimitedStatusLabel;
@property(retain, nonatomic) UIImageView *checkView; // @synthesize checkView=_checkView;
@property(retain, nonatomic) YTFormattedStringLabel *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
@property(retain, nonatomic) YTFormattedStringLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *selectedCircleView; // @synthesize selectedCircleView=_selectedCircleView;
@property(nonatomic) _Bool disableSelectionState; // @synthesize disableSelectionState=_disableSelectionState;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) YTIAccountItemRenderer *accountItemRenderer; // @synthesize accountItemRenderer=_accountItemRenderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTImageView *imageView; // @synthesize imageView=_imageView;
- (void)prepareForReuse;
- (id)root;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

