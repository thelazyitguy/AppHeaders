//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Economy/UICollectionViewDataSource-Protocol.h>
#import <Economy/UICollectionViewDelegate-Protocol.h>

@class NSArray;

@interface _TtC7Economy14TrophyListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    // Error parsing type: , name: leadingGradientView
    // Error parsing type: , name: trailingGradientView
    // Error parsing type: , name: collectionLayout
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: style
    // Error parsing type: , name: trophyProcessor
    // Error parsing type: , name: onTappedAction
    // Error parsing type: , name: processedTrophies
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onTapped:(CDUnknownBlockType)arg1;
@property(nonatomic, copy) NSArray *trophies;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;

@end
