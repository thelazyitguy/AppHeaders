//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionReusableView, UICollectionView, UICollectionViewCell;
@protocol NICollectionViewModeling;

@protocol NICollectionViewModelDelegate <NSObject>
- (UICollectionViewCell *)collectionViewModel:(id <NICollectionViewModeling>)arg1 cellForCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3 withObject:(id)arg4;

@optional
- (void)collectionViewModel:(id <NICollectionViewModeling>)arg1 collectionView:(UICollectionView *)arg2 cancelPrefetchingItemsAtIndexPaths:(NSArray *)arg3 withObjects:(NSArray *)arg4;
- (void)collectionViewModel:(id <NICollectionViewModeling>)arg1 collectionView:(UICollectionView *)arg2 prefetchItemsAtIndexPaths:(NSArray *)arg3 withObjects:(NSArray *)arg4;
- (UICollectionReusableView *)collectionViewModel:(id <NICollectionViewModeling>)arg1 collectionView:(UICollectionView *)arg2 viewForSupplementaryElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
@end

