//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangRunnable-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl, ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_MonitoredMessage, NSString;
@protocol JBTId;

@interface ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_$Lambda$1 : NSObject <JavaLangRunnable>
{
    ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl *this$0_;
    ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_MonitoredMessage *val$monitoredMessage_;
    id <JBTId> val$messageId_;
}

- (void)dealloc;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

