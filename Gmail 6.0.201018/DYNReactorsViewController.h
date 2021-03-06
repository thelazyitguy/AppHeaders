//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOIndeterminateProgressBarDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DYNReactorsCollectionViewLayout, DYNReactorsHeaderView, DYNRoundedView, GOOIndeterminateProgressBar, NSArray, NSString, UICollectionView;
@protocol DYNColorSchemeService, DYNExperimentsService, DYNMemberCacheService, DYNReaction, DYNSharedLayerService;

@interface DYNReactorsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, GOOIndeterminateProgressBarDelegate>
{
    id <DYNColorSchemeService> _colorSchemeService;
    id <DYNExperimentsService> _experimentsService;
    id <DYNReaction> _reaction;
    NSArray *_reactors;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNMemberCacheService> _memberCacheService;
    UICollectionView *_collectionView;
    DYNReactorsCollectionViewLayout *_flowLayout;
    DYNReactorsHeaderView *_headerViewForSizing;
    DYNRoundedView *_backgroundView;
    GOOIndeterminateProgressBar *_progressBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GOOIndeterminateProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) DYNRoundedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) DYNReactorsHeaderView *headerViewForSizing; // @synthesize headerViewForSizing=_headerViewForSizing;
@property(retain, nonatomic) DYNReactorsCollectionViewLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <DYNMemberCacheService> memberCacheService; // @synthesize memberCacheService=_memberCacheService;
@property(retain, nonatomic) id <DYNSharedLayerService> sharedLayerService; // @synthesize sharedLayerService=_sharedLayerService;
@property(retain, nonatomic) NSArray *reactors; // @synthesize reactors=_reactors;
@property(retain, nonatomic) id <DYNReaction> reaction; // @synthesize reaction=_reaction;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)animationFinished:(id)arg1;
- (void)hideProgressBar;
- (void)showProgressBar;
- (void)setUpProgressBar;
- (struct CGSize)preferredContentSize;
- (id)navigationPrimaryScrollView;
- (void)viewDidLoad;
- (id)usersFromMembers:(id)arg1;
- (void)onFetchedReactorsForMessageID:(id)arg1 withUserIDs:(id)arg2;
- (void)fetchReactorsForMessageID:(id)arg1;
- (id)initWithReaction:(id)arg1 toMessageId:(id)arg2 accountID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

