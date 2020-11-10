//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppSettings, NSNotificationCenter;

@interface AppRating : NSObject
{
    AppSettings *_appSettings;
    NSNotificationCenter *_notificationCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) AppSettings *appSettings; // @synthesize appSettings=_appSettings;
- (_Bool)userHasHadEnoughEngagement;
- (_Bool)didPromptRecently;
- (_Bool)currentVersionIsFiltered;
- (_Bool)shouldShowPrompt;
- (void)resetEngagementForCurrentVersion;
- (void)resetEngagementIfMajorMinorVersionChanged;
- (void)registerSignificantEvent:(id)arg1;
- (void)registerSession;
- (id)currentAppVersion;
- (void)dealloc;
- (id)initWithAppSettings:(id)arg1 notificationCenter:(id)arg2;

@end
