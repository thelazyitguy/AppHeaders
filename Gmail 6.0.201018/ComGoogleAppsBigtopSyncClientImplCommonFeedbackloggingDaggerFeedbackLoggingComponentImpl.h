//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingFeedbackLoggingComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingDaggerFeedbackLoggingComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingFeedbackLoggingComponentImpl>
{
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> applicationStartTimeMsProvider_;
    id <JavaxInjectProvider> clientIdProvider_;
    id <JavaxInjectProvider> buildLabelProvider_;
    id <JavaxInjectProvider> buildChangelistProvider_;
    id <JavaxInjectProvider> serverJobsetTagProvider_;
    id <JavaxInjectProvider> commonFeedbackLoggerProvider_;
    id <JavaxInjectProvider> provideFeedbackLoggersListProvider_;
}

- (void)dealloc;
- (id)getFeedbackLoggersList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
