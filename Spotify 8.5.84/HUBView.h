//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HUBComponentViewManagerDelegate-Protocol.h"
#import "HUBScrollViewDelegate-Protocol.h"

@class HUBCollectionViewDataSource, HUBCollectionViewLayout, HUBComponentViewImageLoader, HUBComponentViewManager, NSArray, NSHashTable, NSString, UICollectionView;
@protocol HUBViewComponentDelegate, HUBViewScrollDelegate;

@interface HUBView : UIView <HUBComponentViewManagerDelegate, HUBScrollViewDelegate>
{
    _Bool _useDiffingOnComponentModelChanges;
    UICollectionView *_contentView;
    id <HUBViewComponentDelegate> _componentDelegate;
    id <HUBViewScrollDelegate> _scrollDelegate;
    HUBComponentViewImageLoader *_componentViewImageLoader;
    HUBComponentViewManager *_componentViewManager;
    HUBCollectionViewDataSource *_collectionViewDataSource;
    NSHashTable *_visibleContentOffsetObservingComponentViews;
    NSHashTable *_contentOffsetObservers;
    HUBCollectionViewLayout *_collectionViewLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HUBCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) NSHashTable *contentOffsetObservers; // @synthesize contentOffsetObservers=_contentOffsetObservers;
@property(readonly, nonatomic) NSHashTable *visibleContentOffsetObservingComponentViews; // @synthesize visibleContentOffsetObservingComponentViews=_visibleContentOffsetObservingComponentViews;
@property(readonly, nonatomic) HUBCollectionViewDataSource *collectionViewDataSource; // @synthesize collectionViewDataSource=_collectionViewDataSource;
@property(readonly, nonatomic) HUBComponentViewManager *componentViewManager; // @synthesize componentViewManager=_componentViewManager;
@property(readonly, nonatomic) HUBComponentViewImageLoader *componentViewImageLoader; // @synthesize componentViewImageLoader=_componentViewImageLoader;
@property(nonatomic) __weak id <HUBViewScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <HUBViewComponentDelegate> componentDelegate; // @synthesize componentDelegate=_componentDelegate;
@property(readonly, nonatomic) UICollectionView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool useDiffingOnComponentModelChanges; // @synthesize useDiffingOnComponentModelChanges=_useDiffingOnComponentModelChanges;
- (void)componentViewManager:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)componentViewManager:(id)arg1 componentViewWillAppear:(id)arg2;
- (struct CGRect)contentRectForScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldBeginScrolling:(id)arg1;
- (void)scrollToComponentModel:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
@property(nonatomic) _Bool adjustsTargetContentOffset;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)componentViewsDidDisappear;
- (void)componentViewsWillDisappear;
- (void)componentViewsDidAppear;
- (void)componentViewsWillAppear;
- (void)removeContentOffsetObserver:(id)arg1;
- (void)addContentOffsetObserver:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) NSArray *componentModels;
- (void)setComponentModels:(id)arg1 animated:(_Bool)arg2;
- (id)createCollectionViewWithComponentRegistry:(id)arg1 componentLayoutManager:(id)arg2 dataSource:(id)arg3 scrollViewDelegate:(id)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 imageLoaderFactory:(id)arg2 componentLayoutManager:(id)arg3 componentRegistry:(id)arg4 componentEventHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
