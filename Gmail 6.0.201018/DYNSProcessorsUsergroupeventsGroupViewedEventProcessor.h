//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSProcessorsUsergroupeventsUserGroupEventsProcessor-Protocol.h"

@class NSString;

@interface DYNSProcessorsUsergroupeventsGroupViewedEventProcessor : NSObject <DYNSProcessorsUsergroupeventsUserGroupEventsProcessor>
{
}

- (id)processEventWithDYNSSyncApiUserEventBody:(id)arg1 withDYNSCommonGroupId:(id)arg2 withDYNSProcessorsUsergroupeventsUserGroupEventsProcessorCoordinator_UserGroupData:(id)arg3 withDYNSProcessorsUsergroupeventsDelayedEventDispatcher:(id)arg4;
- (id)preProcessEventWithDYNSSyncApiUserEventBody:(id)arg1 withDYNSCommonGroupId:(id)arg2 withDYNSProcessorsUsergroupeventsDelayedEventDispatcher:(id)arg3;
- (id)getEventType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
