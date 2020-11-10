//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP7Economy25EconomyDependencyProvider_-Protocol.h"

@class AccountManager, VisibilityTracker;
@protocol _TtP7Economy15EconAppSettings_;

@interface _TtC6Reddit31RedditEconomyDependencyProvider : NSObject <_TtP7Economy25EconomyDependencyProvider_>
{
    // Error parsing type: , name: accountManager
    // Error parsing type: , name: visibilityTracker
    // Error parsing type: , name: econAppSettings
}

- (void).cxx_destruct;
- (id)init;
- (id)econAccountSettingsWithAccountPk:(id)arg1;
- (id)analyticsLoggerWithAccountPk:(id)arg1;
- (id)econConfigsWithAccountPk:(id)arg1;
- (id)redditServiceWithAccountPk:(id)arg1;
- (id)initWithAccountManager:(id)arg1 appSettings:(id)arg2;
@property(nonatomic, readonly) id <_TtP7Economy15EconAppSettings_> econAppSettings; // @synthesize econAppSettings;
@property(nonatomic, readonly) VisibilityTracker *visibilityTracker; // @synthesize visibilityTracker;
@property(nonatomic, readonly) AccountManager *accountManager; // @synthesize accountManager;

@end

