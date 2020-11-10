//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Reddit22RPANChatViewController.h"

#import "ASCollectionDataSource-Protocol.h"
#import "ASCollectionDelegate-Protocol.h"
#import "CALayerDelegate-Protocol.h"
#import "ChatPostDelegatorProtocol-Protocol.h"
#import "ChatPostPresenterDelegate-Protocol.h"
#import "ModFormViewControllerDelegate-Protocol.h"

@protocol _TtP18AnalyticsFramework26AnalyticsScreenViewContext_;

@interface _TtC6Reddit22RPANChatViewController (Reddit) <CALayerDelegate, ChatPostPresenterDelegate, ModFormViewControllerDelegate, ASCollectionDelegate, ASCollectionDataSource, ChatPostDelegatorProtocol>
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)showRemovalReasonDialogForComment:(id)arg1;
- (void)showBanDialogForComment:(id)arg1;
- (void)chatPostPresenter:(id)arg1 connectionStateDidChange:(long long)arg2;
- (void)scrollToItemWithItem:(id)arg1;
- (void)chatPostPresenterDidFetchData:(id)arg1 shouldMaintainContentOffset:(_Bool)arg2 animated:(_Bool)arg3 scrollToItem:(id)arg4;
- (void)chatPostPresenterFetchDidFail:(id)arg1;
@property(nonatomic, readonly) id <_TtP18AnalyticsFramework26AnalyticsScreenViewContext_> analyticsContext;
- (void)form:(id)arg1 completed:(_Bool)arg2 context:(id)arg3;
- (void)didSubmitRemovalReasonWithReason:(id)arg1 context:(id)arg2;
- (void)collectionNode:(id)arg1 willDisplayItemWithNode:(id)arg2;
- (void)collectionNode:(id)arg1 willBeginBatchFetchWithContext:(id)arg2;
- (_Bool)shouldBatchFetchForCollectionNode:(id)arg1;
- (long long)collectionNode:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionNode:(id)arg1;
- (CDStruct_90e057aa)collectionNode:(id)arg1 constrainedSizeForItemAtIndexPath:(id)arg2;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
- (unsigned long long)currentPresentationStyle;
- (void)cellTappedWithBucket:(id)arg1;
- (void)didTapParentCommentNodeWithComment:(id)arg1;
- (void)handleTapReplyToCommentWithComment:(id)arg1;
- (_Bool)shouldEnableOverflowMenu;
@end

