//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURL;

@interface BNCPreferenceHelper : NSObject
{
    NSOperationQueue *_persistPrefsQueue;
    NSString *_lastSystemBuildVersion;
    NSString *_browserUserAgentString;
    NSString *_branchAPIURL;
    NSString *_referringURL;
    _Bool _isDebug;
    _Bool _checkedFacebookAppLinks;
    _Bool _checkedAppleSearchAdAttribution;
    _Bool _disableAdNetworkCallouts;
    NSString *_lastRunBranchKey;
    NSString *_appVersion;
    NSString *_deviceFingerprintID;
    NSString *_sessionID;
    NSString *_spotlightIdentifier;
    NSString *_identityID;
    NSString *_linkClickIdentifier;
    NSString *_userUrl;
    NSString *_userIdentity;
    NSString *_sessionParams;
    NSString *_installParams;
    NSString *_universalLinkUrl;
    NSString *_externalIntentURI;
    long long _retryCount;
    double _retryInterval;
    double _timeout;
    NSDate *_lastStrongMatchDate;
    NSDictionary *_appleSearchAdDetails;
    NSMutableDictionary *_requestMetadataDictionary;
    NSMutableDictionary *_instrumentationDictionary;
    NSMutableDictionary *_savedAnalyticsData;
    NSString *_branchBlacklistURL;
    NSURL *_faceBookAppLink;
    NSMutableDictionary *_persistenceDict;
    NSMutableDictionary *_creditsDictionary;
}

+ (void)initialize;
+ (void)moveOldPrefsFile;
+ (id)URLForPrefsFile;
+ (id)prefsFile_deprecated;
+ (void)clearAll;
+ (id)getInstance;
+ (id)preferenceHelper;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *creditsDictionary; // @synthesize creditsDictionary=_creditsDictionary;
@property(retain, nonatomic) NSMutableDictionary *persistenceDict; // @synthesize persistenceDict=_persistenceDict;
@property(retain, nonatomic) NSURL *faceBookAppLink; // @synthesize faceBookAppLink=_faceBookAppLink;
@property(nonatomic) _Bool disableAdNetworkCallouts; // @synthesize disableAdNetworkCallouts=_disableAdNetworkCallouts;
@property(retain, nonatomic) NSString *branchBlacklistURL; // @synthesize branchBlacklistURL=_branchBlacklistURL;
@property(retain, nonatomic) NSMutableDictionary *savedAnalyticsData; // @synthesize savedAnalyticsData=_savedAnalyticsData;
@property(retain, nonatomic) NSMutableDictionary *instrumentationDictionary; // @synthesize instrumentationDictionary=_instrumentationDictionary;
@property(retain, nonatomic) NSMutableDictionary *requestMetadataDictionary; // @synthesize requestMetadataDictionary=_requestMetadataDictionary;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
- (long long)readIntegerFromDefaults:(id)arg1;
- (_Bool)readBoolFromDefaults:(id)arg1;
- (id)readStringFromDefaults:(id)arg1;
- (id)readObjectFromDefaults:(id)arg1;
- (void)persistPrefsToDisk;
- (void)writeObjectToDefaults:(id)arg1 value:(id)arg2;
- (void)writeBoolToDefaults:(id)arg1 value:(_Bool)arg2;
- (void)writeIntegerToDefaults:(id)arg1 value:(long long)arg2;
- (id)getContentAnalyticsManifest;
- (void)saveContentAnalyticsManifest:(id)arg1;
- (id)getBranchAnalyticsData;
- (void)clearBranchAnalyticsData;
- (void)saveBranchAnalyticsData:(id)arg1;
- (void)clearUserCredits;
- (long long)getCreditCountForBucket:(id)arg1;
- (long long)getCreditCount;
- (id)getCreditDictionary;
- (void)removeCreditCountForBucket:(id)arg1;
- (void)setCreditCount:(long long)arg1 forBucket:(id)arg2;
- (void)setCreditCount:(long long)arg1;
- (void)clearTrackingInformation;
@property _Bool trackingDisabled;
@property _Bool blacklistURLOpen;
@property long long URLBlackListVersion;
@property(retain) NSArray *URLBlackList;
@property(retain) NSDate *previousAppBuildDate;
@property _Bool limitFacebookTracking;
- (void)clearInstrumentationDictionary;
- (void)addInstrumentationDictionaryKey:(id)arg1 value:(id)arg2;
- (void)setRequestMetadataKey:(id)arg1 value:(id)arg2;
- (id)getBranchUniversalLinkDomains;
- (void)clearUserCreditsAndCounts;
@property(nonatomic) _Bool checkedFacebookAppLinks; // @synthesize checkedFacebookAppLinks=_checkedFacebookAppLinks;
@property(nonatomic) _Bool checkedAppleSearchAdAttribution; // @synthesize checkedAppleSearchAdAttribution=_checkedAppleSearchAdAttribution;
- (id)sanitizedMutableBaseURL:(id)arg1;
@property(retain, nonatomic) NSString *userUrl; // @synthesize userUrl=_userUrl;
@property(retain, nonatomic) NSString *browserUserAgentString;
@property(retain, nonatomic) NSString *lastSystemBuildVersion;
@property(nonatomic) _Bool appleSearchAdNeedsSend;
@property(retain, nonatomic) NSDictionary *appleSearchAdDetails; // @synthesize appleSearchAdDetails=_appleSearchAdDetails;
@property(retain, nonatomic) NSString *installParams; // @synthesize installParams=_installParams;
@property(retain, nonatomic) NSString *sessionParams; // @synthesize sessionParams=_sessionParams;
@property(retain) NSString *universalLinkUrl; // @synthesize universalLinkUrl=_universalLinkUrl;
@property(retain) NSString *referringURL;
@property(retain) NSString *externalIntentURI; // @synthesize externalIntentURI=_externalIntentURI;
@property(retain, nonatomic) NSString *spotlightIdentifier; // @synthesize spotlightIdentifier=_spotlightIdentifier;
@property(retain, nonatomic) NSString *linkClickIdentifier; // @synthesize linkClickIdentifier=_linkClickIdentifier;
@property(retain, nonatomic) NSString *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(retain, nonatomic) NSString *identityID; // @synthesize identityID=_identityID;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *deviceFingerprintID; // @synthesize deviceFingerprintID=_deviceFingerprintID;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSDate *lastStrongMatchDate; // @synthesize lastStrongMatchDate=_lastStrongMatchDate;
@property(retain, nonatomic) NSString *lastRunBranchKey; // @synthesize lastRunBranchKey=_lastRunBranchKey;
- (id)getEndpointFromURL:(id)arg1;
- (id)getAPIURL:(id)arg1;
- (id)getAPIBaseURL;
@property(retain) NSString *branchAPIURL;
- (void)dealloc;
- (void)synchronize;
- (id)init;

@end

