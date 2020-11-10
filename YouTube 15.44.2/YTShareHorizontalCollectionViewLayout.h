//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <Module_Framework/YTCollectionViewLayoutScrollDirectionProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface YTShareHorizontalCollectionViewLayout : UICollectionViewLayout <YTCollectionViewLayoutScrollDirectionProtocol>
{
    NSMutableArray *_layoutAttributesCells;
    NSMutableArray *_layoutAttributesFooters;
    NSMutableArray *_layoutAttributesHeaders;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
- (long long)scrollDirection;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

