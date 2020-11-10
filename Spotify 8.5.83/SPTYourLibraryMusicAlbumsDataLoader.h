//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicRangeDataLoader-Protocol.h"

@class NSString;
@protocol SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTYourLibraryMusicRangeDataLoaderDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicAlbumsDataLoader : NSObject <SPTYourLibraryMusicRangeDataLoader>
{
    id <SPTYourLibraryMusicRangeDataLoaderDelegate> rangeDataLoaderDelegate;
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
    id <SPTYourLibraryMusicTestManager> _testManager;
    unsigned long long _totalNumberOfItems;
    id <SPTCollectionPlatformDataLoaderRequestToken> _subscription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> subscription; // @synthesize subscription=_subscription;
@property(nonatomic) unsigned long long totalNumberOfItems; // @synthesize totalNumberOfItems=_totalNumberOfItems;
@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
@property(nonatomic) __weak id <SPTYourLibraryMusicRangeDataLoaderDelegate> rangeDataLoaderDelegate; // @synthesize rangeDataLoaderDelegate;
- (void)loadItemsForRange:(struct _NSRange)arg1 sortRules:(id)arg2 filterRules:(id)arg3 textFilter:(id)arg4;
- (id)initWithCollectionDataLoader:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

