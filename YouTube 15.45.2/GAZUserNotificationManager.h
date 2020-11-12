//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GAZPromptOrganizer, GAZService;

@interface GAZUserNotificationManager : NSObject
{
    GAZService *_authzenService;
    GAZPromptOrganizer *_promptOrganizer;
}

+ (id)actionLabelFromStringId:(int)arg1;
+ (id)categoryWithApproveActionLabel:(id)arg1 approveString:(id)arg2 denyActionLabel:(id)arg3 denyString:(id)arg4 foregroundMode:(_Bool)arg5;
+ (id)userNotificationCategories;
+ (id)supportedUNNotificationCategories;
+ (id)supportedNotificationCategories;
- (void).cxx_destruct;
- (id)sessionIdFromSessionIdString:(id)arg1;
- (void)promptStoreWillRemovePrompt:(id)arg1;
- (void)dismissUserNotifications;
- (_Bool)canHandleActionWithIdentifier:(id)arg1 notificationInfo:(id)arg2;
- (_Bool)handleActionWithIdentifier:(id)arg1 notificationInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)fetchAndSaveNotificationData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithService:(id)arg1 promptOrganizer:(id)arg2;

@end
