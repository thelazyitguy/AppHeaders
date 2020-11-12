//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <LinkKit/PLKCustomizable-Protocol.h>
#import <LinkKit/PLKFlowCoordinated-Protocol.h>
#import <LinkKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSString, PLKFlowContext;
@protocol PLKFlowCoordinator, UIScrollViewDelegate;

@interface PLKInstitutionSelectPaneCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, PLKCustomizable, PLKFlowCoordinated>
{
    id <PLKFlowCoordinator> _flowCoordinator;
    PLKFlowContext *_flowContext;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    NSArray *_institutions;
    NSString *_searchButtonCustomization;
}

- (void).cxx_destruct;
@property(retain) NSString *searchButtonCustomization; // @synthesize searchButtonCustomization=_searchButtonCustomization;
@property(retain) NSArray *institutions; // @synthesize institutions=_institutions;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(retain, nonatomic) PLKFlowContext *flowContext; // @synthesize flowContext=_flowContext;
@property(nonatomic) __weak id <PLKFlowCoordinator> flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)customizeWithConfiguration:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)resuseIdentifierForLayout:(long long)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)calculateFlowLayout;
- (void)switchToLongtail:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)institutions:(id)arg1 supportingProducts:(long long)arg2;
- (void)loadInstitutionsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
