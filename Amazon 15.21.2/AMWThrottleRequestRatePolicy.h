//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMWRequestRatePolicy-Protocol.h"

@class NSString;

@interface AMWThrottleRequestRatePolicy : NSObject <AMWRequestRatePolicy>
{
    unsigned long long _sleepValue;
}

@property(nonatomic) unsigned long long sleepValue; // @synthesize sleepValue=_sleepValue;
- (_Bool)isPolicyApplicable:(id)arg1;
- (_Bool)allowRequestForAssignments:(id)arg1 forSession:(id)arg2 forCustomer:(id)arg3 andHistory:(id)arg4;
- (unsigned long long)generateRandomSleepBetweenMinAndMAx;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
