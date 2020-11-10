//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NFUIReusableViewManager, NSArray, NSMutableArray, NSString, UICollectionView;
@protocol NFUISearchCategoryListViewModelDelegateProtocol, NFUISearchCellViewModelProtocol;

@interface NFUISearchCategoriesListViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    id <NFUISearchCategoryListViewModelDelegateProtocol> _delegate;
    NSArray *_genres;
    NFUIReusableViewManager *_reusableViewManager;
    NSMutableArray<NFUISearchCellViewModelProtocol> *_viewModelCache;
}

+ (id)registrationObjects;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray<NFUISearchCellViewModelProtocol> *viewModelCache; // @synthesize viewModelCache=_viewModelCache;
@property(retain, nonatomic) NFUIReusableViewManager *reusableViewManager; // @synthesize reusableViewManager=_reusableViewManager;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(nonatomic) __weak id <NFUISearchCategoryListViewModelDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

