//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class GTECache, GTEDateHeaderView, GTETaskItemView, GTETasksDoneFooterView, GTETasksDoneHeaderView, GTETasksSortHeaderView, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSObject, UICollectionViewLayoutAttributes;
@protocol GTEDataModelKeyProvider, GTELoggersProvider><GTETasksKitFeatureFlagsProvider, GTETasksLayoutDataSource, GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider><GTENavigationServiceProvider;

@interface GTETasksLayout : UICollectionViewLayout
{
    NSObject<GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider><GTENavigationServiceProvider> *_appContext;
    NSObject<GTELoggersProvider><GTETasksKitFeatureFlagsProvider> *_userContext;
    NSObject<GTEDataModelKeyProvider> *_dataContext;
    GTETaskItemView *_sizingTaskItemView;
    GTETasksDoneHeaderView *_sizingDoneHeaderView;
    GTETasksDoneFooterView *_sizingDoneFooterView;
    GTEDateHeaderView *_sizingDateHeaderView;
    GTETasksSortHeaderView *_sizingSortHeaderView;
    GTECache *_taskItemCachedHeights;
    double _doneHeaderCachedHeight;
    double _doneFooterCachedHeight;
    double _dateHeaderCachedHeight;
    double _sortHeaderCachedHeight;
    NSMutableDictionary *_tasksAttrs;
    NSMutableDictionary *_dateHeaderAttrs;
    UICollectionViewLayoutAttributes *_emptyStateAttrs;
    UICollectionViewLayoutAttributes *_errorStateAttrs;
    UICollectionViewLayoutAttributes *_doneHeaderAttrs;
    UICollectionViewLayoutAttributes *_doneFooterAttrs;
    UICollectionViewLayoutAttributes *_doneHeaderPreviousAttrs;
    UICollectionViewLayoutAttributes *_sortHeaderAttrs;
    NSMutableIndexSet *_insertedSections;
    NSMutableSet *_insertedItems;
    NSMutableIndexSet *_deletedSections;
    NSMutableSet *_deletedItems;
    struct CGSize _contentSize;
    _Bool _needsLayout;
    id <GTETasksLayoutDataSource> _dataSource;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GTETasksLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)presentationModel;
- (id)taskItemHeightCacheKeyForTask:(id)arg1 assignee:(id)arg2 allowDateTime:(_Bool)arg3 contentIndent:(long long)arg4;
- (void)clearCachedAttributes;
- (void)updateAttrs:(id)arg1 withTopY:(double)arg2 width:(double)arg3 height:(double)arg4;
- (id)attributesForSupplementaryViewAtIndexPath:(id)arg1 kind:(id)arg2 topY:(double)arg3 width:(double)arg4 height:(double)arg5;
- (id)attributesForTask:(id)arg1 atIndexPath:(id)arg2 topY:(double)arg3 width:(double)arg4 contentIndent:(long long)arg5 assignee:(id)arg6 chatRoom:(id)arg7;
- (double)layoutDoneFooterAtTopY:(double)arg1 width:(double)arg2 section:(long long)arg3;
- (double)layoutErrorStateViewAtTopY:(double)arg1 width:(double)arg2 forSection:(long long)arg3;
- (double)layoutEmptyStateViewAtTopY:(double)arg1 width:(double)arg2 forSection:(long long)arg3;
- (double)layoutDoneHeaderAtTopY:(double)arg1 width:(double)arg2 section:(long long)arg3;
- (double)layoutDateHeaderAtTopY:(double)arg1 width:(double)arg2 forSection:(long long)arg3;
- (double)layoutSortHeaderAtTopY:(double)arg1 width:(double)arg2 section:(long long)arg3;
- (double)layoutTasksInSection:(long long)arg1 atTopY:(double)arg2 width:(double)arg3 previousTasksAttrs:(id)arg4;
- (double)updateLayoutAttributesWithWidth:(double)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (struct CGRect)frameForGroup:(id)arg1;
- (id)initWithAppContext:(id)arg1 userContext:(id)arg2 dataContext:(id)arg3;

@end

