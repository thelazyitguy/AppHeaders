//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _TtC7Economy21SubredditPowerupsInfo : NSObject
{
    // Error parsing type: , name: tier
    // Error parsing type: , name: currentTier
    // Error parsing type: , name: powerupsCount
    // Error parsing type: , name: supportersCount
    // Error parsing type: , name: gracePeriodEnd
    // Error parsing type: , name: benefitsForCurrentUser
    // Error parsing type: , name: tiersInfo
    // Error parsing type: , name: emotePacks
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isLockedOrUnlockedForEveryoneWithBenefit:(long long)arg1;
- (_Bool)isLockedOrUnlockedWithBenefit:(long long)arg1;
- (_Bool)wasLockedForEveryoneBenefit:(long long)arg1;
- (_Bool)wasLockedBenefit:(long long)arg1;
- (_Bool)canUnlockForEveryoneBenefit:(long long)arg1;
- (_Bool)canUnlockBenefit:(long long)arg1;
- (_Bool)hasBenefitForEveryone:(long long)arg1;
- (_Bool)hasBenefit:(long long)arg1;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) NSDate *gracePeriodEnd;
@property(nonatomic, readonly) long long supportersCount; // @synthesize supportersCount;
@property(nonatomic, readonly) long long powerupsCount; // @synthesize powerupsCount;

@end

