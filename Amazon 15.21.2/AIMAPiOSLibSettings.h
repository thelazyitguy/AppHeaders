//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AIMetricsMAPVersionCollector, NSArray, NSDictionary, NSFileHandle, NSMutableSet, NSNumber, NSString, UIColor, UIView;
@protocol AIAuthenticationDelegate, AIMAPMetricsDelegate;

@interface AIMAPiOSLibSettings : NSObject
{
    _Bool _proactiveAccessTokenRefresh;
    _Bool _enableSharedWebCredential;
    _Bool _enableSharedWebCredentialRelaunchButton;
    _Bool _enableUserRecognition;
    _Bool _enableAutoFillUsername;
    _Bool _shouldHandleCreateAccount;
    _Bool _disableCookieWriting;
    _Bool _isWKWebviewEnabledForAlliOSVersions;
    _Bool _disablePageReloadWhenViewWillAppear;
    NSString *_appName;
    NSString *_appVersion;
    id <AIAuthenticationDelegate> _delegate;
    id <AIMAPMetricsDelegate> _metricsDelegate;
    NSString *_authPortalPageId;
    NSString *_authPortalAssocHandle;
    NSString *_authPortalLanguageCode;
    NSDictionary *_authPortalExtraParameters;
    double _authPortalTimeout;
    NSString *_domain;
    NSString *_authPortalDebugDomain;
    NSString *_pandaDebugDomain;
    NSString *_deviceNameTemplate;
    NSNumber *_globalSignin;
    long long _logLevel;
    long long _osLogLevel;
    UIColor *_spinnerColor;
    UIColor *_webViewColor;
    NSString *_appKeychainAccessGroup;
    NSArray *_extensionKeychainAccessGroups;
    NSString *_sharedUserDefault;
    UIColor *_navigationTintColor;
    NSString *_navigationTitle;
    UIView *_navigationTitleView;
    NSDictionary *_titleTextAttributes;
    NSString *_imageForBackButton;
    NSString *_customizedDomain;
    NSString *_pandaRequestDomain;
    NSString *_pandaDomainForMarketplaceId;
    NSString *_signInTitle;
    NSString *_createAccountTitle;
    NSString *_forgotPasswordTitle;
    NSString *_cancelButtonTitle;
    NSString *_backButtonTitle;
    NSString *_sharedWebCredentialRelaunchButtonLocalizedTitle;
    NSString *_clientId;
    NSString *_applicationId;
    unsigned long long _sharedWebCredentialUserConsentBehaviour;
    long long _secondaryAccountRegistrationType;
    long long _accountStatusPolicy;
    NSMutableSet *_superBackUrlPaths;
    long long _navigationBarStyle;
    unsigned long long _allowedOrientations;
    NSFileHandle *_logFileHandle;
    AIMetricsMAPVersionCollector *_mVersionCollector;
}

+ (id)mVersionCollector;
+ (id)osVersion;
+ (id)osName;
+ (long long)deviceIdiom;
+ (id)deviceModel;
+ (id)amazonSoftwareVersion;
+ (id)amazonSerialNumber;
+ (id)getApplicationDeviceTypeWithError:(id *)arg1;
+ (id)amazonDeviceType;
+ (id)libraryVersion;
+ (id)libraryName;
+ (void)setNavigationBarStyle:(long long)arg1;
+ (void)setDisablePageReloadWhenViewWillAppear:(_Bool)arg1;
+ (void)setIsWKWebviewEnabledForAlliOSVersions:(_Bool)arg1;
+ (void)setDisableCookieWriting:(_Bool)arg1;
+ (void)setShouldHandleCreateAccount:(_Bool)arg1;
+ (void)SetSecondaryAccountRegistrationType:(long long)arg1;
+ (void)setPandaDomainForMarketplaceId:(id)arg1;
+ (void)setPandaRequestDomain:(id)arg1;
+ (void)setCustomizedDomain:(id)arg1;
+ (void)addUrlsToSuperBackUrlPaths:(id)arg1;
+ (void)setEnableAutoFillUsername:(_Bool)arg1;
+ (void)setEnableUserRecognition:(_Bool)arg1;
+ (void)SetSharedWebCredentialUserConsentBehaviour:(unsigned long long)arg1;
+ (void)setEnableSharedWebCredentialRelaunchButton:(_Bool)arg1;
+ (void)setEnableSharedWebCredential:(_Bool)arg1;
+ (void)setApplicationID:(id)arg1;
+ (void)setClientID:(id)arg1;
+ (void)setTitleTextAttributes:(id)arg1;
+ (void)setNavigationTitleView:(id)arg1;
+ (void)setNavigationTitle:(id)arg1;
+ (void)setNavigationTintColor:(id)arg1;
+ (void)setSharedUserDefault:(id)arg1;
+ (void)setAppKeychainAccessGroup:(id)arg1 extensionKeychainAccessGroups:(id)arg2;
+ (void)setWebViewColor:(id)arg1;
+ (void)setSpinnerColor:(id)arg1;
+ (void)setLogFileHandle:(id)arg1;
+ (void)setMAPOSLogLevel:(long long)arg1;
+ (void)setMAPLogLevel:(long long)arg1;
+ (void)setProactiveAccessTokenRefresh:(_Bool)arg1;
+ (void)setAppVersion:(id)arg1;
+ (void)setAppName:(id)arg1;
+ (void)setGlobalSignin:(id)arg1;
+ (void)setCreateAccountTitle:(id)arg1;
+ (void)setForgotPasswordTitle:(id)arg1;
+ (void)setSignInTitle:(id)arg1;
+ (void)setSharedWebCredentialRelaunchButtonLocalizedTitle:(id)arg1;
+ (void)setBackButtonTitle:(id)arg1;
+ (void)setCancelButtonTitle:(id)arg1;
+ (void)setDeviceNameTemplate:(id)arg1;
+ (void)setPandaDebugDomain:(id)arg1;
+ (void)setAuthPortalDebugDomain:(id)arg1;
+ (void)setDomain:(id)arg1;
+ (void)setAuthPortalTimeout:(double)arg1;
+ (void)setAuthPortalExtraParameters:(id)arg1;
+ (void)setAuthPortalAssocHandle:(id)arg1;
+ (void)setAuthPortalPageId:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(retain, nonatomic) AIMetricsMAPVersionCollector *mVersionCollector; // @synthesize mVersionCollector=_mVersionCollector;
@property(retain, nonatomic) NSFileHandle *logFileHandle; // @synthesize logFileHandle=_logFileHandle;
@property(nonatomic) unsigned long long allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
@property(nonatomic) long long navigationBarStyle; // @synthesize navigationBarStyle=_navigationBarStyle;
@property(nonatomic) _Bool disablePageReloadWhenViewWillAppear; // @synthesize disablePageReloadWhenViewWillAppear=_disablePageReloadWhenViewWillAppear;
@property(nonatomic) _Bool isWKWebviewEnabledForAlliOSVersions; // @synthesize isWKWebviewEnabledForAlliOSVersions=_isWKWebviewEnabledForAlliOSVersions;
@property(nonatomic) _Bool disableCookieWriting; // @synthesize disableCookieWriting=_disableCookieWriting;
@property(nonatomic) _Bool shouldHandleCreateAccount; // @synthesize shouldHandleCreateAccount=_shouldHandleCreateAccount;
@property(retain, nonatomic) NSMutableSet *superBackUrlPaths; // @synthesize superBackUrlPaths=_superBackUrlPaths;
@property(nonatomic) _Bool enableAutoFillUsername; // @synthesize enableAutoFillUsername=_enableAutoFillUsername;
@property(nonatomic) _Bool enableUserRecognition; // @synthesize enableUserRecognition=_enableUserRecognition;
@property(nonatomic) long long accountStatusPolicy; // @synthesize accountStatusPolicy=_accountStatusPolicy;
@property(nonatomic) long long secondaryAccountRegistrationType; // @synthesize secondaryAccountRegistrationType=_secondaryAccountRegistrationType;
@property(nonatomic) unsigned long long sharedWebCredentialUserConsentBehaviour; // @synthesize sharedWebCredentialUserConsentBehaviour=_sharedWebCredentialUserConsentBehaviour;
@property(nonatomic) _Bool enableSharedWebCredentialRelaunchButton; // @synthesize enableSharedWebCredentialRelaunchButton=_enableSharedWebCredentialRelaunchButton;
@property(nonatomic) _Bool enableSharedWebCredential; // @synthesize enableSharedWebCredential=_enableSharedWebCredential;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *sharedWebCredentialRelaunchButtonLocalizedTitle; // @synthesize sharedWebCredentialRelaunchButtonLocalizedTitle=_sharedWebCredentialRelaunchButtonLocalizedTitle;
@property(copy, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *forgotPasswordTitle; // @synthesize forgotPasswordTitle=_forgotPasswordTitle;
@property(copy, nonatomic) NSString *createAccountTitle; // @synthesize createAccountTitle=_createAccountTitle;
@property(copy, nonatomic) NSString *signInTitle; // @synthesize signInTitle=_signInTitle;
@property(copy, nonatomic) NSString *pandaDomainForMarketplaceId; // @synthesize pandaDomainForMarketplaceId=_pandaDomainForMarketplaceId;
@property(copy, nonatomic) NSString *pandaRequestDomain; // @synthesize pandaRequestDomain=_pandaRequestDomain;
@property(copy, nonatomic) NSString *customizedDomain; // @synthesize customizedDomain=_customizedDomain;
@property(copy, nonatomic) NSString *imageForBackButton; // @synthesize imageForBackButton=_imageForBackButton;
@property(copy, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(retain, nonatomic) UIView *navigationTitleView; // @synthesize navigationTitleView=_navigationTitleView;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(retain, nonatomic) UIColor *navigationTintColor; // @synthesize navigationTintColor=_navigationTintColor;
@property(copy, nonatomic) NSString *sharedUserDefault; // @synthesize sharedUserDefault=_sharedUserDefault;
@property(copy, nonatomic) NSArray *extensionKeychainAccessGroups; // @synthesize extensionKeychainAccessGroups=_extensionKeychainAccessGroups;
@property(copy, nonatomic) NSString *appKeychainAccessGroup; // @synthesize appKeychainAccessGroup=_appKeychainAccessGroup;
@property(retain, nonatomic) UIColor *webViewColor; // @synthesize webViewColor=_webViewColor;
@property(retain, nonatomic) UIColor *spinnerColor; // @synthesize spinnerColor=_spinnerColor;
@property(nonatomic) long long osLogLevel; // @synthesize osLogLevel=_osLogLevel;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) _Bool proactiveAccessTokenRefresh; // @synthesize proactiveAccessTokenRefresh=_proactiveAccessTokenRefresh;
@property(copy, nonatomic) NSNumber *globalSignin; // @synthesize globalSignin=_globalSignin;
@property(copy, nonatomic) NSString *deviceNameTemplate; // @synthesize deviceNameTemplate=_deviceNameTemplate;
@property(copy, nonatomic) NSString *pandaDebugDomain; // @synthesize pandaDebugDomain=_pandaDebugDomain;
@property(copy, nonatomic) NSString *authPortalDebugDomain; // @synthesize authPortalDebugDomain=_authPortalDebugDomain;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) double authPortalTimeout; // @synthesize authPortalTimeout=_authPortalTimeout;
@property(copy, nonatomic) NSDictionary *authPortalExtraParameters; // @synthesize authPortalExtraParameters=_authPortalExtraParameters;
@property(copy, nonatomic) NSString *authPortalLanguageCode; // @synthesize authPortalLanguageCode=_authPortalLanguageCode;
@property(copy, nonatomic) NSString *authPortalAssocHandle; // @synthesize authPortalAssocHandle=_authPortalAssocHandle;
@property(copy, nonatomic) NSString *authPortalPageId; // @synthesize authPortalPageId=_authPortalPageId;
@property(retain, nonatomic) id <AIMAPMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property(retain, nonatomic) id <AIAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)init;

@end

