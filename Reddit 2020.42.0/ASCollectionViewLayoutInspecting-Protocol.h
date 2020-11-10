//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/NSObject-Protocol.h>

@class ASCollectionView, NSIndexPath, NSString;
@protocol ASCollectionDataSource, ASCollectionDelegate;

@protocol ASCollectionViewLayoutInspecting <NSObject>
- (unsigned char)scrollableDirections;
- (CDStruct_42a63532)collectionView:(ASCollectionView *)arg1 constrainedSizeForNodeAtIndexPath:(NSIndexPath *)arg2;

@optional
- (unsigned long long)collectionView:(ASCollectionView *)arg1 numberOfSectionsForSupplementaryNodeOfKind:(NSString *)arg2;
- (void)didChangeCollectionViewDataSource:(id <ASCollectionDataSource>)arg1;
- (void)didChangeCollectionViewDelegate:(id <ASCollectionDelegate>)arg1;
- (unsigned long long)collectionView:(ASCollectionView *)arg1 supplementaryNodesOfKind:(NSString *)arg2 inSection:(unsigned long long)arg3;
- (CDStruct_42a63532)collectionView:(ASCollectionView *)arg1 constrainedSizeForSupplementaryNodeOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

