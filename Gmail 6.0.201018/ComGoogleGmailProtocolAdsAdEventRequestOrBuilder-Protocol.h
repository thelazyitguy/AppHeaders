//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCaribouAdsProtoAdsEnums_AdSurveyOption, ComGoogleCaribouAdsProtoAdsEnums_AdSurveyType, ComGoogleCaribouAdsProtoAdsEnums_ExternalClickedSource, ComGoogleCaribouAdsProtoAdsEnums_TabType, ComGoogleCaribouAdsProtoAdsEnums_TeaserClickedSource, ComGoogleGmailProtocolAdsAdEventRequest_AdEventType, ComGoogleGmailProtocolAdsAdEventRequest_EventSource, ComGoogleGmailProtocolAdsClientInfo, NSString;

@protocol ComGoogleGmailProtocolAdsAdEventRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getBodyNativeActionElementId;
- (_Bool)hasBodyNativeActionElementId;
- (ComGoogleGmailProtocolAdsAdEventRequest_EventSource *)getSource;
- (_Bool)hasSource;
- (NSString *)getHtmlElementClicked;
- (_Bool)hasHtmlElementClicked;
- (ComGoogleCaribouAdsProtoAdsEnums_ExternalClickedSource *)getExternalClickedSource;
- (_Bool)hasExternalClickedSource;
- (ComGoogleCaribouAdsProtoAdsEnums_TeaserClickedSource *)getTeaserClickedSource;
- (_Bool)hasTeaserClickedSource;
- (ComGoogleCaribouAdsProtoAdsEnums_AdSurveyOption *)getSurveyAnswer;
- (_Bool)hasSurveyAnswer;
- (ComGoogleCaribouAdsProtoAdsEnums_AdSurveyType *)getSurveyType;
- (_Bool)hasSurveyType;
- (long long)getDurationSinceLastActionMs;
- (_Bool)hasDurationSinceLastActionMs;
- (NSString *)getObfuscatedData;
- (_Bool)hasObfuscatedData;
- (NSString *)getCiParamValue;
- (_Bool)hasCiParamValue;
- (NSString *)getBody;
- (_Bool)hasBody;
- (_Bool)getRead;
- (_Bool)hasRead;
- (NSString *)getUrl;
- (_Bool)hasUrl;
- (NSString *)getMessageId;
- (_Bool)hasMessageId;
- (ComGoogleCaribouAdsProtoAdsEnums_TabType *)getTab;
- (_Bool)hasTab;
- (NSString *)getItemServerPermId;
- (_Bool)hasItemServerPermId;
- (NSString *)getAdEventId;
- (_Bool)hasAdEventId;
- (ComGoogleGmailProtocolAdsAdEventRequest_AdEventType *)getType;
- (_Bool)hasType;
- (ComGoogleGmailProtocolAdsClientInfo *)getClientInfo;
- (_Bool)hasClientInfo;
@end

