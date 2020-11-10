//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTSortingFilteringFilterableModel-Protocol.h"
#import "SPTSortingFilteringSortableModel-Protocol.h"

@protocol SPTYourLibraryMusicEntityModelDelegate, SPTYourLibraryMusicModelItemEntity;

@protocol SPTYourLibraryMusicEntityModel <NSObject, SPTSortingFilteringFilterableModel, SPTSortingFilteringSortableModel>
@property(readonly, nonatomic, getter=isEntityItemsArePlayable) _Bool entityItemsArePlayable;
@property(readonly, nonatomic) _Bool hasHiddenContent;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTYourLibraryMusicEntityModelDelegate> delegate;
- (void)performItemActionAtIndex:(unsigned long long)arg1 inGroup:(unsigned long long)arg2;
- (id <SPTYourLibraryMusicModelItemEntity>)itemAtIndex:(unsigned long long)arg1 inGroup:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInGroup:(unsigned long long)arg1;
- (unsigned long long)numberOfItemGroups;
- (void)loadModel;
@end

