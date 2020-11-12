//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistCellProviderCoordinator-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol SPTFreeTierPlaylistConfiguration, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistLogger, SPTFreeTierPlaylistViewModel, SPTShareDragDelegateFactory, UITableViewDragDelegate;

@interface SPTFreeTierPlaylistCellProviderCoordinator : NSObject <SPTFreeTierPlaylistCellProviderCoordinator>
{
    id <SPTFreeTierPlaylistConfiguration> _configuration;
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
    id <SPTFreeTierPlaylistItemsViewModel> _itemsViewModel;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    NSMutableDictionary *_rowHeightCache;
    id <SPTFreeTierPlaylistLogger> _logger;
    NSDictionary *_sectionDescriptions;
    NSDictionary *_reuseIdentifierToCellProviders;
    id <UITableViewDragDelegate> _dragDelegateHolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UITableViewDragDelegate> dragDelegateHolder; // @synthesize dragDelegateHolder=_dragDelegateHolder;
@property(readonly, copy, nonatomic) NSDictionary *reuseIdentifierToCellProviders; // @synthesize reuseIdentifierToCellProviders=_reuseIdentifierToCellProviders;
@property(readonly, copy, nonatomic) NSDictionary *sectionDescriptions; // @synthesize sectionDescriptions=_sectionDescriptions;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableDictionary *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(retain, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel; // @synthesize itemsViewModel=_itemsViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistConfiguration> configuration; // @synthesize configuration=_configuration;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)indexPathForView:(id)arg1;
- (void)presentContextMenuWithSender:(id)arg1;
- (id)itemForIndexPath:(id)arg1;
- (void)reloadCellsForCellProvider:(id)arg1;
- (void)cellProvider:(id)arg1 playTrackAtIndexPath:(id)arg2 interactionId:(id)arg3;
- (void)contextMenuPressedForCellProvider:(id)arg1 sender:(id)arg2;
- (void)setupDataSource:(id)arg1;
- (void)reloadDataForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cellProviderForCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupDragDelegateOnTableView:(id)arg1 pageURI:(id)arg2;
- (void)registerCellProviderCellForTableView:(id)arg1;
- (id)initWithConfiguration:(id)arg1 playlistViewModel:(id)arg2 itemsViewModel:(id)arg3 logger:(id)arg4 shareDragDelegateFactory:(id)arg5 sectionDescriptions:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
