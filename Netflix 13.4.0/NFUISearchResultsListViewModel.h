//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NFUIReusableViewManager, NSMutableDictionary, NSNumber, NSString, UICollectionView;
@protocol NFUISearchResultsListViewModelDelegateProtocol, NFUISearchResultsModelProtocol;

@interface NFUISearchResultsListViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool scrollViewDragged;
    UICollectionView *_collectionView;
    id <NFUISearchResultsListViewModelDelegateProtocol> _delegate;
    unsigned long long _videosPerRowPortrait;
    unsigned long long _videosPerRowLandscape;
    unsigned long long _suggestionsPerRow;
    double _lineSpacing;
    double _itemSpacing;
    id <NFUISearchResultsModelProtocol> _model;
    NSNumber *_videoPresentationId;
    NSNumber *_suggestionsPresentationId;
    NFUIReusableViewManager *_reusableViewManager;
    NSMutableDictionary *_viewModelCache;
}

+ (id)cellViewModelMap;
+ (id)registrationObjects;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *viewModelCache; // @synthesize viewModelCache=_viewModelCache;
@property(retain, nonatomic) NFUIReusableViewManager *reusableViewManager; // @synthesize reusableViewManager=_reusableViewManager;
@property(retain, nonatomic) NSNumber *suggestionsPresentationId; // @synthesize suggestionsPresentationId=_suggestionsPresentationId;
@property(retain, nonatomic) NSNumber *videoPresentationId; // @synthesize videoPresentationId=_videoPresentationId;
@property(retain, nonatomic) id <NFUISearchResultsModelProtocol> model; // @synthesize model=_model;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned long long suggestionsPerRow; // @synthesize suggestionsPerRow=_suggestionsPerRow;
@property(nonatomic) unsigned long long videosPerRowLandscape; // @synthesize videosPerRowLandscape=_videosPerRowLandscape;
@property(nonatomic) unsigned long long videosPerRowPortrait; // @synthesize videosPerRowPortrait=_videosPerRowPortrait;
@property(nonatomic) __weak id <NFUISearchResultsListViewModelDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)endPresentationSessions;
- (id)loggingDictForDataDict:(id)arg1 index:(long long)arg2 type:(id)arg3;
- (void)logPresentationOfVisibleItems;
- (void)clearResults;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)titleForIndexPath:(id)arg1;
- (id)cellIdentifierForIndexPath:(id)arg1 withKind:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadCollectionViewSafely:(CDUnknownBlockType)arg1;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
