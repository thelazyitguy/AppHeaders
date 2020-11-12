//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGFeatureRequestsDataStoreDelegate-Protocol.h>

@class IBGFeatureRequestsDataStore, IBGFeaturesInteractorState, NSArray, NSString;
@protocol IBGFeaturePresenterDelegate;

@interface IBGFeaturesInteractor : NSObject <IBGFeatureRequestsDataStoreDelegate>
{
    _Bool _isVoting;
    _Bool _hasNextPage;
    id <IBGFeaturePresenterDelegate> _delegate;
    long long _filterType;
    IBGFeatureRequestsDataStore *_dataStore;
    NSString *_searchString;
    long long _sortingType;
    IBGFeaturesInteractorState *_state;
    IBGFeaturesInteractorState *_normalState;
    IBGFeaturesInteractorState *_searchState;
}

@property(retain, nonatomic) IBGFeaturesInteractorState *searchState; // @synthesize searchState=_searchState;
@property(retain, nonatomic) IBGFeaturesInteractorState *normalState; // @synthesize normalState=_normalState;
@property(retain, nonatomic) IBGFeaturesInteractorState *state; // @synthesize state=_state;
@property(nonatomic) long long sortingType; // @synthesize sortingType=_sortingType;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) _Bool isVoting; // @synthesize isVoting=_isVoting;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) IBGFeatureRequestsDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) __weak id <IBGFeaturePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didVote:(_Bool)arg1 onFeature:(id)arg2 withError:(id)arg3;
- (void)didFetchFeatures:(id)arg1 nextPageAvailable:(_Bool)arg2 error:(id)arg3;
- (id)stringForSortingType:(long long)arg1;
- (id)sortDescriptorsForSortingType:(long long)arg1;
- (void)setDatastoreFilters;
- (void)didVoteOnFeature:(id)arg1 votedUp:(_Bool)arg2;
- (void)executeFetchRequest;
- (void)executeInitialFetchWithSearchString:(id)arg1;
- (unsigned long long)nextPage;
- (_Bool)isNetworkReachable;
- (long long)indexForFeature:(id)arg1;
- (long long)featuresCount;
@property(readonly, nonatomic) NSArray *features;
- (id)featureAtIndex:(unsigned long long)arg1;
- (void)didUpdateFeatureRequest:(id)arg1;
- (void)didChangeSearchState:(long long)arg1;
- (void)voteOnFeatureAtIndex:(unsigned long long)arg1 upVote:(_Bool)arg2;
- (void)loadMoreFeatures;
- (_Bool)updateFeaturesFilterWithType:(long long)arg1;
- (_Bool)updateSortingWithType:(long long)arg1;
- (void)fetchFeaturesWithSearchString:(id)arg1;
- (_Bool)isUITestsEnabled;
- (id)init;

@end
