//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDKCollectionCellModel-Protocol.h"

@class GDKCollectionSizeConstraints;

@protocol GDKCollectionManuallySizedCellModel <GDKCollectionCellModel>
- (struct CGSize)sizeConstrainedToSizeConstraints:(GDKCollectionSizeConstraints *)arg1 viewBlock:(UICollectionViewCell<GDKDequeuableCollectionViewCell> * (^)(void))arg2 sizingBlock:(struct CGSize (^)(double))arg3;
@end
