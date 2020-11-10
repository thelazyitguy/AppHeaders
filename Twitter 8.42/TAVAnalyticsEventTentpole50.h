//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVAnalyticsEvent.h>

#import <TwitterAVCore/TAVAnalyticsClientEvent-Protocol.h>
#import <TwitterAVCore/TAVAnalyticsPromotedEvent-Protocol.h>
#import <TwitterAVCore/TAVAnalyticsVASTTrackingEvent-Protocol.h>

@class NSDictionary, NSString, TAVAnalyticsSessionState;
@protocol TAVPlaylistItemKey;

@interface TAVAnalyticsEventTentpole50 : TAVAnalyticsEvent <TAVAnalyticsVASTTrackingEvent, TAVAnalyticsPromotedEvent, TAVAnalyticsClientEvent>
{
}

+ (id)promotedEventNameForContent;
+ (id)promotedEventNameForAd;
@property(readonly, copy, nonatomic) NSString *VASTTrackingMetric;
@property(readonly, copy, nonatomic) NSString *clientEventAction;

// Remaining properties
@property(readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property(readonly, copy, nonatomic) NSString *clientEventCategory;
@property(readonly, copy, nonatomic) NSDictionary *clientEventParameters;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) id <TAVPlaylistItemKey> playlistItemKey;
@property(readonly) Class superclass;

@end

