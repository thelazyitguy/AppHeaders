//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ApptentiveLogMonitor : NSObject
{
}

+ (_Bool)IsMobileConfigInstalled;
+ (void)verifyAccessToken:(id)arg1 baseURL:(id)arg2 appKey:(id)arg3 signature:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)readAccessTokenFromClipboard;
+ (void)registerObservers;
+ (_Bool)resumeSession;
+ (void)startSession:(id)arg1;
+ (void)startSessionWithBaseURL:(id)arg1 appKey:(id)arg2 signature:(id)arg3;
+ (void)startSessionWithBaseURL:(id)arg1 appKey:(id)arg2 signature:(id)arg3 queue:(id)arg4;

@end

