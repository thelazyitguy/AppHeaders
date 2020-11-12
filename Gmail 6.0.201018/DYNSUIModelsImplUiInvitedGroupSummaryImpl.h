//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNInvitedGroupSummary-Protocol.h"
#import "DYNSUIModelsUiInvitedGroupSummary-Protocol.h"

@class NSString;
@protocol DYNGroupAttributeInfo, DYNGroupId;

@interface DYNSUIModelsImplUiInvitedGroupSummaryImpl : NSObject <DYNInvitedGroupSummary, DYNSUIModelsUiInvitedGroupSummary>
{
}

@property(readonly, nonatomic) unsigned int groupSupportLevel;
@property(readonly, nonatomic) id <DYNGroupAttributeInfo> groupAttributeInfo;
@property(readonly, nonatomic) _Bool isGuestAccessEnabled;
@property(readonly, nonatomic) long long memberCount;
@property(readonly, nonatomic) long long invitedTimeMicros;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) id <DYNGroupId> groupId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
