//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "NFUIManagedCollectionViewControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewAccessibilityDelegate-Protocol.h"
#import "ViewControllerOverContextDelegateProtocol-Protocol.h"

@class NFUICollectionViewCellManager, NSString, NavigationBarAppearanceManager, UICollectionViewFlowLayout, UIView;
@protocol NFUIManagedCollectionViewControllerDelegate><NFUICollectionViewCellManagerDelegate><NFUICellSelectionProtocol;

@interface NFUIManagedCollectionViewController : UICollectionViewController <NFUIManagedCollectionViewControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ViewControllerOverContextDelegateProtocol, UIScrollViewAccessibilityDelegate>
{
    _Bool _shouldScrollIntoViewOnSelectionChange;
    _Bool _scrollViewDragged;
    _Bool _scrollViewDragging;
    unsigned long long _scrollPosition;
    id <NFUIManagedCollectionViewControllerDelegate><NFUICollectionViewCellManagerDelegate><NFUICellSelectionProtocol> _delegate;
    NavigationBarAppearanceManager *_navBarManager;
    NFUICollectionViewCellManager *_cellManager;
    CDUnknownBlockType _dequeueBlock;
    CDUnknownBlockType _vmBlock;
    CDUnknownBlockType _sizeBlock;
    UIView *_fullScreenTransitionDestinationView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    unsigned long long _overContextViewCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long overContextViewCount; // @synthesize overContextViewCount=_overContextViewCount;
@property(nonatomic) _Bool scrollViewDragging; // @synthesize scrollViewDragging=_scrollViewDragging;
@property(nonatomic) _Bool scrollViewDragged; // @synthesize scrollViewDragged=_scrollViewDragged;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UIView *fullScreenTransitionDestinationView; // @synthesize fullScreenTransitionDestinationView=_fullScreenTransitionDestinationView;
@property(copy, nonatomic) CDUnknownBlockType sizeBlock; // @synthesize sizeBlock=_sizeBlock;
@property(copy, nonatomic) CDUnknownBlockType vmBlock; // @synthesize vmBlock=_vmBlock;
@property(copy, nonatomic) CDUnknownBlockType dequeueBlock; // @synthesize dequeueBlock=_dequeueBlock;
@property(retain, nonatomic) NFUICollectionViewCellManager *cellManager; // @synthesize cellManager=_cellManager;
@property(retain, nonatomic) NavigationBarAppearanceManager *navBarManager; // @synthesize navBarManager=_navBarManager;
@property(nonatomic) __weak id <NFUIManagedCollectionViewControllerDelegate><NFUICollectionViewCellManagerDelegate><NFUICellSelectionProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldScrollIntoViewOnSelectionChange; // @synthesize shouldScrollIntoViewOnSelectionChange=_shouldScrollIntoViewOnSelectionChange;
@property(nonatomic) unsigned long long scrollPosition; // @synthesize scrollPosition=_scrollPosition;
- (id)visibleViews;
- (_Bool)accessibilityScroll:(long long)arg1;
- (id)accessibilityScrollStatusForScrollView:(id)arg1;
- (void)triggerScrollEvent;
- (void)invalidateLayoutForIndexPaths:(id)arg1;
- (void)refreshModelAtIndexPath:(id)arg1;
- (void)reloadViewModelAtIndexPath:(id)arg1;
- (void)reloadViewModelsAtIndexPaths:(id)arg1;
- (void)transitionCellAtIndexPathToFullScreen:(id)arg1;
- (id)dequeueCellForReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 forKind:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)sizeForCellAtIndexPath:(id)arg1 forKind:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForViewInSection:(long long)arg3 forKind:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForIndexPath:(id)arg1 forKind:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isViewControllerPresentOverContext;
- (void)viewControllerOverContextDidDisappear:(id)arg1;
- (void)viewControllerOverContextWillDisappear:(id)arg1;
- (void)viewControllerOverContextWillAppear:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingView:(id)arg2 forIndexPath:(id)arg3 forKind:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayView:(id)arg2 forIndexPath:(id)arg3 forKind:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)performCellDeselection:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)scrollSelectionIntoView:(id)arg1;
- (id)performCellSelection:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)finishScroll;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

