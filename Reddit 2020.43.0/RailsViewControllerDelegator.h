//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedViewControllerDelegator.h"

#import "CovidSearchDisplayNodeDelegate-Protocol.h"
#import "DetailedTrendingSearchNodeDelegate-Protocol.h"
#import "FeedSortOptionControllerDelegate-Protocol.h"
#import "HeaderBarViewDelegate-Protocol.h"
#import "IconLabelNodeDelegate-Protocol.h"
#import "NSFWSearchSettingNodeDelegate-Protocol.h"
#import "PillWidgetNodeDelegate-Protocol.h"
#import "RailsButtonNodeDelegate-Protocol.h"
#import "SearchHistoryItemNodeDelegate-Protocol.h"
#import "SubscribableNodeDelegate-Protocol.h"

@class FeedSortOptionController, NSString, RailsNavigator, RailsPresenter, RailsViewController;

@interface RailsViewControllerDelegator : FeedViewControllerDelegator <IconLabelNodeDelegate, FeedSortOptionControllerDelegate, HeaderBarViewDelegate, SubscribableNodeDelegate, SearchHistoryItemNodeDelegate, PillWidgetNodeDelegate, RailsButtonNodeDelegate, NSFWSearchSettingNodeDelegate, CovidSearchDisplayNodeDelegate, DetailedTrendingSearchNodeDelegate>
{
    RailsNavigator *_railsNavigator;
    FeedSortOptionController *_sortOptionController;
}

+ (id)subredditListingNetworkSourceWithAccountContext:(id)arg1 railsContext:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FeedSortOptionController *sortOptionController; // @synthesize sortOptionController=_sortOptionController;
@property(retain, nonatomic) RailsNavigator *railsNavigator; // @synthesize railsNavigator=_railsNavigator;
- (id)typeaheadItemsPksForSection:(unsigned long long)arg1;
- (void)covidSearchSettingNodeDidTapDismiss:(id)arg1;
- (void)NSFWSearchSettingNodeDidTapDismiss:(id)arg1;
- (id)elementalDiscoveryNode:(id)arg1 nodeForElement:(id)arg2;
- (CDUnknownBlockType)feedPostCellNodeBlockForPost:(id)arg1 displayMode:(unsigned long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (CDStruct_90e057aa)collectionNode:(id)arg1 constrainedSizeForItemAtIndexPath:(id)arg2;
- (void)pillWidgetNode:(id)arg1 didTapSeeMorePillsFromModel:(id)arg2;
- (void)pillWidgetNode:(id)arg1 didSelectPill:(id)arg2 index:(unsigned long long)arg3;
- (void)headerBarViewDidTapRightButton:(id)arg1;
- (void)headerBarViewDidTapLeftButton:(id)arg1;
- (void)displayFeedSortPickerFromHeaderView:(id)arg1;
- (void)searchFilterControllerCompletedWithRange:(unsigned long long)arg1 sort:(unsigned long long)arg2;
- (void)displaySearchSortPickerFromView:(id)arg1;
- (void)trendingWillBeginVisible:(id)arg1;
- (void)feedSortOptionControllerDidCancel:(id)arg1;
- (void)feedSortOptionController:(id)arg1 didFinishSelectingFeedSort:(unsigned long long)arg2 feedRange:(unsigned long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)feedNetworkSourceWithSort:(unsigned long long)arg1 range:(unsigned long long)arg2;
- (id)feedNetworkSourceWithSort:(unsigned long long)arg1;
- (void)subscribableNodeDidSubscribe:(id)arg1;
- (void)searchHistoryItemNodeDidTapClear:(id)arg1;
- (void)railsButtonNodeDidTapButton:(id)arg1;
- (void)iconLabelNodeDidTapButton:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayItem:(id)arg2 atIndexPath:(id)arg3;
- (void)navigateToTargetTab:(id)arg1;
- (void)navigateToCommunity:(id)arg1 queryOrigin:(unsigned long long)arg2;
- (void)navigateToSubscribable:(id)arg1 queryOrigin:(unsigned long long)arg2;
- (void)navigateToUserOrSubreddit:(id)arg1 queryOrigin:(unsigned long long)arg2;
- (void)navigateToObject:(id)arg1 viewModel:(id)arg2 indexPath:(id)arg3 queryOrigin:(unsigned long long)arg4 railsContext:(id)arg5;
- (void)collectionNode:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) __weak RailsViewController *railsVC;
@property(readonly, nonatomic) __weak RailsPresenter *railsPresenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
