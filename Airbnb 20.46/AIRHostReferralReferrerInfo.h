//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCurrencyAmount, AIRHostReferralReward, NSArray, NSURL;

@interface AIRHostReferralReferrerInfo : AIRModel
{
    NSURL *_link;
    AIRHostReferralReward *_reward;
    AIRCurrencyAmount *_localizedTotalEarnings;
    AIRCurrencyAmount *_localizedPotentialEarnings;
    NSArray *_sentInvitations;
    long long _numberOfReferrals;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
+ (id)customTransformers;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfReferrals; // @synthesize numberOfReferrals=_numberOfReferrals;
@property(readonly, copy, nonatomic) NSArray *sentInvitations; // @synthesize sentInvitations=_sentInvitations;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *localizedPotentialEarnings; // @synthesize localizedPotentialEarnings=_localizedPotentialEarnings;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *localizedTotalEarnings; // @synthesize localizedTotalEarnings=_localizedTotalEarnings;
@property(readonly, copy, nonatomic) AIRHostReferralReward *reward; // @synthesize reward=_reward;
@property(readonly, copy, nonatomic) NSURL *link; // @synthesize link=_link;

@end

