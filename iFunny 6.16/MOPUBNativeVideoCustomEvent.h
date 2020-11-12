//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPNativeCustomEvent.h>

@class MPVideoConfig, NSDate, NSDictionary, NSString;

@interface MOPUBNativeVideoCustomEvent : MPNativeCustomEvent
{
    NSString *_tierName;
    NSString *_adIdentifier;
    MPVideoConfig *_videoConfig;
    NSDictionary *_customEventInfo;
    NSDate *_lastFetchedWrapperData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastFetchedWrapperData; // @synthesize lastFetchedWrapperData=_lastFetchedWrapperData;
@property(retain, nonatomic) NSDictionary *customEventInfo; // @synthesize customEventInfo=_customEventInfo;
@property(retain, nonatomic) MPVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(copy, nonatomic) NSString *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(copy, nonatomic) NSString *tierName; // @synthesize tierName=_tierName;
- (void)logVASTErrorWithVASTXMLData:(id)arg1 customEventInfo:(id)arg2 errorDescription:(id)arg3;
- (void)logVASTErrorWithVASTXMLData:(id)arg1 customEventInfo:(id)arg2 error:(id)arg3;
- (id)createAdapterWithCustomEventInfo:(id)arg1;
- (id)stringFromVASTErrorCode:(long long)arg1;
- (double)requestsLoadingTimeout;
- (void)requestAdWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2;
- (void)handleSuccessfulVastParsing:(id)arg1 adIdentifier:(id)arg2 info:(id)arg3;

@end
