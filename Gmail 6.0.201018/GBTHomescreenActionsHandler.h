//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplicationShortcutItem;

@interface GBTHomescreenActionsHandler : NSObject
{
    UIApplicationShortcutItem *_pendingShortcutItem;
    UIApplicationShortcutItem *_openingShortcutItem;
}

+ (id)sharedHelper;
- (void).cxx_destruct;
- (void)signIn;
- (void)closeActiveViewsWithCompletion:(CDUnknownBlockType)arg1;
- (void)selectAccount;
- (void)composeEmail;
- (_Bool)switchToAccount:(id)arg1;
- (void)enqueueShortcutItem:(id)arg1;
- (_Bool)hasPendingShortcut;
- (void)handleActionForShortcutItem:(id)arg1;
- (void)handleValidatedAccountActionForShortcutItem:(id)arg1;
- (_Bool)isValidAccountForShortcutItem:(id)arg1;
- (void)handlePendingShortcutItem;
- (_Bool)handleShortCutItem:(id)arg1;

@end
