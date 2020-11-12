//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, NSString, NSURL, RedditService, UILabel, UIStackView, _TtC6Reddit32RedditPremiumSettingsCoordinator;
@protocol AccountContext, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface RedditPremiumPreferencesViewController : BaseViewController <_TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    id <AccountContext> _accountContext;
    UIStackView *_contentStackView;
    _TtC6Reddit32RedditPremiumSettingsCoordinator *_settingsCoordinator;
    UIStackView *_offerStackView;
    UILabel *_offerLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *offerLabel; // @synthesize offerLabel=_offerLabel;
@property(retain, nonatomic) UIStackView *offerStackView; // @synthesize offerStackView=_offerStackView;
@property(retain, nonatomic) _TtC6Reddit32RedditPremiumSettingsCoordinator *settingsCoordinator; // @synthesize settingsCoordinator=_settingsCoordinator;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
- (id)lineSeparatorView;
- (id)offerStackViewWith:(id)arg1;
- (id)spacerWithHeight:(double)arg1;
- (id)buttonWithTitle:(id)arg1 action:(SEL)arg2;
- (id)labelWithText:(id)arg1;
- (id)labelWithTitle:(id)arg1;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)manageWebSubscriptionDidTap:(id)arg1;
- (void)manageInAppSubscriptionDidTap:(id)arg1;
- (void)hidePremiumAcceptance:(_Bool)arg1;
- (void)showCancellationOffer;
- (void)setupViewsForNonSubscriber;
- (id)bonusOfferString;
- (void)setupViewsForSubscriber;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
