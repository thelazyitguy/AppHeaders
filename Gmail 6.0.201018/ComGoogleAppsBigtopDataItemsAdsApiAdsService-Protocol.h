//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_AdEventRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetAdTransientStateRequest, ComGoogleAppsBigtopDataItemsItemsProto_TopPromoAnnotation, ComGoogleAppsBigtopDataItemsItemsProto_ViewType, ComGoogleGmailProtocolAdsAdRequest_RequestEvent;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol ComGoogleAppsBigtopDataItemsAdsApiAdsService <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getTopPromoTransientStateWithComGoogleAppsBigtopDataItemsItemsProto_GetAdTransientStateRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetAdTransientStateRequest *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)enqueueAndExecuteAdsStartupJob;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)executeInteractiveJobs;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)refreshAdsWithRequestEventWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(ComGoogleAppsBigtopDataItemsItemsProto_ViewType *)arg1 withComGoogleGmailProtocolAdsAdRequest_RequestEvent:(ComGoogleGmailProtocolAdsAdRequest_RequestEvent *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)refreshAdsWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(ComGoogleAppsBigtopDataItemsItemsProto_ViewType *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getAdTransientStateWithComGoogleAppsBigtopDataItemsItemsProto_GetAdTransientStateRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetAdTransientStateRequest *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)processTopPromoEventWithComGoogleAppsBigtopDataItemsItemsProto_AdEventRequest:(ComGoogleAppsBigtopDataItemsItemsProto_AdEventRequest *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_TopPromoAnnotation:(ComGoogleAppsBigtopDataItemsItemsProto_TopPromoAnnotation *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)processAdEventWithComGoogleAppsBigtopDataItemsItemsProto_AdEventRequest:(ComGoogleAppsBigtopDataItemsItemsProto_AdEventRequest *)arg1;
@end
