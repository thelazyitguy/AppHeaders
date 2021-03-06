//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ChatRequestDelegatorDelegate-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, BaseButton, BaseCollectionView, Channel, ContactActionSheetDelegate, DirectChatRequestDelegator, NSString, NSURL, RedditService, SubredditChatRequestDelegator, UIStackView;
@protocol AccountContext, ChatRequestDelegator, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface ChatRequestViewController : BaseViewController <ChatRequestDelegatorDelegate, RUIActionSheetViewControllerDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    Channel *_channel;
    id <AccountContext> _accountContext;
    id <ChatRequestDelegator> _delegator;
    DirectChatRequestDelegator *_directChatDelegator;
    SubredditChatRequestDelegator *_subredditChatDelegator;
    BaseCollectionView *_collectionView;
    ContactActionSheetDelegate *_contactActionSheetDelegate;
    UIStackView *_bottomButtonsBarView;
    BaseButton *_joinButton;
    BaseButton *_acceptButton;
    BaseButton *_declineButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) BaseButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) BaseButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UIStackView *bottomButtonsBarView; // @synthesize bottomButtonsBarView=_bottomButtonsBarView;
@property(retain, nonatomic) ContactActionSheetDelegate *contactActionSheetDelegate; // @synthesize contactActionSheetDelegate=_contactActionSheetDelegate;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SubredditChatRequestDelegator *subredditChatDelegator; // @synthesize subredditChatDelegator=_subredditChatDelegator;
@property(retain, nonatomic) DirectChatRequestDelegator *directChatDelegator; // @synthesize directChatDelegator=_directChatDelegator;
@property(retain, nonatomic) id <ChatRequestDelegator> delegator; // @synthesize delegator=_delegator;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)trackPreviewAnalyticsEventWithAction:(id)arg1 noun:(id)arg2;
- (void)trackAnalyticsEventWithAction:(id)arg1 noun:(id)arg2;
- (void)showToastWithErrorCode:(long long)arg1;
- (long long)errorCodeForAcceptFailureResponse:(id)arg1;
- (void)postJoinNotificationForPopularChannel:(id)arg1;
- (void)acceptInvite;
- (void)reloadCellAtIndexPath:(id)arg1;
- (void)didLoadEmbedData:(id)arg1;
- (long long)errorCodeForJoinFailureResponse:(id)arg1;
- (void)didTapJoin:(id)arg1;
- (void)didTapDecline:(id)arg1;
- (void)didTapAccept:(id)arg1;
- (void)didTapMoreOptions:(id)arg1;
- (id)chatMessageReportingViewControllerWithMessage:(id)arg1;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)chatRequestDelegator:(id)arg1 didTapReportChatMessage:(id)arg2;
- (void)showContactActionSheetWithContact:(id)arg1;
- (void)chatRequestDelegator:(id)arg1 shouldRefreshIndexPath:(id)arg2;
- (void)chatRequestDelegator:(id)arg1 didTapChatMessage:(id)arg2;
- (void)chatRequestDelegator:(id)arg1 didTapContact:(id)arg2;
- (void)chatRequestDelegatorDidDeclineInvite:(id)arg1;
- (id)titleForChannel:(id)arg1;
- (void)updateViewStateWithChannel:(id)arg1;
- (void)configureWithSubredditChannel:(id)arg1;
- (void)configureDirectChannel:(id)arg1;
- (void)configureWithChannel:(id)arg1;
- (void)configureWithUrl:(id)arg1;
- (void)configureViewAppearance;
- (struct UIEdgeInsets)preferredContentInset;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

