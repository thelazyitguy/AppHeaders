//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MDCCollectionViewLayoutAttributes, MDCInkView, MDCRippleView, UIColor, UIImageView, UIView;

@interface MDCCollectionViewCell : UICollectionViewCell
{
    MDCCollectionViewLayoutAttributes *_attr;
    _Bool _usesCellSeparatorHiddenOverride;
    _Bool _usesCellSeparatorInsetOverride;
    _Bool _shouldAnimateEditingViews;
    UIView *_separatorView;
    UIImageView *_backgroundImageView;
    UIImageView *_editingReorderImageView;
    UIImageView *_editingSelectorImageView;
    _Bool _shouldHideSeparator;
    _Bool _allowsCellInteractionsWhileEditing;
    _Bool _editing;
    _Bool _enableRippleBehavior;
    MDCInkView *_inkView;
    MDCRippleView *_rippleView;
    unsigned long long _accessoryType;
    UIView *_accessoryView;
    UIColor *_editingSelectorColor;
    struct UIEdgeInsets _accessoryInset;
    struct UIEdgeInsets _separatorInset;
}

+ (id)localizedStringWithKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableRippleBehavior; // @synthesize enableRippleBehavior=_enableRippleBehavior;
@property(retain, nonatomic) UIColor *editingSelectorColor; // @synthesize editingSelectorColor=_editingSelectorColor;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool allowsCellInteractionsWhileEditing; // @synthesize allowsCellInteractionsWhileEditing=_allowsCellInteractionsWhileEditing;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) _Bool shouldHideSeparator; // @synthesize shouldHideSeparator=_shouldHideSeparator;
@property(nonatomic) struct UIEdgeInsets accessoryInset; // @synthesize accessoryInset=_accessoryInset;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
- (_Bool)shouldEnableCellInteractions;
- (struct CGRect)contentViewFrame;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (void)mdf_setSemanticContentAttribute:(long long)arg1;
- (void)updateAppearanceAnimation;
- (void)setSelected:(_Bool)arg1;
- (void)updateInterfaceForEditing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)drawSeparatorIfNeeded;
@property(retain, nonatomic) MDCRippleView *rippleView; // @synthesize rippleView=_rippleView;
@property(retain, nonatomic) MDCInkView *inkView; // @synthesize inkView=_inkView;
- (struct CGRect)accessoryFrame;
- (void)layoutForegroundSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)commonMDCCollectionViewCellInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
