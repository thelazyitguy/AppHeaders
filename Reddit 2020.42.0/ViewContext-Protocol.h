//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Account, AdEventsManager, AnalyticsManager, ConfigManager, ExperimentManager, SubredditManager, VisibilityTracker, _TtC6Reddit12VideoService, _TtC7Economy14EconomyContext, _TtC8RedditUI3RUI;

@protocol ViewContext <NSObject>
@property(nonatomic, readonly) id userStore;
@property(nonatomic, readonly) id postStore;
@property(nonatomic, readonly) _TtC7Economy14EconomyContext *economyContext;
@property(nonatomic, readonly) _TtC6Reddit12VideoService *videoService;
@property(nonatomic, readonly) AdEventsManager *adEventsManager;
@property(nonatomic, readonly) VisibilityTracker *visibilityTracker;
@property(nonatomic, readonly) AnalyticsManager *analyticsManager;
@property(nonatomic, readonly) Account *account;
@property(nonatomic, readonly) ConfigManager *configManager;
@property(nonatomic, readonly) ExperimentManager *experimentManager;
@property(nonatomic, readonly) _TtC8RedditUI3RUI *rui;
@property(nonatomic, readonly) SubredditManager *subredditManager;
@end

