//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLoggingComponent;

@interface ComGoogleAppsBigtopSyncClientImplLivelistDaggerLiveListComponentImpl_Builder : NSObject
{
    id <ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLoggingComponent> feedbackLoggingComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
}

- (void)dealloc;
- (id)build;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)feedbackLoggingComponentWithComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLoggingComponent:(id)arg1;

@end
