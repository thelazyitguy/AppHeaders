//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC16WalmartIOSShared18NextDayEligibility;

@interface _TtC16WalmartIOSShared14NextDaySession : NSObject
{
    // Error parsing type: , name: enabled
    // Error parsing type: , name: eligibility
    // Error parsing type: , name: messagingPresenter
    // Error parsing type: , name: locationRefreshCheckInterval
    // Error parsing type: , name: locationRefreshCheckTimer
    // Error parsing type: , name: subscribers
}

+ (id)shared;
- (void).cxx_destruct;
- (void)refreshIfNeeded;
- (void)unsubscribe:(id)arg1;
- (void)subscribe:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic, retain) _TtC16WalmartIOSShared18NextDayEligibility *eligibility; // @synthesize eligibility;
@property(nonatomic) _Bool enabled; // @synthesize enabled;

@end
