//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, SMAVastAdvertiser, SMAVastScenarioCompanionAd, SMAVastScenarioIcon;

@interface SMAVastScenario : NSObject
{
    _Bool _rewarded;
    _Bool _skipEndCardOnSkipVideo;
    _Bool _skippable;
    _Bool _prefetchable;
    NSString *_vastVersion;
    NSURL *_url;
    NSString *_mimeType;
    NSURL *_clickURL;
    double _duration;
    double _skipOffset;
    SMAVastScenarioCompanionAd *_companionAd;
    SMAVastScenarioIcon *_icon;
    NSArray *_progressEvents;
    NSString *_apiFramework;
    double _fileSize;
    NSString *_mediatype;
    NSString *_adParameters;
    NSArray *_universalAdId;
    unsigned long long _adType;
    NSString *_adServingId;
    SMAVastAdvertiser *_advertiser;
    NSArray *_blockedAdCategories;
    NSArray *_adCategories;
    NSArray *_adVerifications;
    double _width;
    double _height;
    NSArray *_clickTrackingURLs;
    NSArray *_viewableImpressionURLs;
    NSArray *_trackingEvents;
    NSArray *_rootErrorURLs;
    NSArray *_inlineErrorURLs;
    NSArray *_impressionURLs;
    NSArray *__customClickURLs;
}

+ (id)mediaFileFromLinearAd:(id)arg1 error:(id *)arg2 systemInfo:(id)arg3;
+ (id)combineScenario:(id)arg1 withWrapperScenario:(id)arg2;
+ (id)scenarioFromVastAd:(id)arg1 systemInfoProvider:(id)arg2;
+ (id)scenarioWithRoot:(id)arg1 systemInfoProvider:(id)arg2;
@property(copy, nonatomic) NSArray *_customClickURLs; // @synthesize _customClickURLs=__customClickURLs;
@property(copy, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(copy, nonatomic) NSArray *inlineErrorURLs; // @synthesize inlineErrorURLs=_inlineErrorURLs;
@property(copy, nonatomic) NSArray *rootErrorURLs; // @synthesize rootErrorURLs=_rootErrorURLs;
@property(copy, nonatomic) NSArray *trackingEvents; // @synthesize trackingEvents=_trackingEvents;
@property(copy, nonatomic) NSArray *viewableImpressionURLs; // @synthesize viewableImpressionURLs=_viewableImpressionURLs;
@property(copy, nonatomic) NSArray *clickTrackingURLs; // @synthesize clickTrackingURLs=_clickTrackingURLs;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSArray *adVerifications; // @synthesize adVerifications=_adVerifications;
@property(copy, nonatomic) NSArray *adCategories; // @synthesize adCategories=_adCategories;
@property(copy, nonatomic) NSArray *blockedAdCategories; // @synthesize blockedAdCategories=_blockedAdCategories;
@property(copy, nonatomic) SMAVastAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(copy, nonatomic) NSString *adServingId; // @synthesize adServingId=_adServingId;
@property(nonatomic) unsigned long long adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSArray *universalAdId; // @synthesize universalAdId=_universalAdId;
@property(copy, nonatomic) NSString *adParameters; // @synthesize adParameters=_adParameters;
@property(retain, nonatomic) NSString *mediatype; // @synthesize mediatype=_mediatype;
@property(nonatomic) double fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *apiFramework; // @synthesize apiFramework=_apiFramework;
@property(copy, nonatomic) NSArray *progressEvents; // @synthesize progressEvents=_progressEvents;
@property(retain, nonatomic) SMAVastScenarioIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) SMAVastScenarioCompanionAd *companionAd; // @synthesize companionAd=_companionAd;
@property(nonatomic) double skipOffset; // @synthesize skipOffset=_skipOffset;
@property(nonatomic) _Bool prefetchable; // @synthesize prefetchable=_prefetchable;
@property(nonatomic) _Bool skippable; // @synthesize skippable=_skippable;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSURL *clickURL; // @synthesize clickURL=_clickURL;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *vastVersion; // @synthesize vastVersion=_vastVersion;
@property(nonatomic) _Bool skipEndCardOnSkipVideo; // @synthesize skipEndCardOnSkipVideo=_skipEndCardOnSkipVideo;
@property(nonatomic) _Bool rewarded; // @synthesize rewarded=_rewarded;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *eventsDictionary;
@property(readonly, nonatomic) _Bool isVPAID;
- (id)init;
@property(readonly, nonatomic) NSArray *viewabilityResources;

@end

