//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ComGoogleAppsBigtopDataItemsChangesApiItemChangesService, ComGoogleCommonTimeClock, JBTSettingsClient;

@interface ComGoogleAppsBigtopDataAdsAdMessageConverter : NSObject
{
    id <ComGoogleCommonTimeClock> clock_;
    id <ComGoogleAppsBigtopDataItemsChangesApiItemChangesService> itemChangesService_;
    NSString *primaryAccountName_;
    id <JBTSettingsClient> settingsClient_;
}

+ (void)initialize;
- (void)dealloc;
- (id)unstarWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)starWithComGoogleGmailProtocolAdsAd:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (id)forwardWithComGoogleGmailProtocolAdsAd:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;

@end
