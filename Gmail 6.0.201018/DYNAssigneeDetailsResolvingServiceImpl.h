//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTEAssigneeDetailsResolvingService-Protocol.h"

@class NSMapTable, NSString;
@protocol DYNJavaObjectFactoryService, DYNMemberCacheService;

@interface DYNAssigneeDetailsResolvingServiceImpl : NSObject <GTEAssigneeDetailsResolvingService>
{
    id <DYNMemberCacheService> _memberCacheService;
    id <DYNJavaObjectFactoryService> _javaObjectFactoryService;
    NSMapTable *_chatRoomServiceDict;
}

- (void).cxx_destruct;
- (id)assigneeDetailsResolvingServiceWithChatRoomID:(id)arg1 roomPresenceService:(id)arg2;
- (id)initWithJavaObjectFactoryService:(id)arg1 memberCacheService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

