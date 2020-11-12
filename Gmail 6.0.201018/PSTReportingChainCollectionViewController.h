//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewController.h"

@class CSTReportingChainData, NSArray, PSTCardExpando, PSTReportingChainLayout;
@protocol PSTReportingChainCardDependencies, PSTReportingChainCollectionVCDelegate;

@interface PSTReportingChainCollectionViewController : MDCCollectionViewController
{
    CSTReportingChainData *_reportingChainData;
    NSArray *_sectionData;
    PSTReportingChainLayout *_layout;
    id <PSTReportingChainCardDependencies> _dependencies;
    long long _expansionCount;
    id <PSTReportingChainCollectionVCDelegate> _delegate;
    PSTCardExpando *_expando;
}

+ (id)layoutViewController;
+ (long long)numberOfExpansionsForState:(unsigned long long)arg1;
+ (_Bool)shouldUseWideLayout;
+ (double)secondHeaderHeightForLayoutData:(id)arg1;
+ (double)firstHeaderHeightForLayoutData:(id)arg1;
+ (id)sectionsFromData:(id)arg1;
+ (double)heightWithData:(id)arg1 numberOfExpansions:(long long)arg2 useWideLayout:(_Bool)arg3;
+ (id)layoutForData:(id)arg1 numberOfExpansions:(long long)arg2 useWideLayout:(_Bool)arg3;
+ (_Bool)needToShowCannotShowMoreCellWithLayout:(id)arg1;
+ (double)heightWithData:(id)arg1 numberOfExpansions:(long long)arg2;
+ (double)heightWithData:(id)arg1 sizeState:(unsigned long long)arg2 constrainedToWidth:(double)arg3;
- (void).cxx_destruct;
- (void)didTapFooter;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHideItemSeparatorAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)cellWidthAtSectionIndex:(long long)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setData:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithExpansionCount:(long long)arg1 dependencies:(id)arg2 delegate:(id)arg3;

@end
