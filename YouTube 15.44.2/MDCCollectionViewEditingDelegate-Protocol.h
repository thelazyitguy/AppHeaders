//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSIndexSet, UICollectionView;

@protocol MDCCollectionViewEditingDelegate <NSObject>

@optional
- (void)collectionView:(UICollectionView *)arg1 didCancelSwipeToDismissSection:(long long)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndSwipeToDismissSection:(long long)arg2;
- (void)collectionView:(UICollectionView *)arg1 willBeginSwipeToDismissSection:(long long)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canSwipeToDismissSection:(long long)arg2;
- (_Bool)collectionViewAllowsSwipeToDismissSection:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 didCancelSwipeToDismissItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndSwipeToDismissItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 willBeginSwipeToDismissItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canSwipeInDirection:(unsigned long long)arg2 toDismissItemAtIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canSwipeToDismissItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionViewAllowsSwipeToDismissItem:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 didDeleteSections:(NSIndexSet *)arg2;
- (void)collectionView:(UICollectionView *)arg1 willDeleteSections:(NSIndexSet *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (void)collectionView:(UICollectionView *)arg1 willDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndDraggingItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 willBeginDraggingItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didMoveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 willMoveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionViewAllowsReordering:(UICollectionView *)arg1;
- (_Bool)collectionView:(UICollectionView *)arg1 canSelectItemDuringEditingAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canEditItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionViewDidEndEditing:(UICollectionView *)arg1;
- (void)collectionViewWillEndEditing:(UICollectionView *)arg1;
- (void)collectionViewDidBeginEditing:(UICollectionView *)arg1;
- (void)collectionViewWillBeginEditing:(UICollectionView *)arg1;
- (_Bool)collectionViewAllowsEditing:(UICollectionView *)arg1;
@end

