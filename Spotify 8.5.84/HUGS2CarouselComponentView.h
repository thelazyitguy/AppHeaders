//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewObserver-Protocol.h"
#import "HUBComponentViewWithDraggableChildren-Protocol.h"
#import "HUBComponentViewWithRestorableUIState-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView;
@protocol HUBComponentViewChildDelegate, UICollectionViewDragDelegate;

@interface HUGS2CarouselComponentView : HUGSThemableComponentView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HUBComponentViewWithDraggableChildren, HUBComponentViewObserver, HUBComponentViewWithRestorableUIState>
{
    id <HUBComponentViewChildDelegate> _childDelegate;
    UICollectionView *_collectionView;
    struct CGSize _itemSize;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 firstChildSize:(struct CGSize)arg3 theme:(id)arg4;
+ (struct UIEdgeInsets)sectionInsetsForModel:(id)arg1 theme:(id)arg2;
+ (struct CGSize)calculateChildItemSizeToSatisfyDesignRules:(struct CGSize)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
+ (struct CGSize)calculateItemSizeForModel:(id)arg1 containerViewSize:(struct CGSize)arg2 firstChildSize:(struct CGSize)arg3 theme:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void)applyThemeLayout;
- (struct CGSize)calculateFirstChildSizeForModel:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <UICollectionViewDragDelegate> dragDelegate;
- (void)restoreUIState:(id)arg1;
- (id)currentUIState;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2 collectionViewClass:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
