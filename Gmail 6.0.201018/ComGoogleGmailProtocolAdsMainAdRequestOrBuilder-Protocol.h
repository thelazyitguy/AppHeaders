//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleGmailProtocolAdsAdEventRequest, ComGoogleGmailProtocolAdsAdRequest, ComGoogleGmailProtocolAdsAdSetupRequest, ComGoogleGmailProtocolAdsApmRefreshRequest, ComGoogleGmailProtocolAdsTopPromoEventRequest;

@protocol ComGoogleGmailProtocolAdsMainAdRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleGmailProtocolAdsTopPromoEventRequest *)getTopPromoEventRequest;
- (_Bool)hasTopPromoEventRequest;
- (ComGoogleGmailProtocolAdsApmRefreshRequest *)getApmRefreshRequest;
- (_Bool)hasApmRefreshRequest;
- (ComGoogleGmailProtocolAdsAdEventRequest *)getAdEventRequest;
- (_Bool)hasAdEventRequest;
- (ComGoogleGmailProtocolAdsAdRequest *)getAdFetchRequest;
- (_Bool)hasAdFetchRequest;
- (ComGoogleGmailProtocolAdsAdSetupRequest *)getAdSetupRequest;
- (_Bool)hasAdSetupRequest;
@end
