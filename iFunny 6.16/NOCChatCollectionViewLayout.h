//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface NOCChatCollectionViewLayout : UICollectionViewLayout
{
    _Bool _isInverted;
    NSMutableArray *_layoutAttributes;
    struct CGSize _contentSize;
    NSMutableArray *_insertIndexPaths;
    NSMutableArray *_deleteIndexPaths;
    struct UIEdgeInsets _inset;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
- (id)layoutAttributesForLayouts:(id)arg1 containerWidth:(double)arg2 maxHeight:(double)arg3 contentHeight:(double *)arg4;
- (_Bool)hasLayoutAttributes;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)commonInit;
- (id)init;
- (id)initWithInverted:(_Bool)arg1;

@end
