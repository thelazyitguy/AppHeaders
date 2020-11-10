//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGViewController.h>

#import <Instabug/IBGFeaturesViewControllerDelegate-Protocol.h>
#import <Instabug/IBGFeaturesViewDelegate-Protocol.h>
#import <Instabug/IBGSegmentControlDelegate-Protocol.h>
#import <Instabug/UISearchBarDelegate-Protocol.h>
#import <Instabug/UITableViewDelegate-Protocol.h>

@class IBGFeaturesPresenter, IBGFeaturesView, IBGSearchController, NSString, UIBarButtonItem, UITableView;
@protocol IBGFeatureRequestUpdatesDelegate;

@interface IBGFeaturesViewController : IBGViewController <UITableViewDelegate, IBGFeaturesViewDelegate, UISearchBarDelegate, IBGSegmentControlDelegate, IBGFeaturesViewControllerDelegate>
{
    _Bool _isEmptyState;
    IBGFeaturesPresenter<IBGFeatureRequestUpdatesDelegate> *presenter;
    UITableView *tableView;
    IBGFeaturesView *_featuresView;
    IBGSearchController *_searchController;
    UIBarButtonItem *_addButton;
    UIBarButtonItem *_searchIcon;
    UIBarButtonItem *_space;
    UIBarButtonItem *_cancelButton;
    NSString *_searchString;
}

@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *space; // @synthesize space=_space;
@property(retain, nonatomic) UIBarButtonItem *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(retain, nonatomic) UIBarButtonItem *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) _Bool isEmptyState; // @synthesize isEmptyState=_isEmptyState;
@property(retain, nonatomic) IBGSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) IBGFeaturesView *featuresView; // @synthesize featuresView=_featuresView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView;
@property(retain, nonatomic) IBGFeaturesPresenter<IBGFeatureRequestUpdatesDelegate> *presenter; // @synthesize presenter;
- (void).cxx_destruct;
- (void)didSelectSegmentAtIndex:(unsigned long long)arg1;
- (void)didTapSortingWithOption:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchButtonPressed:(id)arg1;
- (void)addButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)didAddNewFeatureRequest;
- (void)presentAddNewFeatureViewController;
- (void)reloadTableViewAtIndex:(unsigned long long)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reloadDataForSearchString:(id)arg1;
- (void)setSearchState:(long long)arg1;
- (void)dismissSearchBarWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSearchBar;
- (void)dismissNavigationItemButtonsAnimated:(_Bool)arg1;
- (void)presentNavigationItemButtonsAnimated:(_Bool)arg1;
- (void)setupConstraints;
- (void)setupNavigationBarButtons;
- (void)applyTheme;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

