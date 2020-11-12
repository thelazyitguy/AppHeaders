//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localytics/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSSet;

@protocol LLFrequencyCappingDB <NSObject>
- (NSSet *)getGloballyDisqualifiedCampaignsBy:(long long)arg1 eligibleCampaigns:(NSSet *)arg2 campaignType:(long long)arg3;
- (NSSet *)getDisqualifiedCampaignsBy:(long long)arg1 eligibleCampaigns:(NSSet *)arg2 campaignType:(long long)arg3;
- (NSSet *)getIgnoresGlobalCampaignsFromEligibleCampaigns:(NSSet *)arg1 campaignType:(long long)arg2;
- (_Bool)deleteFrequencyCappingRules:(NSArray *)arg1 forCampaignType:(long long)arg2;
- (_Bool)deleteGlobalFrequencyCappingRule:(long long)arg1;
- (_Bool)storeFrequencyCappingRule:(NSDictionary *)arg1 forCampaignId:(NSNumber *)arg2 andCampaignType:(long long)arg3;
@end
