//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASCommonCollectionDelegate-Protocol.h>
#import <AsyncDisplayKit/NSObject-Protocol.h>

@class ASBatchContext, ASCellNode, ASCollectionNode, ASCollectionView, NSIndexPath;

@protocol ASCollectionDelegate <ASCommonCollectionDelegate, NSObject>

@optional
- (void)collectionView:(ASCollectionView *)arg1 willDisplayNodeForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)shouldBatchFetchForCollectionView:(ASCollectionView *)arg1;
- (void)collectionView:(ASCollectionView *)arg1 willBeginBatchFetchWithContext:(ASBatchContext *)arg2;
- (void)collectionView:(ASCollectionView *)arg1 didEndDisplayingNode:(ASCellNode *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(ASCollectionView *)arg1 willDisplayNode:(ASCellNode *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (CDStruct_42a63532)collectionView:(ASCollectionView *)arg1 constrainedSizeForNodeAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)shouldBatchFetchForCollectionNode:(ASCollectionNode *)arg1;
- (void)collectionNode:(ASCollectionNode *)arg1 willBeginBatchFetchWithContext:(ASBatchContext *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(NSIndexPath *)arg3 sender:(id)arg4;
- (_Bool)collectionNode:(ASCollectionNode *)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(NSIndexPath *)arg3 sender:(id)arg4;
- (_Bool)collectionNode:(ASCollectionNode *)arg1 shouldShowMenuForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionNode:(ASCollectionNode *)arg1 shouldDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionNode:(ASCollectionNode *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 didUnhighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 didHighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionNode:(ASCollectionNode *)arg1 shouldHighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 didEndDisplayingSupplementaryElementWithNode:(ASCellNode *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 willDisplaySupplementaryElementWithNode:(ASCellNode *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 didEndDisplayingItemWithNode:(ASCellNode *)arg2;
- (void)collectionNode:(ASCollectionNode *)arg1 willDisplayItemWithNode:(ASCellNode *)arg2;
- (CDStruct_42a63532)collectionNode:(ASCollectionNode *)arg1 constrainedSizeForItemAtIndexPath:(NSIndexPath *)arg2;
@end

