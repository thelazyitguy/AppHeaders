//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <TFNUI/TFNDataViewCell-Protocol.h>
#import <TFNUI/TFNMenuSupport-Protocol.h>

@class NSIndexPath, NSString, TFNDataViewCellLayout, TFNMenuCompatibleControl, TFNReusableViewCache, UICollectionView, UIView;

@interface TFNCollectionViewCell : UICollectionViewCell <TFNDataViewCell, TFNMenuSupport>
{
    UICollectionView *_collectionView;
    _Bool _initialized;
    _Bool _hasSentDidFirstDisplay;
    _Bool _highlighted;
    NSIndexPath *_preDisplayIndexPath;
    TFNMenuCompatibleControl *_menuControl;
    _Bool _keyboardHighlighted;
    TFNReusableViewCache *_reusableViewCache;
    TFNDataViewCellLayout *_cellLayout;
    unsigned long long _sectionBreaks;
    CDUnknownBlockType _willDisplayInDataViewControllerBlock;
    CDUnknownBlockType _didDisplayInDataViewControllerBlock;
    CDUnknownBlockType _didDisplayWithZeroVisibilityInDataViewControllerBlock;
    CDUnknownBlockType _didEndDisplayingInDataViewControllerBlock;
    CDUnknownBlockType _didEndScrollingInDataViewControllerBlock;
    CDUnknownBlockType _didFirstDisplayInDataViewControllerBlock;
    CDUnknownBlockType _cleanupBlock;
    NSIndexPath *_currentIndexPath;
    CDUnknownBlockType _willDisplayMenuBlock;
    CDUnknownBlockType _willDismissMenuBlock;
    struct CGRect _contentFrame;
}

+ (id)cellForCollectionView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3 initialization:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType willDismissMenuBlock; // @synthesize willDismissMenuBlock=_willDismissMenuBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayMenuBlock; // @synthesize willDisplayMenuBlock=_willDisplayMenuBlock;
@property(nonatomic, getter=isKeyboardHighlighted) _Bool keyboardHighlighted; // @synthesize keyboardHighlighted=_keyboardHighlighted;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(copy, nonatomic) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;
@property(copy, nonatomic) CDUnknownBlockType didFirstDisplayInDataViewControllerBlock; // @synthesize didFirstDisplayInDataViewControllerBlock=_didFirstDisplayInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndScrollingInDataViewControllerBlock; // @synthesize didEndScrollingInDataViewControllerBlock=_didEndScrollingInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndDisplayingInDataViewControllerBlock; // @synthesize didEndDisplayingInDataViewControllerBlock=_didEndDisplayingInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayWithZeroVisibilityInDataViewControllerBlock; // @synthesize didDisplayWithZeroVisibilityInDataViewControllerBlock=_didDisplayWithZeroVisibilityInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayInDataViewControllerBlock; // @synthesize didDisplayInDataViewControllerBlock=_didDisplayInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayInDataViewControllerBlock; // @synthesize willDisplayInDataViewControllerBlock=_willDisplayInDataViewControllerBlock;
@property(readonly, nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) unsigned long long sectionBreaks; // @synthesize sectionBreaks=_sectionBreaks;
@property(retain, nonatomic) TFNDataViewCellLayout *cellLayout; // @synthesize cellLayout=_cellLayout;
@property(retain, nonatomic) TFNReusableViewCache *reusableViewCache; // @synthesize reusableViewCache=_reusableViewCache;
- (void)_tfn_populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
- (void)populateMenuWithActionItems:(id)arg1;
- (void)populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
- (_Bool)isPreparedToDisplayMenuOnPrimaryAction;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (id)keyCommands;
- (id)calculatedLayoutMetrics;
- (void)didKeyboardSelectInDataViewController:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic, getter=isKeyboardSelectable) _Bool keyboardSelectable;
- (void)cleanup;
- (void)didFirstDisplayInDataViewController:(id)arg1;
- (void)didEndScrollingInDataViewController:(id)arg1;
- (void)didEndDisplayingInDataViewController:(id)arg1 reason:(unsigned long long)arg2;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)arg1 atIndexPath:(id)arg2;
- (void)didDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2 visibleIntersection:(struct CGRect)arg3;
- (void)willDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

