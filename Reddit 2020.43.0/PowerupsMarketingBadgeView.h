//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _TtC7Economy17SubredditPowerups;

@interface PowerupsMarketingBadgeView : UIView
{
    // Error parsing type: , name: titleSubtitleView
    // Error parsing type: , name: lockedView
    // Error parsing type: , name: unlockedView
    // Error parsing type: , name: chevronView
    // Error parsing type: , name: benefit
    // Error parsing type: , name: locationID
    // Error parsing type: , name: forceUnlocked
    // Error parsing type: , name: economyContext
    // Error parsing type: , name: subredditPowerups
    // Error parsing type: , name: hasChevron
    // Error parsing type: , name: visibilityTrackingID
    // Error parsing type: , name: presentedBenefit
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)trackVisibilityWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationID:(id)arg1 economyContext:(id)arg2;
- (id)initWithBenefit:(long long)arg1 locationID:(id)arg2 economyContext:(id)arg3;
@property(nonatomic) _Bool hasChevron; // @synthesize hasChevron;
@property(nonatomic, retain) _TtC7Economy17SubredditPowerups *subredditPowerups; // @synthesize subredditPowerups;

@end

