//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UICollectionViewDragDelegate-Protocol.h"
#import "UICollectionViewDropDelegate-Protocol.h"

@interface _TtC6Reddit34MediaGalleryOrderingViewController : BaseViewController <UICollectionViewDragDelegate, UICollectionViewDropDelegate>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: maxGallerySize
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: annotatedImages
    // Error parsing type: , name: isDragging
    // Error parsing type: , name: tooltipManager
    // Error parsing type: , name: collectionView
}

- (void).cxx_destruct;
- (id)init;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)configureViewAppearance;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

