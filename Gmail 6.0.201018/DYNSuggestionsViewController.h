//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNCollectionViewController.h"

#import "GILRecyclableViewLoggerDataSource-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class GILCollectionViewLogger, NSString;
@protocol HUBSearchVisualElementLoggerService;

@interface DYNSuggestionsViewController : DYNCollectionViewController <GILRecyclableViewLoggerDataSource, UICollectionViewDataSource>
{
    id <HUBSearchVisualElementLoggerService> _veLogger;
    GILCollectionViewLogger *_collectionViewLogger;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewCell:(id)arg1 didReuseWith:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)visualElementParamsForItemAtIndexPath:(id)arg1;
- (int)visualElementIDWithIndexPath:(id)arg1;
- (id)cellsUniqueIDs;
@property(readonly, nonatomic) int tabType;
- (id)initWithDescription:(id)arg1 headerParentViewController:(id)arg2 accountID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
