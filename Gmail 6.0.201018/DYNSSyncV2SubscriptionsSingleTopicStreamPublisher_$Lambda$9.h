//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPTXFutures_Transform4-Protocol.h"

@class DYNSCommonStreamDataRequest, DYNSSyncV2SubscriptionsSingleTopicStreamPublisher, NSString;

@interface DYNSSyncV2SubscriptionsSingleTopicStreamPublisher_$Lambda$9 : NSObject <XPTXFutures_Transform4>
{
    DYNSSyncV2SubscriptionsSingleTopicStreamPublisher *this$0_;
    DYNSCommonStreamDataRequest *val$initialRequest_;
    _Bool val$hasSynced_;
}

- (void)dealloc;
- (id)applyWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
