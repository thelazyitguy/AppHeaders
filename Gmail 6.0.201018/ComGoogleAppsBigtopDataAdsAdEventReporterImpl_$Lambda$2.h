//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncFunction-Protocol.h"

@class ComGoogleAppsBigtopDataAdsAdEventReporterImpl, ComGoogleAppsBigtopDataItemsItemsProto_ViewType, ComGoogleCommonBaseOptional, ComGoogleGmailProtocolAdsAd, NSString, OrgJodaTimeInstant;

@interface ComGoogleAppsBigtopDataAdsAdEventReporterImpl_$Lambda$2 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataAdsAdEventReporterImpl *this$0_;
    ComGoogleGmailProtocolAdsAd *val$ad_;
    ComGoogleAppsBigtopDataItemsItemsProto_ViewType *val$viewType_;
    OrgJodaTimeInstant *val$lastShown_;
    ComGoogleCommonBaseOptional *val$teaserElementClickedToOpen_;
}

- (void)dealloc;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
