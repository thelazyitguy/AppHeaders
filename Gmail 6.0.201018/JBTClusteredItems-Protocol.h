//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTItem-Protocol.h"
#import "JavaObject-Protocol.h"

@class JBTClusterType, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JBTClusterConfig, JBTId, JBTSendersSummary, JavaUtilList;

@protocol JBTClusteredItems <JBTItem, JavaObject>
- (id <JavaUtilList>)getTopPromoAnnotationList;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)dismiss;
- (id <JavaUtilList>)getChildItems;
- (id <JBTClusterConfig>)getClusterConfig;
- (id <JBTId>)getClusterId;
- (JBTClusterType *)getClusterType;
- (id <JBTSendersSummary>)getSendersSummaryWithInt:(int)arg1;
- (NSString *)getLoggingId;
- (id <JBTId>)getId;
@end
