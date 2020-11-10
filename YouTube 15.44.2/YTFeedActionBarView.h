//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTActionProtocol-Protocol.h>
#import <Module_Framework/YTFeedActionBarProtocol-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTReusableView-Protocol.h>

@class FLXLayout, NSString, YTIMenuRenderer, YTQTMButton;
@protocol GA11YMixinImpl, YTFeedActionBarDelegate;

@interface YTFeedActionBarView : UIView <GA11YMixinEmbedder, YTPageStyling, YTActionProtocol, YTFeedActionBarProtocol, YTReusableView>
{
    FLXLayout *_layout;
    _Bool _readyToShowButtons;
    long long _pageStyle;
    id <YTFeedActionBarDelegate> _feedActionBarDelegate;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTQTMButton *_actionButton;
    YTQTMButton *_leftButton0;
    YTQTMButton *_leftButton1;
    YTQTMButton *_rightButton0;
    YTIMenuRenderer *_entry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTIMenuRenderer *entry; // @synthesize entry=_entry;
@property(retain, nonatomic) YTQTMButton *rightButton0; // @synthesize rightButton0=_rightButton0;
@property(retain, nonatomic) YTQTMButton *leftButton1; // @synthesize leftButton1=_leftButton1;
@property(retain, nonatomic) YTQTMButton *leftButton0; // @synthesize leftButton0=_leftButton0;
@property(retain, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
- (_Bool)isNarrowScreenDevice;
- (id)customActionFromButtonRenderer:(id)arg1 selector:(SEL)arg2;
- (void)didTapRightButton0;
- (void)didTapLeftButton1;
- (void)didTapLeftButton0;
- (void)didTapButton:(id)arg1;
- (void)updateButton:(id)arg1 withRenderer:(id)arg2;
- (id)formatButton;
- (void)applyButtonRenderers;
- (void)setupButtons;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareForReuse;
- (void)resetLayout;
- (id)root;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
@property(nonatomic) __weak id <YTFeedActionBarDelegate> feedActionBarDelegate; // @synthesize feedActionBarDelegate=_feedActionBarDelegate;
- (double)feedActionBarViewHeight;
- (void)setActionButtonAccessibilityIdentifier:(id)arg1;
- (id)accessibilityFeedActionBarViewCustomActions;
- (void)prepareToShowButtons;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

