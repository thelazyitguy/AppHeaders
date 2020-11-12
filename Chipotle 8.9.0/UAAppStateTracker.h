//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Airship/UAAppStateTrackerDelegate-Protocol.h>

@class NSNotificationCenter, NSString;
@protocol UAAppStateTrackerAdapter;

@interface UAAppStateTracker : NSObject <UAAppStateTrackerDelegate>
{
    _Bool _isForegrounded;
    id <UAAppStateTrackerAdapter> _adapter;
    NSNotificationCenter *_notificationCenter;
}

+ (id)shared;
+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) _Bool isForegrounded; // @synthesize isForegrounded=_isForegrounded;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <UAAppStateTrackerAdapter> adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) unsigned long long state;
- (void)applicationWillTerminate;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1 adapter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
