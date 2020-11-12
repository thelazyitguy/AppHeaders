//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFProjectElementPage.h>

#import <Funny/IFProjectElementListCellDelegate-Protocol.h>
#import <Funny/IFProjectElementListModelDelegate-Protocol.h>
#import <Funny/TOSearchBarDelegate-Protocol.h>
#import <Funny/UITableViewDataSource-Protocol.h>
#import <Funny/UITableViewDelegate-Protocol.h>

@class IFProjectElementListFooterView, IFProjectElementListModel, IFSearchBar, NSLayoutConstraint, NSString, UITableView, UIView;

@interface IFProjectElementListPage : IFProjectElementPage <UITableViewDataSource, UITableViewDelegate, TOSearchBarDelegate, IFProjectElementListCellDelegate, IFProjectElementListModelDelegate>
{
    IFProjectElementListModel *_model;
    IFProjectElementListModel *_searchModel;
    UITableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_tableHeaderContentView;
    NSLayoutConstraint *_tableHeaderWidthConstraint;
    IFProjectElementListFooterView *_tableFooterView;
    IFSearchBar *_searchBar;
    UIView *_emptyDataLabel;
}

+ (double)cellHeight;
+ (double)estimatedRowHeight;
+ (Class)cellClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyDataLabel; // @synthesize emptyDataLabel=_emptyDataLabel;
@property(retain, nonatomic) IFSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) IFProjectElementListFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) NSLayoutConstraint *tableHeaderWidthConstraint; // @synthesize tableHeaderWidthConstraint=_tableHeaderWidthConstraint;
@property(retain, nonatomic) UIView *tableHeaderContentView; // @synthesize tableHeaderContentView=_tableHeaderContentView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IFProjectElementListModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) IFProjectElementListModel *model; // @synthesize model=_model;
@property(readonly, nonatomic, getter=isSearchActive) _Bool searchActive;
@property(readonly, nonatomic) _Bool hasSearchField;
- (void)setHeaderView:(id)arg1 width:(double)arg2;
- (id)emptySearchLocalizedText;
- (id)emptyDataLocalizedText;
- (id)createContentView;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)searchBarCancelButtonTapped:(id)arg1;
- (void)searchBarClearButtonTapped:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarDidBeginEditing:(id)arg1;
- (void)didFetchItemsWithError:(id)arg1 hasNext:(_Bool)arg2;
- (void)didStartFetchingItems;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)presentOnView:(id)arg1 withEdgeInsets:(struct UIEdgeInsets)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
