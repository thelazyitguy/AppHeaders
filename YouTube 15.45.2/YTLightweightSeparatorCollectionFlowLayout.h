//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface YTLightweightSeparatorCollectionFlowLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_indexPathsForSupplementaryViewsToDelete;
    _Bool _editing;
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)topAlignCellLayoutAttributes:(id)arg1 usingTopY:(double)arg2;
- (void)initializeTopAlignmentTrackersForAttributes:(id)arg1 currentRowCenterY:(double *)arg2 currentRowMinimumTopY:(double *)arg3 currentRowAttributes:(id)arg4;
- (void)maybeTopAlignCellsWithLayoutAttributes:(id)arg1;
- (void)updateLayoutAttributes:(id)arg1;
- (_Bool)shouldShowBottomSeparatorForCellAtIndexPath:(id)arg1;
- (id)collectionViewDelegate;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

