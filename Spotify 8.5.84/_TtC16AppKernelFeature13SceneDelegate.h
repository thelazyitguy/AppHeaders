//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWindowSceneDelegate-Protocol.h"

@class UIWindow;

@interface _TtC16AppKernelFeature13SceneDelegate : NSObject <UIWindowSceneDelegate>
{
    // Error parsing type: , name: $__lazy_storage_$_lifecycleBootstrap
    // Error parsing type: , name: $__lazy_storage_$_deepLinkBootstrap
    // Error parsing type: , name: $__lazy_storage_$_quickActionsBootstrap
}

- (void).cxx_destruct;
- (id)init;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
@property(nonatomic, retain) UIWindow *window;

@end
