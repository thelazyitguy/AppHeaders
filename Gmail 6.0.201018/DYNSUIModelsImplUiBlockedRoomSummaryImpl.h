//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNBlockedRoomSummary-Protocol.h"
#import "DYNSUIModelsUiBlockedRoomSummary-Protocol.h"

@class NSString;
@protocol DYNSpaceId;

@interface DYNSUIModelsImplUiBlockedRoomSummaryImpl : NSObject <DYNBlockedRoomSummary, DYNSUIModelsUiBlockedRoomSummary>
{
}

- (long long)blockedTimestampMicros;
@property(readonly, nonatomic) NSString *groupName;
@property(readonly, nonatomic) id <DYNSpaceId> spaceId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
