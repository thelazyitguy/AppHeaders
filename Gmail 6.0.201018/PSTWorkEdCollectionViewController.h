//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewController.h"

@class GSCProfileDataOrganizations, NSArray, PSTCardExpando;
@protocol PSTCardContentDelegate, PSTCommonCardDependencies;

@interface PSTWorkEdCollectionViewController : MDCCollectionViewController
{
    GSCProfileDataOrganizations *_data;
    NSArray *_sectionData;
    unsigned long long _sizeState;
    id <PSTCommonCardDependencies> _commonCardDependencies;
    PSTCardExpando *_expando;
    id <PSTCardContentDelegate> _delegate;
}

+ (_Bool)dataIsExpandable:(id)arg1;
+ (id)sectionsForData:(id)arg1 sizeState:(unsigned long long)arg2;
+ (double)heightWithData:(id)arg1 sizeState:(unsigned long long)arg2 width:(double)arg3;
- (void).cxx_destruct;
- (void)didTapFooter;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHideItemSeparatorAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)iconForIndexPath:(id)arg1;
- (void)setData:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSizeState:(unsigned long long)arg1 commonCardDependencies:(id)arg2 delegate:(id)arg3;

@end

