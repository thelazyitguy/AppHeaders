//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicContentFilterDataLoaderDelegate-Protocol.h"

@class NSArray, NSString, SPTYourLibraryMusicContentFilterDataLoader;
@protocol SPTLocalSettings, SPTSortingFilteringSortRule, SPTYourLibraryMusicFilterSortManagerDelegate;

@interface SPTYourLibraryMusicFilterSortManager : NSObject <SPTYourLibraryMusicContentFilterDataLoaderDelegate>
{
    NSArray *_sortRules;
    NSArray *_filterRules;
    id <SPTYourLibraryMusicFilterSortManagerDelegate> _delegate;
    id <SPTLocalSettings> _localSettings;
    NSString *_identifier;
    unsigned long long _defaultSortRuleIndex;
    SPTYourLibraryMusicContentFilterDataLoader *_contentFiltersDataLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTYourLibraryMusicContentFilterDataLoader *contentFiltersDataLoader; // @synthesize contentFiltersDataLoader=_contentFiltersDataLoader;
@property(readonly, nonatomic) unsigned long long defaultSortRuleIndex; // @synthesize defaultSortRuleIndex=_defaultSortRuleIndex;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTYourLibraryMusicFilterSortManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *filterRules; // @synthesize filterRules=_filterRules;
@property(copy, nonatomic) NSArray *sortRules; // @synthesize sortRules=_sortRules;
- (void)contentFilterDataLoader:(id)arg1 filtersLoaded:(id)arg2;
- (void)contentFilterDataLoader:(id)arg1 error:(id)arg2;
- (void)loadContentFilters;
- (void)storeFilterRulesWithIdentifiers:(id)arg1;
@property(copy, nonatomic) NSArray *storedFilterRules;
- (void)storeSortRuleWithIdentifier:(id)arg1;
@property(retain, nonatomic) id <SPTSortingFilteringSortRule> storedSortRule;
- (id)filterRulesKey;
- (id)sortRuleKey;
- (id)initWithFilterRules:(id)arg1 sortRules:(id)arg2 defaultSortRuleIndex:(long long)arg3 contentFiltersDataLoader:(id)arg4 localSettings:(id)arg5 identifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

