//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTEMigrationAttempt-Protocol.h"

@class GSZEventMetric, NSString;
@protocol GSZStreamzService;

@interface GTEMigrationAttempt : NSObject <GTEMigrationAttempt>
{
    id <GSZStreamzService> _streamzService;
    GSZEventMetric *_eventMetric;
}

- (void).cxx_destruct;
- (void)recordDouble:(double)arg1 withTargetType:(id)arg2 sequenceNumber:(int)arg3 attemptNumber:(int)arg4 result:(id)arg5 initReason:(id)arg6;
- (id)initWithStreamzService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
