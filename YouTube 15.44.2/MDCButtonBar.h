//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/UIPointerInteractionDelegate-Protocol.h>

@class MDCAppBarButtonBarBuilder, NSArray, NSString, UIColor;
@protocol MDCButtonBarDelegate;

@interface MDCButtonBar : UIView <UIPointerInteractionDelegate>
{
    id _buttonItemsLock;
    NSArray *_buttonViews;
    UIColor *_inkColor;
    MDCAppBarButtonBarBuilder *_defaultBuilder;
    _Bool _uppercasesButtonTitles;
    _Bool _enableRippleBehavior;
    id <MDCButtonBarDelegate> _delegate;
    NSArray *_items;
    double _buttonTitleBaseline;
    unsigned long long _layoutPosition;
    UIColor *_rippleColor;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic) _Bool enableRippleBehavior; // @synthesize enableRippleBehavior=_enableRippleBehavior;
@property(retain, nonatomic) UIColor *rippleColor; // @synthesize rippleColor=_rippleColor;
@property(nonatomic) unsigned long long layoutPosition; // @synthesize layoutPosition=_layoutPosition;
@property(nonatomic) _Bool uppercasesButtonTitles; // @synthesize uppercasesButtonTitles=_uppercasesButtonTitles;
@property(nonatomic) double buttonTitleBaseline; // @synthesize buttonTitleBaseline=_buttonTitleBaseline;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <MDCButtonBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)largeContentViewerInteraction:(id)arg1 itemAtPoint:(struct CGPoint)arg2;
- (id)buttonItemForPoint:(struct CGPoint)arg1;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)reloadButtonViews;
- (void)setInkColor:(id)arg1;
- (id)inkColor;
- (void)mdf_setSemanticContentAttribute:(long long)arg1;
- (id)buttonsTitleColorForState:(unsigned long long)arg1;
- (void)setButtonsTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)buttonsTitleFontForState:(unsigned long long)arg1;
- (void)setButtonsTitleFont:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)rectForItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)didTapButton:(id)arg1 event:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)viewsForItems:(id)arg1;
- (void)updateButtonsWithInkColor:(id)arg1;
- (void)updateButtonTitleColors;
- (void)invalidateIntrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 shouldLayout:(_Bool)arg2;
- (void)alignButtonBaseline:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonMDCButtonBarInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

