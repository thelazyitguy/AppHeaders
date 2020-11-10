//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASCollectionDelegate-Protocol.h>

@class ASCollectionNode, ASCollectionView, UICollectionView, UICollectionViewLayout;

@protocol ASCollectionDelegateFlowLayout <ASCollectionDelegate>

@optional
- (struct CGSize)collectionView:(ASCollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(ASCollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CDStruct_42a63532)collectionNode:(ASCollectionNode *)arg1 sizeRangeForFooterInSection:(long long)arg2;
- (CDStruct_42a63532)collectionNode:(ASCollectionNode *)arg1 sizeRangeForHeaderInSection:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
@end

