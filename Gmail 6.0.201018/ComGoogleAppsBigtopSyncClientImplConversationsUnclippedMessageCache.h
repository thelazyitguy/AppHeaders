//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleCommonBaseOptional, ComGoogleCommonBaseTicker, JBTLoggingUserActionRecorder;
@protocol ComGoogleAppsBigtopDataItemsMessagesApiUnclippedMessageFetchingService, JBTLoggingLatencyMeasurements, JavaUtilMap;

@interface ComGoogleAppsBigtopSyncClientImplConversationsUnclippedMessageCache : NSObject
{
    id <ComGoogleAppsBigtopDataItemsMessagesApiUnclippedMessageFetchingService> unclippedMessageFetchingService_;
    JBTLoggingUserActionRecorder *userActionRecorder_;
    id <JBTLoggingLatencyMeasurements> latencyMeasurements_;
    ComGoogleCommonBaseTicker *ticker_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <JavaUtilMap> cache_;
    ComGoogleCommonBaseOptional *currentlyLoadedConversation_;
}

+ (void)initialize;
- (void)dealloc;
- (id)fetchDataWithJBTId:(id)arg1 withJBTId:(id)arg2;
- (id)getWithJBTId:(id)arg1;

@end

