//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingViewController.h"

#import "ChatAddressBookViewControllerDelegate-Protocol.h"
#import "FeedPostCrosspostViewDelegate-Protocol.h"
#import "KeyboardInteractorDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, BaseButton, BaseCollectionView, BaseLabel, BaseSearchBar, BaseView, FeedPostOptions, KeyboardFloatingViewInteractor, LabeledTextField, NSArray, NSMutableArray, NSMutableSet, NSString, NSURL, Post, RedditService, UIActivityIndicatorView, UITapGestureRecognizer;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface ShareToChatViewController : ListingViewController <UICollectionViewDelegate, UICollectionViewDataSource, KeyboardInteractorDelegate, UISearchBarDelegate, ChatAddressBookViewControllerDelegate, FeedPostCrosspostViewDelegate, UITextFieldDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    _Bool _channelsCreationFailed;
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    BaseLabel *_titleLabel;
    BaseLabel *_subtitleLabel;
    BaseCollectionView *_collectionView;
    LabeledTextField *_messageTextField;
    BaseSearchBar *_searchBar;
    BaseView *_bottomButtonContainer;
    BaseButton *_bottomButton;
    UIActivityIndicatorView *_activityIndicatorView;
    KeyboardFloatingViewInteractor *_keyboardInteractor;
    FeedPostOptions *_sharePostOptions;
    Post *_post;
    NSArray *_filteredChannels;
    NSMutableSet *_selectedChannels;
    NSMutableArray *_allPendingChannels;
    NSArray *_filteredPendingChannels;
    NSMutableSet *_selectedPendingChannels;
    long long _pendingMessagesCount;
    long long _failedSendingMessagesCount;
    long long _succeededSendingMessagesCount;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSString *_sourcePageType;
    RedditService *_service;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) long long succeededSendingMessagesCount; // @synthesize succeededSendingMessagesCount=_succeededSendingMessagesCount;
@property(nonatomic) long long failedSendingMessagesCount; // @synthesize failedSendingMessagesCount=_failedSendingMessagesCount;
@property(nonatomic) long long pendingMessagesCount; // @synthesize pendingMessagesCount=_pendingMessagesCount;
@property(nonatomic) _Bool channelsCreationFailed; // @synthesize channelsCreationFailed=_channelsCreationFailed;
@property(retain, nonatomic) NSMutableSet *selectedPendingChannels; // @synthesize selectedPendingChannels=_selectedPendingChannels;
@property(retain, nonatomic) NSArray *filteredPendingChannels; // @synthesize filteredPendingChannels=_filteredPendingChannels;
@property(retain, nonatomic) NSMutableArray *allPendingChannels; // @synthesize allPendingChannels=_allPendingChannels;
@property(retain, nonatomic) NSMutableSet *selectedChannels; // @synthesize selectedChannels=_selectedChannels;
@property(retain, nonatomic) NSArray *filteredChannels; // @synthesize filteredChannels=_filteredChannels;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) FeedPostOptions *sharePostOptions; // @synthesize sharePostOptions=_sharePostOptions;
@property(retain, nonatomic) KeyboardFloatingViewInteractor *keyboardInteractor; // @synthesize keyboardInteractor=_keyboardInteractor;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) BaseButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) BaseView *bottomButtonContainer; // @synthesize bottomButtonContainer=_bottomButtonContainer;
@property(retain, nonatomic) BaseSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) LabeledTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) BaseLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)feedPostCrosspostView:(id)arg1 didTapThumbnailForPost:(id)arg2;
- (void)feedPostCrosspostView:(id)arg1 didTapPost:(id)arg2;
@property(readonly, nonatomic) double keyboardHeight;
- (void)keyboardDidChange;
- (void)chatAddressBookViewController:(id)arg1 didFinishWithPendingChannel:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)channelCellForCollectionView:(id)arg1 indexPath:(id)arg2 model:(id)arg3 selected:(_Bool)arg4;
- (id)newGroupCellForCollectionView:(id)arg1 indexPath:(id)arg2;
- (id)filterCellForCollectionView:(id)arg1 indexPath:(id)arg2;
- (id)postCellForCollectionView:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)updateContentViewsWhenReloadFinishes;
- (struct UIEdgeInsets)preferredContentInset;
- (void)setNetworkActivityActive:(_Bool)arg1;
- (void)setBottomButtonEnabled:(_Bool)arg1;
- (void)updateBottomButtonStatus;
@property(readonly, copy, nonatomic) NSString *bottomButtonTitle;
- (id)pendingChannelForIndexPath:(id)arg1;
- (void)filterChannelsWithText:(id)arg1;
- (id)channelForIndexPath:(id)arg1;
- (void)dismissWholeSharingStory;
- (void)messageDidSendToChannelsWithSuccess:(_Bool)arg1;
- (void)shareToChannels:(id)arg1 pendingChannels:(id)arg2;
- (void)didTapShare:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)viewDidTap:(id)arg1;
@property(readonly, nonatomic) long long numberOfChannelsLeft;
- (void)updateSubtitle;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateCollectionViewInsets;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)configureBottomButton;
- (void)configureBarButton;
- (void)configureTitle;
- (void)configureCollectionView;
- (void)viewDidLoad;
- (void)preselectChannel:(id)arg1;
- (id)majorContentScrollView;
- (id)initWithPost:(id)arg1 presenter:(id)arg2 sourcePageType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

