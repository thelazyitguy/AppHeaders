//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "A9VSWaterfallLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class A9VSWaterFallLayout, NSString, UIActivityIndicatorView, UICollectionView;
@protocol A9VSLCWaterfallDelegate;

@interface A9VSLCWaterfallViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, A9VSWaterfallLayoutDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    _Bool _shouldLogUserDidScrollMetric;
    id <A9VSLCWaterfallDelegate> _delegate;
    UICollectionView *_collectionView;
    A9VSWaterFallLayout *_flowLayout;
    UIActivityIndicatorView *_progressIndicator;
    double _previousContentYOffset;
    unsigned long long _currentPageNum;
}

@property(nonatomic) unsigned long long currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(nonatomic) _Bool shouldLogUserDidScrollMetric; // @synthesize shouldLogUserDidScrollMetric=_shouldLogUserDidScrollMetric;
@property(nonatomic) double previousContentYOffset; // @synthesize previousContentYOffset=_previousContentYOffset;
@property(retain, nonatomic) UIActivityIndicatorView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) A9VSWaterFallLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <A9VSLCWaterfallDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)cellSizeAtIndex:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)stopAndHideProgressIndicator;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)referenceSizeForFooterView;
- (struct CGPoint)itemPosOffsetAtIndexPath:(id)arg1;
- (struct CGSize)itemSizeAtIndexPath:(id)arg1;
- (void)resetScrollPosToTop;
- (void)reloadViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
