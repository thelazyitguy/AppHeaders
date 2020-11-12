//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GBTKeyboardHelperListener-Protocol.h"

@class GBTPlainButton, GBTZeroStateView, NSString, UILabel;

@interface GBTEmptyView : UIView <GBTKeyboardHelperListener>
{
    GBTPlainButton *_subtitleButton;
    UILabel *_titleLabel;
    UIView *_searchSuggestionsView;
    GBTZeroStateView *_zeroStateView;
    unsigned long long _emptyViewType;
}

+ (id)emptyViewWithFrame:(struct CGRect)arg1;
+ (id)emptyViewWithTitle:(id)arg1 frame:(struct CGRect)arg2;
+ (id)emptyViewWithTitle:(id)arg1 frame:(struct CGRect)arg2 subtitle:(id)arg3;
+ (id)emptyViewWithTitle:(id)arg1 frame:(struct CGRect)arg2 subtitle:(id)arg3 subtitleTarget:(id)arg4 subtitleAction:(SEL)arg5;
+ (id)emptyViewWithNavigationType:(unsigned long long)arg1 cluster:(id)arg2 inboxSection:(id)arg3 frame:(struct CGRect)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long emptyViewType; // @synthesize emptyViewType=_emptyViewType;
@property(retain, nonatomic) GBTZeroStateView *zeroStateView; // @synthesize zeroStateView=_zeroStateView;
@property(nonatomic) __weak UIView *searchSuggestionsView; // @synthesize searchSuggestionsView=_searchSuggestionsView;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)setupKeyboard;
- (void)updateZeroStateViewPositionWithOffsetY:(double)arg1;
- (void)updateAccessibilityLabel;
- (void)setSubtitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)hideZeroStateAnimated;
- (void)showZeroStateAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearTitle;
- (void)showTitle:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
