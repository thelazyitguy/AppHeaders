//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/UICollectionViewDataSource-Protocol.h>
#import <Module_Framework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, YTEditTabBarHighlightView;
@protocol YTEditComponentStyle;

@interface YTEditTabBar : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    UICollectionViewFlowLayout *_collectionLayout;
    UICollectionView *_collectionView;
    YTEditTabBarHighlightView *_highlightView;
    NSIndexPath *_selectedIndexPath;
    id _delegate;
    NSArray *_items;
    id <YTEditComponentStyle> _style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <YTEditComponentStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateInteractiveSelectionBetweenIndex:(long long)arg1 andIndex:(long long)arg2 withPercentage:(double)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long selectedIndex;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

