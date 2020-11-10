//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "GA11YMixinEmbedder-Protocol.h"

@class MDCInkView, NSString, YTLabel;
@protocol GA11YMixinImpl;

@interface YTSettingsPickerTitleView : UIControl <GA11YMixinEmbedder>
{
    id <GA11YMixinImpl> _accessibilityMixin;
    YTLabel *_titleLabel;
    YTLabel *_detailLabel;
    MDCInkView *_inkView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MDCInkView *inkView; // @synthesize inkView=_inkView;
@property(retain, nonatomic) YTLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setDetailText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

