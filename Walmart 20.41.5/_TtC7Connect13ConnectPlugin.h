//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC7Connect13ConnectPlugin : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: confirmationCoordinator
}

- (void).cxx_destruct;
- (id)init;
- (void)connectTransactionCompleted:(id)arg1;
- (void)walmartPayTransactionCompleted:(id)arg1;
- (id)pluginAPI;
- (void)applicationDidReceiveMemoryWarning;
- (void)applicationWillTerminate;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)startup:(id)arg1;
- (id)initWithContainerBundleID:(id)arg1;
@property(nonatomic, readonly) NSArray *dependencies;
@property(nonatomic, readonly) NSString *identifier;

@end
