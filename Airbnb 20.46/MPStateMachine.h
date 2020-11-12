//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, MPConsumerInfo, MPLaunchInfo, MPLocationManager, MPSearchAdsAttribution, MPSession, MParticleReachability, NSArray, NSDate, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface MPStateMachine : NSObject
{
    _Bool optOutSet;
    _Bool alwaysTryToCollectIDFASet;
    NSObject<OS_dispatch_queue> *messageQueue;
    _Bool _optOut;
    _Bool _alwaysTryToCollectIDFA;
    _Bool _automaticSessionTracking;
    _Bool _allowASR;
    _Bool _backgrounded;
    _Bool _dataRamped;
    MPConsumerInfo *_consumerInfo;
    NSString *_deviceTokenType;
    NSNumber *_firstSeenInstallation;
    long long _installationType;
    NSString *_locationTrackingMode;
    unsigned long long _logLevel;
    NSString *_pushNotificationMode;
    NSString *_storedSDKVersion;
    NSArray *_triggerEventTypes;
    NSArray *_triggerMessageTypes;
    long long _networkStatus;
    CLLocation *_location;
    NSString *_apiKey;
    MPSession *_currentSession;
    NSArray *_customModules;
    NSString *_exceptionHandlingMode;
    NSDictionary *_launchOptions;
    MPLocationManager *_locationManager;
    NSString *_networkPerformanceMeasuringMode;
    NSString *_secret;
    NSDate *_startTime;
    MPLaunchInfo *_launchInfo;
    NSDate *_launchDate;
    long long _uploadStatus;
    NSNumber *_aliasMaxWindow;
    MPSearchAdsAttribution *_searchAttribution;
    NSDictionary *_searchAdsInfo;
    MParticleReachability *_reachability;
}

+ (_Bool)isAppExtension;
+ (void)setRunningInBackground:(_Bool)arg1;
+ (_Bool)runningInBackground;
+ (id)provisioningProfileString;
+ (void)setEnvironment:(unsigned long long)arg1;
+ (unsigned long long)environment;
+ (unsigned long long)getEnvironment;
- (void).cxx_destruct;
@property(retain, nonatomic) MParticleReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSDictionary *searchAdsInfo; // @synthesize searchAdsInfo=_searchAdsInfo;
@property(retain, nonatomic) MPSearchAdsAttribution *searchAttribution; // @synthesize searchAttribution=_searchAttribution;
@property(retain, nonatomic) NSNumber *aliasMaxWindow; // @synthesize aliasMaxWindow=_aliasMaxWindow;
@property(readonly, nonatomic) _Bool dataRamped; // @synthesize dataRamped=_dataRamped;
@property(readonly, nonatomic) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(readonly, nonatomic) NSDate *launchDate; // @synthesize launchDate=_launchDate;
@property(retain, nonatomic) MPLaunchInfo *launchInfo; // @synthesize launchInfo=_launchInfo;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(retain, nonatomic) NSString *networkPerformanceMeasuringMode; // @synthesize networkPerformanceMeasuringMode=_networkPerformanceMeasuringMode;
@property(retain, nonatomic) MPLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) NSString *exceptionHandlingMode; // @synthesize exceptionHandlingMode=_exceptionHandlingMode;
@property(retain, nonatomic) NSArray *customModules; // @synthesize customModules=_customModules;
@property(nonatomic) __weak MPSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(nonatomic) _Bool allowASR; // @synthesize allowASR=_allowASR;
@property(nonatomic) _Bool automaticSessionTracking; // @synthesize automaticSessionTracking=_automaticSessionTracking;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property(retain, nonatomic) MPConsumerInfo *consumerInfo; // @synthesize consumerInfo=_consumerInfo;
- (void)configureAliasMaxWindow:(id)arg1;
- (void)configureRestrictIDFA:(id)arg1;
- (void)configureTriggers:(id)arg1;
- (void)configureRampPercentage:(id)arg1;
- (void)configureCustomModules:(id)arg1;
@property(readonly, nonatomic) NSArray *triggerMessageTypes; // @synthesize triggerMessageTypes=_triggerMessageTypes;
@property(readonly, nonatomic) NSArray *triggerEventTypes; // @synthesize triggerEventTypes=_triggerEventTypes;
@property(retain, nonatomic) NSString *pushNotificationMode; // @synthesize pushNotificationMode=_pushNotificationMode;
@property(nonatomic) _Bool alwaysTryToCollectIDFA; // @synthesize alwaysTryToCollectIDFA=_alwaysTryToCollectIDFA;
@property(nonatomic) _Bool optOut; // @synthesize optOut=_optOut;
- (void)setMinUploadDate:(id)arg1 uploadType:(unsigned long long)arg2;
- (id)minUploadDateForUploadType:(unsigned long long)arg1;
- (id)minDefaultsKeyForUploadType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *locationTrackingMode; // @synthesize locationTrackingMode=_locationTrackingMode;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long installationType; // @synthesize installationType=_installationType;
- (void)setFirstSeenInstallation:(id)arg1;
@property(readonly, nonatomic) NSNumber *firstSeenInstallation; // @synthesize firstSeenInstallation=_firstSeenInstallation;
@property(readonly, nonatomic) NSString *deviceTokenType; // @synthesize deviceTokenType=_deviceTokenType;
- (void)handleReachabilityChanged:(id)arg1;
- (void)handleApplicationWillTerminate:(id)arg1;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)resetTriggers;
- (void)resetRampPercentage;
@property(retain, nonatomic) NSString *storedSDKVersion; // @synthesize storedSDKVersion=_storedSDKVersion;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)dealloc;
- (id)init;

@end

