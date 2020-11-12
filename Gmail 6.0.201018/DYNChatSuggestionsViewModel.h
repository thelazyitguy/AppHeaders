//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNCollectionViewLoggerCellUniqueIdProvider-Protocol.h"
#import "DYNWorldFilterResultsSubscriptionDelegate-Protocol.h"

@class NSArray, NSString, PRMTimerCollectible;
@protocol DYNAutocompleteManager, DYNChatSuggestionsViewModelDelegate, DYNExperimentsService, DYNMemberCacheService, DYNSharedLayerService, DYNWorldFilterResultsSubscription, DYNWorldStateService, GIPAccountID;

@interface DYNChatSuggestionsViewModel : NSObject <DYNWorldFilterResultsSubscriptionDelegate, DYNCollectionViewLoggerCellUniqueIdProvider>
{
    id <GIPAccountID> _accountID;
    id <DYNExperimentsService> _experimentsService;
    id <DYNMemberCacheService> _memberCacheService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNWorldStateService> _worldStateService;
    id <DYNAutocompleteManager> _autocompleteManager;
    id <DYNWorldFilterResultsSubscription> _worldFilterResultsSubscription;
    NSArray *_directMessages;
    NSArray *_bots;
    NSArray *_autocompleteUsers;
    _Bool _hasMoreCallbacks;
    PRMTimerCollectible *_latencyTimer;
    NSArray *_cellsUniqueIDs;
    _Bool _isSearchResultEmpty;
    NSString *_searchQuery;
    NSArray *_modelContentObjects;
    id <DYNChatSuggestionsViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSearchResultEmpty; // @synthesize isSearchResultEmpty=_isSearchResultEmpty;
@property(nonatomic) __weak id <DYNChatSuggestionsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *modelContentObjects; // @synthesize modelContentObjects=_modelContentObjects;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly, nonatomic) NSArray *cellsUniqueIDs; // @synthesize cellsUniqueIDs=_cellsUniqueIDs;
- (void)onChangeWithId:(id)arg1;
- (void)stopLatencyTimer;
- (void)startLatencyTimer;
- (void)dealloc;
- (id)autocompleteMembersFromUsers:(id)arg1 excludingDMs:(id)arg2;
- (void)updateContentObjects;
- (CDUnknownBlockType)autocompleteCallback;
- (void)handleFilterWorldGroupSummaries:(id)arg1;
- (void)establishAutocompleteManagerIfNecessary;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
