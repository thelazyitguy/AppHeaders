//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class LoadingViewController, NFUILolopi, NFUILolopiBroker, NSNumber, NSString;
@protocol NFUILolopiSelectionDelegateProtocol;

@interface NFUILolopiViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>
{
    _Bool scrollViewDragged;
    id <NFUILolopiSelectionDelegateProtocol> _delegate;
    NFUILolopiBroker *_lolopiBroker;
    NFUILolopi *_lolopi;
    LoadingViewController *_loadingVC;
    NSNumber *_presentationSessionId;
}

+ (id)newLolopiViewControllerWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *presentationSessionId; // @synthesize presentationSessionId=_presentationSessionId;
@property(retain, nonatomic) LoadingViewController *loadingVC; // @synthesize loadingVC=_loadingVC;
@property(retain, nonatomic) NFUILolopi *lolopi; // @synthesize lolopi=_lolopi;
@property(retain, nonatomic) NFUILolopiBroker *lolopiBroker; // @synthesize lolopiBroker=_lolopiBroker;
@property(nonatomic) __weak id <NFUILolopiSelectionDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)logPresentationOfVisibleItems;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)backButtonTapped:(id)arg1;
- (void)addBackButton;
- (void)refresh:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

