//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PowerupsEventsLogger : NSObject
{
    // Error parsing type: , name: analyticsLogger
    // Error parsing type: , name: correlationID
}

- (void).cxx_destruct;
- (id)init;
- (void)logCommentAuthorSupporterClickWithSubredditSupporter:(id)arg1 comment:(id)arg2;
- (void)logPostDetailsAuthorSupporterClickWithSubredditSupporter:(id)arg1 post:(id)arg2;
- (void)logFeedPostAuthorSupporterClickWithSubredditSupporter:(id)arg1 post:(id)arg2;
- (void)logPostingBenefitClickWithSubredditPowerups:(id)arg1 benefit:(long long)arg2;
- (void)logPostingBenefitViewWithSubredditPowerups:(id)arg1 benefit:(long long)arg2;
- (void)logCommentBenefitClickWithSubredditPowerups:(id)arg1 benefit:(long long)arg2;
- (void)logCommentBenefitViewWithSubredditPowerups:(id)arg1 benefit:(long long)arg2;
- (void)logFeedUnitClickWithSubredditPowerups:(id)arg1;
- (void)logFeedUnitViewWithSubredditPowerups:(id)arg1;
- (void)logGetPremiumFromMarketingWithSubredditPowerups:(id)arg1;
- (void)logSupporterClickFromMarketingWithSubredditPowerups:(id)arg1 subredditSupporter:(id)arg2;
- (void)didOpenMarketingWithSubredditPowerups:(id)arg1;
- (void)didOpenMarketingFromSubredditTabWithSubredditPowerups:(id)arg1;
- (void)logViewSubredditTabWithSubredditPowerups:(id)arg1;
- (id)initWithAnalyticsLogger:(id)arg1 correlationID:(id)arg2;

@end
