//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEStyleable-Protocol.h"
#import "SPContentInsetViewController-Protocol.h"
#import "SPTSortingFilteringClearFiltersControlDelegate-Protocol.h"
#import "SPTYourLibraryMusicSearchViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPTYourLibraryMusicFilterBarViewControllerStyle, SPTYourLibraryMusicSearchViewController, UITableView, UIView;
@protocol SPTSortingFilteringFilterBar, SPTSortingFilteringUIFactory, SPTYourLibraryMusicFilterBarViewControllerDelegate;

@interface SPTYourLibraryMusicFilterBarViewController : UIViewController <SPTYourLibraryMusicSearchViewControllerDelegate, SPContentInsetViewController, UITextFieldDelegate, SPTSortingFilteringClearFiltersControlDelegate, GLUEStyleable>
{
    _Bool _disableContextMenu;
    _Bool _isInlineSearchBarModeEnabled;
    id <SPTYourLibraryMusicFilterBarViewControllerDelegate> _delegate;
    UITableView *_tableView;
    UIViewController *_targetViewController;
    UIView<SPTSortingFilteringFilterBar> *_filterBarView;
    unsigned long long _barState;
    SPTYourLibraryMusicSearchViewController *_searchViewController;
    SPTYourLibraryMusicFilterBarViewControllerStyle *_style;
    NSString *_placeholderString;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
    NSLayoutConstraint *_heightConstraint;
    NSArray *_filterTitles;
    NSArray *_currentLayoutConstraints;
    NSArray *_currentSearchBarConstraints;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *currentSearchBarConstraints; // @synthesize currentSearchBarConstraints=_currentSearchBarConstraints;
@property(copy, nonatomic) NSArray *currentLayoutConstraints; // @synthesize currentLayoutConstraints=_currentLayoutConstraints;
@property(copy, nonatomic) NSArray *filterTitles; // @synthesize filterTitles=_filterTitles;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) _Bool isInlineSearchBarModeEnabled; // @synthesize isInlineSearchBarModeEnabled=_isInlineSearchBarModeEnabled;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(copy, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property(copy, nonatomic) SPTYourLibraryMusicFilterBarViewControllerStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTYourLibraryMusicSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) unsigned long long barState; // @synthesize barState=_barState;
@property(retain, nonatomic) UIView<SPTSortingFilteringFilterBar> *filterBarView; // @synthesize filterBarView=_filterBarView;
@property(nonatomic) __weak UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool disableContextMenu; // @synthesize disableContextMenu=_disableContextMenu;
@property(nonatomic) __weak id <SPTYourLibraryMusicFilterBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearFiltersControl:(id)arg1 didSelectFilterRuleAtIndex:(long long)arg2;
- (void)sp_updateContentInsets;
- (void)snapAtTopAnimated:(_Bool)arg1;
- (void)updateBottomInsetsForShortListIfNeeded;
- (void)contentSizeChanged;
- (void)snapTableViewToFilterBarAtTop:(id)arg1;
- (void)insertFiltersWithTitles:(id)arg1;
- (void)cancel;
- (void)searchViewController:(id)arg1 removedFilterAtIndex:(long long)arg2;
- (void)searchViewController:(id)arg1 textDidChange:(id)arg2;
- (void)searchViewControllerDidCancel:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)updateViewConstraints;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)endSearching;
- (void)endSearchingWithTransitionCoordinator:(CDUnknownBlockType)arg1;
- (void)startSearching;
- (void)contextMenuButtonTapped:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)attachTableViewHeader;
- (void)glue_applyStyle:(id)arg1;
- (void)addLayoutConstraints;
- (void)dealloc;
- (void)setupGestureRecognizers;
- (void)viewDidLoad;
- (id)initWithTableView:(id)arg1 targetViewController:(id)arg2 placeholderString:(id)arg3 sortingFilteringUIFactory:(id)arg4 isInlineSearchBarModeEnabled:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

