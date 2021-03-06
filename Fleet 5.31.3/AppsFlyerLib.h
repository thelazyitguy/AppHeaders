//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFSDKSKAdNetwork, AFSDKiAdClient, AppsFlyerAES128Crypto, NSArray, NSDate, NSDictionary, NSString, NSURL;
@protocol AFSDKHTTPClientProtocol, AFSDKKeychainProtocol, AFSDKStorageProtocol, AppsFlyerLibDelegate, OS_dispatch_queue;

@interface AppsFlyerLib : NSObject
{
    _Bool permitAggregateiAdData;
    _Bool _isStopped;
    _Bool _disableSKAdNetwork;
    _Bool _isDebug;
    _Bool _shouldCollectDeviceName;
    _Bool _anonymizeUser;
    _Bool _disableCollectASA;
    _Bool _useReceiptValidationSandbox;
    _Bool _useUninstallSandbox;
    _Bool _disableIDFVCollection;
    _Bool _isBackgroundRequestEnabled;
    _Bool _skipNextUniversalLinkAttribution;
    _Bool _skipAdvancedJailbreakValidation;
    _Bool _VPNCollectionEnabled;
    int emailCryptType;
    NSURL *_deeplink;
    NSArray *userEmails;
    NSString *_host;
    NSArray *_sharingFilter;
    NSString *_customerUserID;
    NSDictionary *_customData;
    NSString *_appsFlyerDevKey;
    NSString *_appleAppID;
    NSString *_advertisingIdentifier;
    NSString *_currencyCode;
    NSString *_appInviteOneLinkID;
    id <AppsFlyerLibDelegate> _delegate;
    NSArray *_resolveDeepLinkURLs;
    NSArray *_oneLinkCustomDomains;
    NSString *_phoneNumber;
    NSString *_hostPrefix;
    unsigned long long _minTimeBetweenSessions;
    NSURL *_facebookDeferredAppLink;
    id <AFSDKHTTPClientProtocol> _httpClient;
    NSDate *_lastLaunchTime;
    AppsFlyerAES128Crypto *_crypto;
    AFSDKiAdClient *_iAdClient;
    id <AFSDKStorageProtocol> _storage;
    NSString *_sourceApplication;
    NSString *_notificationUserInfo;
    id <AFSDKKeychainProtocol> _keychainWrapper;
    NSObject<OS_dispatch_queue> *_mBackgroundQueue;
    Class _FBSDKAppLinkUtility1;
    AFSDKSKAdNetwork *_SKAdNetwork;
}

+ (id)shared;
+ (void)initialize;
+ (void)load;
@property(retain, nonatomic) AFSDKSKAdNetwork *SKAdNetwork; // @synthesize SKAdNetwork=_SKAdNetwork;
@property(nonatomic) _Bool VPNCollectionEnabled; // @synthesize VPNCollectionEnabled=_VPNCollectionEnabled;
@property(nonatomic) _Bool skipAdvancedJailbreakValidation; // @synthesize skipAdvancedJailbreakValidation=_skipAdvancedJailbreakValidation;
@property(retain, nonatomic) Class FBSDKAppLinkUtility1; // @synthesize FBSDKAppLinkUtility1=_FBSDKAppLinkUtility1;
@property(nonatomic) _Bool skipNextUniversalLinkAttribution; // @synthesize skipNextUniversalLinkAttribution=_skipNextUniversalLinkAttribution;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mBackgroundQueue; // @synthesize mBackgroundQueue=_mBackgroundQueue;
@property(retain, nonatomic) id <AFSDKKeychainProtocol> keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(retain, nonatomic) NSString *notificationUserInfo; // @synthesize notificationUserInfo=_notificationUserInfo;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) id <AFSDKStorageProtocol> storage; // @synthesize storage=_storage;
@property(nonatomic) _Bool isBackgroundRequestEnabled; // @synthesize isBackgroundRequestEnabled=_isBackgroundRequestEnabled;
@property(retain) AFSDKiAdClient *iAdClient; // @synthesize iAdClient=_iAdClient;
@property(retain) AppsFlyerAES128Crypto *crypto; // @synthesize crypto=_crypto;
@property(retain) NSDate *lastLaunchTime; // @synthesize lastLaunchTime=_lastLaunchTime;
@property(retain, nonatomic) id <AFSDKHTTPClientProtocol> httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) NSURL *facebookDeferredAppLink; // @synthesize facebookDeferredAppLink=_facebookDeferredAppLink;
@property unsigned long long minTimeBetweenSessions; // @synthesize minTimeBetweenSessions=_minTimeBetweenSessions;
@property(readonly, nonatomic) NSString *hostPrefix; // @synthesize hostPrefix=_hostPrefix;
@property(nonatomic) _Bool disableIDFVCollection; // @synthesize disableIDFVCollection=_disableIDFVCollection;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSArray *oneLinkCustomDomains; // @synthesize oneLinkCustomDomains=_oneLinkCustomDomains;
@property(retain, nonatomic) NSArray *resolveDeepLinkURLs; // @synthesize resolveDeepLinkURLs=_resolveDeepLinkURLs;
@property(nonatomic) _Bool useUninstallSandbox; // @synthesize useUninstallSandbox=_useUninstallSandbox;
@property(nonatomic) _Bool useReceiptValidationSandbox; // @synthesize useReceiptValidationSandbox=_useReceiptValidationSandbox;
@property(nonatomic) __weak id <AppsFlyerLibDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool disableCollectASA; // @synthesize disableCollectASA=_disableCollectASA;
@property _Bool anonymizeUser; // @synthesize anonymizeUser=_anonymizeUser;
@property(retain, nonatomic, setter=setAppInviteOneLink:) NSString *appInviteOneLinkID; // @synthesize appInviteOneLinkID=_appInviteOneLinkID;
@property(nonatomic) _Bool shouldCollectDeviceName; // @synthesize shouldCollectDeviceName=_shouldCollectDeviceName;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) _Bool disableSKAdNetwork; // @synthesize disableSKAdNetwork=_disableSKAdNetwork;
@property(readonly, nonatomic) NSString *advertisingIdentifier; // @synthesize advertisingIdentifier=_advertisingIdentifier;
@property(retain, nonatomic) NSString *appleAppID; // @synthesize appleAppID=_appleAppID;
@property(retain, nonatomic) NSString *appsFlyerDevKey; // @synthesize appsFlyerDevKey=_appsFlyerDevKey;
@property(retain, nonatomic, setter=setAdditionalData:) NSDictionary *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) NSString *customerUserID; // @synthesize customerUserID=_customerUserID;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) int emailCryptType; // @synthesize emailCryptType;
@property(retain, nonatomic) NSArray *userEmails; // @synthesize userEmails;
@property(nonatomic) _Bool permitAggregateiAdData; // @synthesize permitAggregateiAdData;
- (void).cxx_destruct;
- (void)receiveAppsFlyerURLs:(id)arg1;
@property(nonatomic) _Bool disableAdvertisingIdentifier;
- (void)enableFacebookDeferredApplinksWithClass:(Class)arg1;
@property(nonatomic, getter=isProxyManagerDisabled) _Bool proxyManagerDisabled;
- (void)setSharingFilterForAllPartners;
@property(retain, nonatomic) NSArray *sharingFilter; // @synthesize sharingFilter=_sharingFilter;
@property(retain, nonatomic) NSURL *deeplink; // @synthesize deeplink=_deeplink;
@property _Bool isStopped; // @synthesize isStopped=_isStopped;
- (void)setHost:(id)arg1 withHostPrefix:(id)arg2;
- (void)remoteDebuggingCallWithData:(id)arg1;
- (id)getSDKVersion;
- (id)__handlePushNotification:(long long)arg1 dictionary:(id)arg2;
- (void)handlePushNotification:(id)arg1;
- (id)getInstallDate;
- (id)getFirstLaunchDate;
- (id)getVersionUpdateDate:(id)arg1 currentUpdateDate:(id)arg2;
- (long long)getInAppCounter:(_Bool)arg1;
- (void)incrementRealLaunchCounter;
- (long long)getRealLaunchCounter;
- (id)getCounter:(_Bool)arg1;
- (void)executeRequestWithUrlString:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resolveBackupInfo;
- (void)__performOnAppAttributionWithDeeplinkURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performOnAppAttributionWithURL:(id)arg1;
- (void)waitForAdvertisingIdentifierWithTimeoutInterval:(double)arg1;
- (void)callServerWithEventName:(id)arg1 eventValues:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isWifiAvailable;
- (double)getTimePassedSinceLastLaunch;
- (id)encryptData:(id)arg1;
- (id)resolveOriginalAppsFlyerID:(char *)arg1;
- (id)getOriginalAppsFlyerId;
- (id)getAppsFlyerUID;
- (id)installDate;
- (void)logLocation:(double)arg1 latitude:(double)arg2;
- (void)__validateAndLogInAppPurchase:(id)arg1 price:(id)arg2 currency:(id)arg3 transactionId:(id)arg4 additionalParameters:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)validateAndLogInAppPurchase:(id)arg1 price:(id)arg2 currency:(id)arg3 transactionId:(id)arg4 additionalParameters:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)getEventParameters:(_Bool)arg1;
- (void)eventParametersInBackgroundQueueAndType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__sendAdRevenueWithParameters:(id)arg1;
- (void)__logEvent:(id)arg1 withValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)logEventWithEventName:(id)arg1 eventValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)logEvent:(id)arg1 withValues:(id)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)start;
- (void)__startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getConversionData;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (void)__continueUserActivity:(id)arg1;
- (_Bool)continueUserActivity:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (void)handleOpenUrl:(id)arg1 options:(id)arg2;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 withAnnotation:(id)arg3;
- (void)applicationDidEnterBackgroundNotification;
- (void)applicationDidFinishLaunchingNotification:(id)arg1;
- (id)getValueFromBundle:(id)arg1;
- (void)backgroundRegisterUninstall:(id)arg1;
- (void)registerUninstall:(id)arg1;
- (void)handleOneLinkResponse:(id)arg1;
- (void)sendRequestFromCache:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (id)init;
- (void)setUserEmails:(id)arg1 withCryptType:(int)arg2;
- (void)setIsTrace:(_Bool)arg1;

@end

