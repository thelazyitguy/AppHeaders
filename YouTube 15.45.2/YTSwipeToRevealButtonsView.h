//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTActionProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTReusableView-Protocol.h"

@class NSString, YTIMenuRenderer, YTQTMButton;
@protocol YTSwipeToRevealButtonsDelegate;

@interface YTSwipeToRevealButtonsView : UIView <YTActionProtocol, YTPageStyling, YTReusableView>
{
    YTQTMButton *_swipeButton1;
    YTQTMButton *_swipeButton2;
    YTQTMButton *_swipeButton3;
    YTQTMButton *_actionSwipeButton;
    long long _pageStyle;
    double _kButtonPaddingX;
    _Bool _readyToShowButtons;
    double _maxHorizontalSwipeButtonPadding;
    _Bool _shouldShowActionButton;
    long long _numberOfButtons;
    id _actionTarget;
    SEL _actionSelector;
    id <YTSwipeToRevealButtonsDelegate> _delegate;
    YTIMenuRenderer *_entry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTIMenuRenderer *entry; // @synthesize entry=_entry;
@property(nonatomic) __weak id <YTSwipeToRevealButtonsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)customActionFromButtonRenderer:(id)arg1 selector:(SEL)arg2;
- (id)swipeButtons;
- (void)updateButtonStyling;
- (void)applyButtonRenderers;
- (void)setupButtons;
- (void)didTapButton:(id)arg1;
- (void)didTapActionButton;
- (void)didTapButton3;
- (void)didTapButton2;
- (void)didTapButton1;
- (void)updateButtonPadding;
- (void)updateActionButton;
- (void)updateButton:(id)arg1 withRenderer:(id)arg2;
- (id)setupButtonIsActionType:(_Bool)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibilitySwipeCustomActions;
- (double)swipeDemoOffset;
- (void)prepareForReuse;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareToShowButtons;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

