//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HuluAPI/_TtC7HuluAPI10ActionBelt.h>

#import <HuluAPI/UICollectionViewDataSource-Protocol.h>
#import <HuluAPI/UICollectionViewDelegate-Protocol.h>

@interface _TtC7HuluAPI10ActionBelt (HuluAPI) <UICollectionViewDelegate, UICollectionViewDataSource>
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@end
