//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIApplication, UIViewController;
@protocol DYNRootViewControllerProtocol;

@protocol DYNAppLifecycleService <NSObject>
@property(readonly, nonatomic) UIViewController<DYNRootViewControllerProtocol> *rootViewController;
@property(readonly, nonatomic) _Bool didFinishSigningIn;
- (void)applicationWillTerminate:(UIApplication *)arg1;
- (void)applicationWillResignActive:(UIApplication *)arg1;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (void)applicationWillEnterForeground:(UIApplication *)arg1;
- (void)applicationDidEnterBackground:(UIApplication *)arg1;
- (void)application:(UIApplication *)arg1 willFinishLaunchingWithOptions:(NSDictionary *)arg2;
@end
