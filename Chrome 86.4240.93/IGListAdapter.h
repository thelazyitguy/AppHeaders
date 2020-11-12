//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/IGListBatchContext-Protocol.h>
#import <ChromeInternal/IGListCollectionContext-Protocol.h>
#import <ChromeInternal/IGListCollectionViewDelegateLayout-Protocol.h>
#import <ChromeInternal/UICollectionViewDataSource-Protocol.h>

@class IGListAdapterProxy, IGListDisplayHandler, IGListSectionMap, IGListWorkingRangeHandler, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSString, UICollectionView, UIView, UIViewController;
@protocol IGListAdapterDataSource, IGListAdapterDelegate, IGListAdapterMoveDelegate, IGListUpdatingDelegate, UICollectionViewDelegate, UIScrollViewDelegate;

@interface IGListAdapter : NSObject <UICollectionViewDataSource, IGListCollectionViewDelegateLayout, IGListCollectionContext, IGListBatchContext>
{
    UICollectionView *_collectionView;
    _Bool _isDequeuingCell;
    _Bool _isSendingWorkingRangeDisplayUpdates;
    NSMapTable *_viewSectionControllerMap;
    NSMutableArray *_queuedCompletionBlocks;
    NSHashTable *_updateListeners;
    _Bool _isLastInteractiveMoveToLastSectionIndex;
    _Bool _isInUpdateBlock;
    UIViewController *_viewController;
    id <IGListAdapterDataSource> _dataSource;
    id <IGListAdapterDelegate> _delegate;
    id <UICollectionViewDelegate> _collectionViewDelegate;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    id <IGListAdapterMoveDelegate> _moveDelegate;
    id <IGListUpdatingDelegate> _updater;
    long long _experiments;
    IGListSectionMap *_sectionMap;
    IGListDisplayHandler *_displayHandler;
    IGListWorkingRangeHandler *_workingRangeHandler;
    IGListAdapterProxy *_delegateProxy;
    UIView *_emptyBackgroundView;
    IGListSectionMap *_previousSectionMap;
    NSMutableSet *_registeredCellClasses;
    NSMutableSet *_registeredNibNames;
    NSMutableSet *_registeredSupplementaryViewIdentifiers;
    NSMutableSet *_registeredSupplementaryViewNibNames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *registeredSupplementaryViewNibNames; // @synthesize registeredSupplementaryViewNibNames=_registeredSupplementaryViewNibNames;
@property(retain, nonatomic) NSMutableSet *registeredSupplementaryViewIdentifiers; // @synthesize registeredSupplementaryViewIdentifiers=_registeredSupplementaryViewIdentifiers;
@property(retain, nonatomic) NSMutableSet *registeredNibNames; // @synthesize registeredNibNames=_registeredNibNames;
@property(retain, nonatomic) NSMutableSet *registeredCellClasses; // @synthesize registeredCellClasses=_registeredCellClasses;
@property(retain, nonatomic) IGListSectionMap *previousSectionMap; // @synthesize previousSectionMap=_previousSectionMap;
@property(nonatomic) _Bool isInUpdateBlock; // @synthesize isInUpdateBlock=_isInUpdateBlock;
@property(nonatomic) _Bool isLastInteractiveMoveToLastSectionIndex; // @synthesize isLastInteractiveMoveToLastSectionIndex=_isLastInteractiveMoveToLastSectionIndex;
@property(retain, nonatomic) UIView *emptyBackgroundView; // @synthesize emptyBackgroundView=_emptyBackgroundView;
@property(retain, nonatomic) IGListAdapterProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly, nonatomic) IGListWorkingRangeHandler *workingRangeHandler; // @synthesize workingRangeHandler=_workingRangeHandler;
@property(readonly, nonatomic) IGListDisplayHandler *displayHandler; // @synthesize displayHandler=_displayHandler;
@property(readonly, nonatomic) IGListSectionMap *sectionMap; // @synthesize sectionMap=_sectionMap;
@property(nonatomic) long long experiments; // @synthesize experiments=_experiments;
@property(retain, nonatomic) id <IGListUpdatingDelegate> updater; // @synthesize updater=_updater;
@property(nonatomic) __weak id <IGListAdapterMoveDelegate> moveDelegate; // @synthesize moveDelegate=_moveDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <UICollectionViewDelegate> collectionViewDelegate; // @synthesize collectionViewDelegate=_collectionViewDelegate;
@property(nonatomic) __weak id <IGListAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGListAdapterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)revertInvalidInteractiveMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveInSectionControllerInteractive:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)moveSectionControllerInteractive:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)reloadSectionController:(id)arg1;
- (void)moveInSectionController:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)deleteInSectionController:(id)arg1 atIndexes:(id)arg2;
- (void)insertInSectionController:(id)arg1 atIndexes:(id)arg2;
- (void)reloadInSectionController:(id)arg1 atIndexes:(id)arg2;
- (void)invalidateLayoutForSectionController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollToSectionController:(id)arg1 atIndex:(long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)performBatchAnimated:(_Bool)arg1 updates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 forSectionController:(id)arg2 nibName:(id)arg3 bundle:(id)arg4 atIndex:(long long)arg5;
- (id)dequeueReusableSupplementaryViewFromStoryboardOfKind:(id)arg1 withIdentifier:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 forSectionController:(id)arg2 class:(Class)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableCellWithNibName:(id)arg1 bundle:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableCellFromStoryboardWithIdentifier:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableCellOfClass:(Class)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableCellOfClass:(Class)arg1 withReuseIdentifier:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4;
- (void)selectItemAtIndex:(long long)arg1 sectionController:(id)arg2 animated:(_Bool)arg3 scrollPosition:(unsigned long long)arg4;
- (void)deselectItemAtIndex:(long long)arg1 sectionController:(id)arg2 animated:(_Bool)arg3;
- (id)visibleIndexPathsForSectionController:(id)arg1;
- (id)visibleCellsForSectionController:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1 sectionController:(id)arg2;
- (long long)indexForCell:(id)arg1 sectionController:(id)arg2;
- (struct CGSize)containerSizeForSectionController:(id)arg1;
@property(readonly, nonatomic) struct CGSize insetContainerSize;
@property(readonly, nonatomic) struct UIEdgeInsets adjustedContainerInset;
@property(readonly, nonatomic) struct UIEdgeInsets containerInset;
@property(readonly, nonatomic) struct CGSize containerSize;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_exitBatchUpdates;
- (void)_enterBatchUpdates;
- (void)_deferBlockBetweenBatchUpdates:(CDUnknownBlockType)arg1;
- (void)removeMapForView:(id)arg1;
- (id)sectionControllerForView:(id)arg1;
- (void)mapView:(id)arg1 toSectionController:(id)arg2;
- (id)_layoutAttributesForIndexPath:(id)arg1 supplementaryKinds:(id)arg2;
- (id)indexPathForSectionController:(id)arg1 index:(long long)arg2 usePreviousIfInUpdateBlock:(_Bool)arg3;
- (id)indexPathsFromSectionController:(id)arg1 indexes:(id)arg2 usePreviousIfInUpdateBlock:(_Bool)arg3;
- (id)_sectionMapUsingPreviousIfInUpdateBlock:(_Bool)arg1;
- (_Bool)_itemCountIsZero;
- (void)_updateBackgroundViewShouldHide:(_Bool)arg1;
- (void)_updateObjects:(id)arg1 dataSource:(id)arg2;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (id)visibleCellsForObject:(id)arg1;
- (id)visibleObjects;
- (id)_visibleSectionControllersFromDisplayHandler;
- (id)_visibleSectionControllersFromLayoutAttributes;
- (id)visibleSectionControllers;
- (id)_supplementaryViewSourceAtIndexPath:(id)arg1;
- (id)objects;
- (long long)sectionForObject:(id)arg1;
- (id)objectAtSection:(long long)arg1;
- (id)objectForSectionController:(id)arg1;
- (id)sectionControllerForObject:(id)arg1;
- (long long)sectionForSectionController:(id)arg1;
- (id)sectionControllerForSection:(long long)arg1;
- (void)_notifyDidUpdate:(long long)arg1 animated:(_Bool)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)reloadObjects:(id)arg1;
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)performUpdatesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollToObject:(id)arg1 supplementaryKinds:(id)arg2 scrollDirection:(long long)arg3 scrollPosition:(unsigned long long)arg4 animated:(_Bool)arg5;
- (void)_updateCollectionViewDelegate;
- (void)_createProxyAndUpdateCollectionViewDelegate;
- (void)_updateAfterPublicSettingsChange;
@property(nonatomic) __weak UICollectionView *collectionView;
- (id)initWithUpdater:(id)arg1 viewController:(id)arg2;
- (id)initWithUpdater:(id)arg1 viewController:(id)arg2 workingRangeSize:(long long)arg3;
- (void)dealloc;
- (void)setASDKCollectionNode:(id)arg1;
- (id)debugDescriptionLines;
@property(readonly, copy) NSString *debugDescription;
- (id)collectionView:(id)arg1 layout:(id)arg2 customizedFinalLayoutAttributes:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 customizedInitialLayoutAttributes:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
