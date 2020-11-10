//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADJUtil : NSObject
{
}

+ (id)readCurrentRadioAccessTechnology;
+ (id)readMNC;
+ (id)readMCC;
+ (id)readReachabilityFlags;
+ (_Bool)contains:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (_Bool)checkAttributionDetails:(id)arg1;
+ (id)convertDeviceToken:(id)arg1;
+ (void)launchDeepLinkMain:(id)arg1;
+ (_Bool)deleteFileInPath:(id)arg1;
+ (_Bool)deleteFileWithName:(id)arg1;
+ (void)launchInQueue:(id)arg1 selfInject:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)mergeParameters:(id)arg1 source:(id)arg2 parameterName:(id)arg3;
+ (_Bool)isValidParameter:(id)arg1 attributeType:(id)arg2 parameterName:(id)arg3;
+ (void)launchInMainThread:(CDUnknownBlockType)arg1;
+ (void)launchInMainThread:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
+ (double)waitingTime:(long long)arg1 backoffStrategy:(id)arg2;
+ (double)randomInRange:(double)arg1 maxRange:(double)arg2;
+ (id)secondsNumberFormat:(double)arg1;
+ (id)removeOptionalRedirect:(id)arg1;
+ (id)convertUniversalLink:(id)arg1 scheme:(id)arg2;
+ (id)getInstallTime;
+ (id)getUpdateTime;
+ (id)idfa;
+ (id)convertDictionaryValues:(id)arg1;
+ (id)completionHandler:(id)arg1 response:(id)arg2 error:(id)arg3 prefixErrorMessage:(id)arg4 suffixErrorMessage:(id)arg5 activityPackage:(id)arg6;
+ (void)sendNSURLConnectionRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 activityPackage:(id)arg4 responseDataHandler:(CDUnknownBlockType)arg5;
+ (void)sendNSURLSessionRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 activityPackage:(id)arg4 responseDataHandler:(CDUnknownBlockType)arg5;
+ (id)getValidIdentifier:(id)arg1;
+ (void)checkAndAddEntry:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)buildSignatureParameters:(id)arg1 appSecret:(id)arg2 activityKindS:(id)arg3;
+ (id)buildAuthorizationHeader:(id)arg1 secretId:(id)arg2 activityPackage:(id)arg3;
+ (id)requestForPostPackage:(id)arg1 baseUrl:(id)arg2 queueSize:(unsigned long long)arg3;
+ (id)requestForGetPackage:(id)arg1 baseUrl:(id)arg2;
+ (id)extractSecretId:(id)arg1;
+ (id)extractAppSecret:(id)arg1;
+ (void)sendRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 secretId:(id)arg4 appSecret:(id)arg5 activityPackage:(id)arg6 responseDataHandler:(CDUnknownBlockType)arg7;
+ (void)sendPostRequest:(id)arg1 queueSize:(unsigned long long)arg2 prefixErrorMessage:(id)arg3 suffixErrorMessage:(id)arg4 activityPackage:(id)arg5 responseDataHandler:(CDUnknownBlockType)arg6;
+ (void)sendRequest:(id)arg1 prefixErrorMessage:(id)arg2 activityPackage:(id)arg3 secretId:(id)arg4 appSecret:(id)arg5 responseDataHandler:(CDUnknownBlockType)arg6;
+ (void)sendGetRequest:(id)arg1 prefixErrorMessage:(id)arg2 activityPackage:(id)arg3 responseDataHandler:(CDUnknownBlockType)arg4;
+ (id)formatErrorMessage:(id)arg1 systemErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3;
+ (_Bool)isNotNull:(id)arg1;
+ (_Bool)isNull:(id)arg1;
+ (id)queryString:(id)arg1 queueSize:(unsigned long long)arg2;
+ (id)queryString:(id)arg1;
+ (_Bool)checkForDirectoryPresenceInPath:(id)arg1 forFolder:(id)arg2;
+ (id)getFilePathInAppSupportDir:(id)arg1;
+ (id)getFilePathInDocumentsDir:(id)arg1;
+ (_Bool)migrateFileFromPath:(id)arg1 toPath:(id)arg2;
+ (void)writeObject:(id)arg1 fileName:(id)arg2 objectName:(id)arg3;
+ (id)readObject:(id)arg1 objectName:(id)arg2 class:(Class)arg3;
+ (id)buildJsonDict:(id)arg1 exceptionPtr:(id *)arg2 errorPtr:(id *)arg3;
+ (void)saveJsonResponse:(id)arg1 responseData:(id)arg2;
+ (id)formatDate:(id)arg1;
+ (id)formatSeconds1970:(double)arg1;
+ (void)excludeFromBackup:(id)arg1;
+ (id)getDateFormatter;
+ (id)clientSdk;
+ (id)baseUrl;
+ (void)updateUrlSessionConfiguration:(id)arg1;
+ (void)initializeReachability;
+ (void)initializeNetworkInfoAndCarrier;
+ (void)initializeUrlSessionConfiguration;
+ (id)getUrlSessionConfiguration;
+ (void)initializeSecondsNumberFormatter;
+ (void)initializeOptionalRedirectRegex;
+ (void)initializeShortUniversalLinkRegex;
+ (void)initializeUniversalLinkRegex;
+ (void)teardown;
+ (void)initialize;

@end

