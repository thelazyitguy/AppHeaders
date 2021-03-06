//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FilteredPackageListController.h"

#import "UISearchBarDelegate-Protocol.h"

@class NSString;

@interface SearchController : FilteredPackageListController <UISearchBarDelegate>
{
    struct MenesObjectHandle<UISearchBar, 1> search_;
    _Bool searchloaded_;
    _Bool summary_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didSelectPackage:(id)arg1;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithDatabase:(id)arg1 query:(id)arg2;
- (_Bool)showsSections;
- (_Bool)isSummarized;
- (_Bool)shouldBlock;
- (_Bool)shouldYield;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)usePrefix:(id)arg1;
- (void)useSearch;
- (id)termsForQuery:(id)arg1;
- (id)navigationURL;
- (id)referrerURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

