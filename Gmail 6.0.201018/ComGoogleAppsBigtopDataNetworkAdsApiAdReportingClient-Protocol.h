//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatNetUri;
@protocol ComGoogleAppsXplatHttpHttpSerializer, ComGoogleCommonUtilConcurrentListenableFuture;

@protocol ComGoogleAppsBigtopDataNetworkAdsApiAdReportingClient <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)doPostRequestWithComGoogleAppsXplatNetUri:(ComGoogleAppsXplatNetUri *)arg1 withId:(id)arg2 withComGoogleAppsXplatHttpHttpSerializer:(id <ComGoogleAppsXplatHttpHttpSerializer>)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)doRequestWithComGoogleAppsXplatNetUri:(ComGoogleAppsXplatNetUri *)arg1 withComGoogleAppsXplatHttpHttpSerializer:(id <ComGoogleAppsXplatHttpHttpSerializer>)arg2;
@end
