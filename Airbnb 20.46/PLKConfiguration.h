//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLocale, NSString, NSURL;

@interface PLKConfiguration : NSObject
{
    _Bool _selectAccount;
    _Bool _longtailAuth;
    NSString *_key;
    long long _env;
    long long _product;
    NSString *_clientName;
    NSURL *_webhook;
    NSString *_userLegalName;
    NSString *_userEmailAddress;
    NSString *_userPhoneNumber;
    NSArray *_countryCodes;
    NSDictionary *_accountSubtypes;
    NSURL *_oauthRedirectUri;
    NSString *_oauthNonce;
    NSString *_linkCustomizationName;
    NSString *_language;
    long long _apiVersion;
    NSString *_linkSessionId;
    NSString *_linkOpenId;
    NSDictionary *_defaultCustomizations;
    NSDictionary *_serverCustomizations;
    NSDictionary *_clientCustomizations;
    NSDictionary *_clientCustomizable;
}

+ (id)configurationWithDictionary:(id)arg1;
+ (id)sharedConfiguration;
+ (id)sharedRegistry;
- (void).cxx_destruct;
@property(retain) NSDictionary *clientCustomizable; // @synthesize clientCustomizable=_clientCustomizable;
@property(retain) NSDictionary *clientCustomizations; // @synthesize clientCustomizations=_clientCustomizations;
@property(retain) NSDictionary *serverCustomizations; // @synthesize serverCustomizations=_serverCustomizations;
@property(retain) NSDictionary *defaultCustomizations; // @synthesize defaultCustomizations=_defaultCustomizations;
@property(retain) NSString *linkOpenId; // @synthesize linkOpenId=_linkOpenId;
@property(retain) NSString *linkSessionId; // @synthesize linkSessionId=_linkSessionId;
@property(readonly) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly) _Bool longtailAuth; // @synthesize longtailAuth=_longtailAuth;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *linkCustomizationName; // @synthesize linkCustomizationName=_linkCustomizationName;
@property(copy, nonatomic) NSString *oauthNonce; // @synthesize oauthNonce=_oauthNonce;
@property(copy, nonatomic) NSURL *oauthRedirectUri; // @synthesize oauthRedirectUri=_oauthRedirectUri;
@property(copy, nonatomic) NSDictionary *accountSubtypes; // @synthesize accountSubtypes=_accountSubtypes;
@property(copy, nonatomic) NSArray *countryCodes; // @synthesize countryCodes=_countryCodes;
@property(copy, nonatomic) NSString *userPhoneNumber; // @synthesize userPhoneNumber=_userPhoneNumber;
@property(copy, nonatomic) NSString *userEmailAddress; // @synthesize userEmailAddress=_userEmailAddress;
@property(copy, nonatomic) NSString *userLegalName; // @synthesize userLegalName=_userLegalName;
@property(copy, nonatomic) NSURL *webhook; // @synthesize webhook=_webhook;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property long long product; // @synthesize product=_product;
@property(readonly) long long env; // @synthesize env=_env;
@property(readonly) NSString *key; // @synthesize key=_key;
- (id)description;
@property(readonly) _Bool selectAccount; // @synthesize selectAccount=_selectAccount;
- (void)customizeWithDictionary:(id)arg1;
- (id)initWithKey:(id)arg1 env:(long long)arg2 product:(long long)arg3 selectAccount:(_Bool)arg4 longtailAuth:(_Bool)arg5 apiVersion:(long long)arg6;
- (id)initWithKey:(id)arg1 env:(long long)arg2 product:(long long)arg3;
- (id)valueForExperimentKey:(id)arg1;
- (id)keyForExperiment:(unsigned long long)arg1;
- (_Bool)isExperimentEnabled:(unsigned long long)arg1;
- (id)customizationData;
@property(readonly) id sharedRegistryIndex;
- (long long)enabledProduct;
- (_Bool)product:(long long)arg1 enabledForKey:(id)arg2;
- (_Bool)longtailAuthEnabledForKey:(id)arg1;
- (id)customizationForElement:(id)arg1 inPane:(id)arg2 fallback:(id)arg3;
- (_Bool)shouldCustomizeElement:(id)arg1;
- (_Bool)requiresLongtailAuthFlowFor:(id)arg1;
- (_Bool)longtailAuthEnabled;
- (_Bool)displayEUConsent;
- (_Bool)automatedMicrodepositsEnabled;
- (_Bool)manualMicrodepositsEnabled;
- (_Bool)hasFeature:(unsigned long long)arg1;
- (_Bool)hasProduct:(long long)arg1;
- (_Bool)hasUserData;
@property(readonly) _Bool selectAccountMultiple;
@property(readonly) NSLocale *locale;
- (id)customizableData;

// Remaining properties
@property(readonly) long long clientInfoEnv; // @dynamic clientInfoEnv;

@end
