//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "MetaBadgeManagementActionDelegate-Protocol.h"
#import "MetaBadgeManagementPresenterDelegate-Protocol.h"

@class MetaBadgeManagementDisplayNode, MetaBadgeManagementPresenter, MetaBadgeManagementTab, NSArray, NSString;
@protocol AccountContext, MetaBadgeManagementViewControllerDelegate;

@interface MetaBadgeManagementViewController : BaseViewController <MetaBadgeManagementPresenterDelegate, MetaBadgeManagementActionDelegate>
{
    id <MetaBadgeManagementViewControllerDelegate> _delegate;
    id <AccountContext> _accountContext;
    MetaBadgeManagementDisplayNode *_displayNode;
    MetaBadgeManagementPresenter *_presenter;
    NSArray *_tabs;
    MetaBadgeManagementTab *_selectedTab;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MetaBadgeManagementTab *selectedTab; // @synthesize selectedTab=_selectedTab;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) MetaBadgeManagementPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) MetaBadgeManagementDisplayNode *displayNode; // @synthesize displayNode=_displayNode;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <MetaBadgeManagementViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapCloseButton:(id)arg1;
- (void)performModifySelectedViewModel:(id)arg1 withSender:(id)arg2;
- (void)performDidChangeSelectedTab:(id)arg1 withSender:(id)arg2;
- (void)reloadUsernameDecoration;
- (void)reloadViewModel;
- (id)badgeManagementPresenterViewController;
- (void)badgeManagementPresenterDidChangeSelectedBadges:(id)arg1;
- (void)badgeManagementPresenter:(id)arg1 didReloadViewModels:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithAccountContext:(id)arg1 subreddit:(id)arg2 userPK:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

