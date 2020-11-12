//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ISSMultiAltSearchCellDelegate-Protocol.h"
#import "ISSSuggestionCellDelegate-Protocol.h"
#import "ISSSuggestionsFetcherDelegate-Protocol.h"
#import "ISSTemplateHandler-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ISSSuggestionsFetcher, NSArray, NSMutableArray, NSString, SRDSSearchQuery, UITableView;
@protocol ISSSearchBarDelegate, ISSViewDelegate;

@interface ISSView : UIView <ISSSuggestionsFetcherDelegate, UITableViewDataSource, UITableViewDelegate, ISSSuggestionCellDelegate, ISSMultiAltSearchCellDelegate, ISSTemplateHandler>
{
    _Bool _showAlternateSearchOptions;
    _Bool _isUpdating;
    _Bool _voiceOverWasActive;
    id <ISSViewDelegate> _ISSDelegate;
    id <ISSSearchBarDelegate> _searchBarDelegate;
    UITableView *_tableView;
    ISSSuggestionsFetcher *_suggestionsFetcher;
    NSMutableArray *_suggestions;
    NSArray *_menuItemSuggestions;
    SRDSSearchQuery *_lastQuery;
    NSArray *_alternateSearchTypes;
    NSString *_recentSearchFilteringAlias;
}

@property(copy, nonatomic) NSString *recentSearchFilteringAlias; // @synthesize recentSearchFilteringAlias=_recentSearchFilteringAlias;
@property(nonatomic) _Bool voiceOverWasActive; // @synthesize voiceOverWasActive=_voiceOverWasActive;
@property(retain, nonatomic) NSArray *alternateSearchTypes; // @synthesize alternateSearchTypes=_alternateSearchTypes;
@property(retain, nonatomic) SRDSSearchQuery *lastQuery; // @synthesize lastQuery=_lastQuery;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) _Bool showAlternateSearchOptions; // @synthesize showAlternateSearchOptions=_showAlternateSearchOptions;
@property(retain, nonatomic) NSArray *menuItemSuggestions; // @synthesize menuItemSuggestions=_menuItemSuggestions;
@property(retain, nonatomic) NSMutableArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) ISSSuggestionsFetcher *suggestionsFetcher; // @synthesize suggestionsFetcher=_suggestionsFetcher;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ISSSearchBarDelegate> searchBarDelegate; // @synthesize searchBarDelegate=_searchBarDelegate;
@property(nonatomic) __weak id <ISSViewDelegate> ISSDelegate; // @synthesize ISSDelegate=_ISSDelegate;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)updateVoiceOverStatus:(_Bool)arg1;
- (void)voiceOverStatusChanged:(id)arg1;
- (void)menuItemSelectedAtIndexPath:(id)arg1;
- (void)suggestionsDidUpdate:(id)arg1;
- (void)suggestionSelectedAtIndexPath:(id)arg1;
- (void)suggestionsFetcher:(id)arg1 didReceiveSuggestions:(id)arg2;
- (void)suggestionCellDidSelectQueryBuilder:(id)arg1;
- (void)suggestionCellDidSelectDelete:(id)arg1;
- (id)tableView:(id)arg1 alternateSuggestionCellForRowAtIndexPath:(id)arg2;
- (_Bool)textShouldRightAlign:(id)arg1;
- (void)applyCompletionStyle:(id)arg1:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)didSelectItemWithQuery:(id)arg1;
- (void)suggestionCell:(id)arg1 didSelectSearchOptionButton:(id)arg2 withAlternateSearchType:(unsigned long long)arg3;
- (void)alternateSearchCellSingleStyleSelected;
- (void)flowSearchSelected;
- (void)barcodeSearchSelected;
- (void)voiceSearchSelected;
- (void)loadAlternateSearchButtonState;
- (void)didChangeMarketplace:(id)arg1;
- (void)userSwitched:(id)arg1;
- (void)refreshData;
- (void)updateViewWithQuery:(id)arg1 force:(_Bool)arg2;
- (_Bool)isDisplayingSuggestions;
- (_Bool)isDisplayingValidSuggestionsForSearchText:(id)arg1;
- (void)updateViewWithQuery:(id)arg1;
- (void)reloadAlternateSearchAndData;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSearchFilteringAlias:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
