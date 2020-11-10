//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RedditService;
@protocol _TtP6Reddit28AnonymousBrowsingPresentable_, _TtP6Reddit32AnonymousBrowsingContextProvider_;

@interface _TtC6Reddit24AnonymousBrowsingManager : NSObject
{
    // Error parsing type: , name: kDefaultTimeoutIntervalSec
    // Error parsing type: , name: presentable
    // Error parsing type: , name: contextProvider
    // Error parsing type: , name: timeoutIntervalSec
    // Error parsing type: , name: $__lazy_storage_$_anonymousBrowsingInfo
    // Error parsing type: , name: accountManager
    // Error parsing type: , name: styleManager
    // Error parsing type: , name: targetURL
    // Error parsing type: , name: backgroundedAt
}

- (void).cxx_destruct;
- (id)init;
- (void)showExitDialogWithParent:(id)arg1 analyticsInfoReason:(long long)arg2 analyticsManager:(id)arg3;
- (void)showExitDialogWithSourceAnalyticsContext:(id)arg1 analyticsInfoReason:(long long)arg2 analyticsManager:(id)arg3;
- (void)leaveAnonymousBrowsingModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)enterAnonymousBrowsingModeWithPriorRedditService:(id)arg1 targetURL:(id)arg2;
- (void)enterAnonymousBrowsingMode;
- (id)initWithAccountManager:(id)arg1 styleManager:(id)arg2;
@property(nonatomic, retain) RedditService *priorRedditService;
@property(nonatomic) double timeoutIntervalSec; // @synthesize timeoutIntervalSec;
@property(nonatomic) __weak id <_TtP6Reddit32AnonymousBrowsingContextProvider_> contextProvider; // @synthesize contextProvider;
@property(nonatomic) __weak id <_TtP6Reddit28AnonymousBrowsingPresentable_> presentable; // @synthesize presentable;

@end
