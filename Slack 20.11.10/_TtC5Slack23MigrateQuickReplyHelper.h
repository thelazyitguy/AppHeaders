//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP13SlackCoreData32MigrateQuickReplyHelperInterface_-Protocol.h"

@interface _TtC5Slack23MigrateQuickReplyHelper : NSObject <_TtP13SlackCoreData32MigrateQuickReplyHelperInterface_>
{
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: dataRepository
    // Error parsing type: , name: persistentStore
    // Error parsing type: , name: userLazyLoader
    // Error parsing type: , name: teamId
}

- (void).cxx_destruct;
- (id)init;
- (void)clearUnsentMessages;
- (void)migrateUnsentQuickReplies;
- (id)initWithDependencies:(id)arg1 dataRepository:(id)arg2 userLazyLoader:(id)arg3 teamId:(id)arg4;

@end
