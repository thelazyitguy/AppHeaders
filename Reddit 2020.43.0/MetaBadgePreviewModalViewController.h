//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "MetaBadgePreviewActionDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MetaBadgePreviewModalDisplayNode, NSString;
@protocol AccountContext;

@interface MetaBadgePreviewModalViewController : BaseViewController <MetaBadgePreviewActionDelegate, UIViewControllerTransitioningDelegate>
{
    id <AccountContext> _accountContext;
    CDUnknownBlockType _badgeProvider;
    NSString *_actionTitle;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _didLoadHandler;
    MetaBadgePreviewModalDisplayNode *_displayNode;
}

+ (void)fetchBadgeUsingService:(id)arg1 subreddit:(id)arg2 badgePK:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)fetchAllBadgesUsingService:(id)arg1 subreddit:(id)arg2 badgePK:(id)arg3 userPK:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) MetaBadgePreviewModalDisplayNode *displayNode; // @synthesize displayNode=_displayNode;
@property(readonly, nonatomic) CDUnknownBlockType didLoadHandler; // @synthesize didLoadHandler=_didLoadHandler;
@property(readonly, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, nonatomic) CDUnknownBlockType badgeProvider; // @synthesize badgeProvider=_badgeProvider;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)performMetaBadgePreviewActionWithSender:(id)arg1 selectedBadge:(id)arg2;
- (void)performCloseMetaBadgePreviewWithSender:(id)arg1;
- (void)configureViewAppearance;
- (void)viewDidLoad;
- (void)loadView;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithAccountContext:(id)arg1 badges:(id)arg2 subreddit:(id)arg3 actionTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5;
- (id)initWithAccountContext:(id)arg1 badgePK:(id)arg2 subreddit:(id)arg3 analyticsEventBuilder:(id)arg4;
- (id)initWithAccountContext:(id)arg1 badgeProvider:(CDUnknownBlockType)arg2 subreddit:(id)arg3 didLoadHandler:(CDUnknownBlockType)arg4 actionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
