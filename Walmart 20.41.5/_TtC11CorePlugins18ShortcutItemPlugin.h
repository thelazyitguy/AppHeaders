//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC11CorePlugins18ShortcutItemPlugin : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: $__lazy_storage_$_shortcutManager
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)applicationPerformActionForShortcutItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)applicationWillTerminate;
- (void)applicationDidReceiveMemoryWarning;
- (void)startup:(id)arg1;
- (id)pluginAPI;
- (id)initWithContainerBundleID:(id)arg1;
@property(nonatomic, readonly) NSArray *dependencies;
@property(nonatomic, readonly) NSString *identifier;

@end
