//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTCORApplicationDelegate-Protocol.h"
#import "GDTCORApplicationProtocol-Protocol.h"

@class NSString, UIWindow;

@interface GDTCORApplication : NSObject <GDTCORApplicationProtocol, GDTCORApplicationDelegate>
{
    _Bool _isRunningInBackground;
}

+ (id)sharedApplication;
+ (void)initialize;
+ (void)load;
@property _Bool isRunningInBackground; // @synthesize isRunningInBackground=_isRunningInBackground;
- (void)iOSApplicationWillTerminate:(id)arg1;
- (void)iOSApplicationWillEnterForeground:(id)arg1;
- (void)iOSApplicationDidEnterBackground:(id)arg1;
- (id)sharedApplicationForBackgroundTask;
- (_Bool)isAppExtension;
- (void)endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
