//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4Argo28NFUIComedyFeedViewController.h"

#import "NFUIFeedViewControllerModelFeedDelegate-Protocol.h"
#import "NFUIManagedCollectionViewControllerDelegate-Protocol.h"
#import "NFUIManagedFeedViewControllerDelegate-Protocol.h"
#import "NFUIPreviewsDisplayPagePresentationDelegate-Protocol.h"
#import "NFUITabContext-Protocol.h"

@class NFUITabBarItem;

@interface _TtC4Argo28NFUIComedyFeedViewController (Argo) <NFUIFeedViewControllerModelFeedDelegate, NFUIManagedFeedViewControllerDelegate, NFUITabContext, NFUIManagedCollectionViewControllerDelegate, NFUIPreviewsDisplayPagePresentationDelegate>
- (_Bool)shouldPaginate;
- (void)handleIsNotActive;
- (void)handleIsActive;
- (void)paginateForAmount:(unsigned long long)arg1;
- (void)setNFUITabBarItem:(id)arg1;
- (void)selectedTab:(id)arg1 comingFromTab:(id)arg2;
@property(nonatomic, readonly) NFUITabBarItem *nfui_tabBarItem;
- (void)updateAccessibilityScreenFor:(id)arg1;
- (void)cellDidSetViewModel:(id)arg1 forIndexPath:(id)arg2 withViewModel:(id)arg3;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)didScrollEndDecelerating:(id)arg1;
- (void)didScrollBeginDragging:(id)arg1;
- (void)didScrollEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)accessibilityScrollForScrollView:(long long)arg1;
- (id)accessibilityScrollStatusForScrollView:(id)arg1;
- (id)insertSharedDeeplinkClipId:(id)arg1;
- (void)volumeDidChange:(_Bool)arg1;
- (void)presentNewDisplayPageWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNewDisplayPageWithVideoId:(id)arg1 trackId:(id)arg2;
@end
