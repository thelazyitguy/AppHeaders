//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASCommonCollectionDataSource-Protocol.h>

@class ASCellNode, ASCollectionNode, ASCollectionView, NSArray, NSIndexPath, NSString;
@protocol ASSectionContext;

@protocol ASCollectionDataSource <ASCommonCollectionDataSource>

@optional
- (void)collectionViewUnlockDataSource:(ASCollectionView *)arg1;
- (void)collectionViewLockDataSource:(ASCollectionView *)arg1;
- (ASCellNode *)collectionView:(ASCollectionView *)arg1 nodeForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (ASCellNode * (^)(void))collectionView:(ASCollectionView *)arg1 nodeBlockForItemAtIndexPath:(NSIndexPath *)arg2;
- (ASCellNode *)collectionView:(ASCollectionView *)arg1 nodeForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)indexPathForElementWithModelIdentifier:(NSString *)arg1 inNode:(ASCollectionNode *)arg2;
- (NSString *)modelIdentifierForElementAtIndexPath:(NSIndexPath *)arg1 inNode:(ASCollectionNode *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionNode:(ASCollectionNode *)arg1 canMoveItemWithNode:(ASCellNode *)arg2;
- (NSArray *)collectionNode:(ASCollectionNode *)arg1 supplementaryElementKindsInSection:(long long)arg2;
- (id <ASSectionContext>)collectionNode:(ASCollectionNode *)arg1 contextForSection:(long long)arg2;
- (ASCellNode *)collectionNode:(ASCollectionNode *)arg1 nodeForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (ASCellNode * (^)(void))collectionNode:(ASCollectionNode *)arg1 nodeBlockForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (ASCellNode *)collectionNode:(ASCollectionNode *)arg1 nodeForItemAtIndexPath:(NSIndexPath *)arg2;
- (ASCellNode * (^)(void))collectionNode:(ASCollectionNode *)arg1 nodeBlockForItemAtIndexPath:(NSIndexPath *)arg2;
- (id)collectionNode:(ASCollectionNode *)arg1 nodeModelForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)numberOfSectionsInCollectionNode:(ASCollectionNode *)arg1;
- (long long)collectionNode:(ASCollectionNode *)arg1 numberOfItemsInSection:(long long)arg2;
@end
