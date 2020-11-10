//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface GRWApp : NSObject <NSCopying>
{
    _Bool _systemApp;
    _Bool _authUserEnabled;
    _Bool _googleOwnedApp;
    _Bool _isPromoted;
    _Bool _hasIcon;
    NSString *_name;
    NSString *_bundleIdentifier;
    long long _priority;
    NSString *_storeID;
    NSSet *_tags;
    double _appRating;
    long long _numberOfAppRatings;
    NSString *_openURLScheme;
    NSString *_appDescription;
    NSSet *_allSupportedSchemes;
    NSDictionary *_localizedNames;
    NSDictionary *_iconURLs;
    NSArray *_mappingAllVersions;
}

+ (id)URLStringWithHashedUserID:(id)arg1 appendedToURLString:(id)arg2;
+ (_Bool)canOpenMapping:(id)arg1;
+ (id)registeredSchemesForMapping:(id)arg1;
+ (id)replacementBundleIDFor:(id)arg1;
+ (id)synonymsForTag:(id)arg1;
+ (void)setIOSVersionOverride:(id)arg1;
+ (id)iOSVersionOverride;
+ (id)grw_tagForIntentType:(int)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *mappingAllVersions; // @synthesize mappingAllVersions=_mappingAllVersions;
@property(readonly, copy, nonatomic) NSDictionary *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(readonly, copy, nonatomic) NSDictionary *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(copy, nonatomic) NSSet *allSupportedSchemes; // @synthesize allSupportedSchemes=_allSupportedSchemes;
@property(copy, nonatomic) NSString *appDescription; // @synthesize appDescription=_appDescription;
@property(readonly, copy, nonatomic) NSString *openURLScheme; // @synthesize openURLScheme=_openURLScheme;
@property(nonatomic) _Bool hasIcon; // @synthesize hasIcon=_hasIcon;
@property(readonly, nonatomic) _Bool isPromoted; // @synthesize isPromoted=_isPromoted;
@property(readonly, nonatomic) long long numberOfAppRatings; // @synthesize numberOfAppRatings=_numberOfAppRatings;
@property(readonly, nonatomic) double appRating; // @synthesize appRating=_appRating;
@property(copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic, getter=isGoogleOwnedApp) _Bool googleOwnedApp; // @synthesize googleOwnedApp=_googleOwnedApp;
@property(readonly, nonatomic, getter=isAuthUserEnabled) _Bool authUserEnabled; // @synthesize authUserEnabled=_authUserEnabled;
@property(readonly, copy, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)appIsAllowedForOSVersion:(id)arg1;
- (id)tagUpperBoundIOSVersionString;
- (id)tagInclusiveLowerBoundIOSVersionString;
- (id)appURLforURL:(id)arg1 forMappings:(id)arg2 hashedUserID:(id)arg3;
- (id)parseQuery:(id)arg1;
- (id)applyPatternSubstitutions:(id)arg1 scheme:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 query:(id)arg6 parameters:(id)arg7;
- (id)applyPatternSubstitutions:(id)arg1 withURL:(id)arg2;
- (id)activeMappingObject;
- (_Bool)sourcePatternInURLMapping:(id)arg1 matchesURL:(id)arg2;
- (_Bool)shouldSecureURL:(id)arg1;
- (id)systemAppIcon;
- (id)iconURLWithDimension:(unsigned long long)arg1;
- (id)localizedNameForLanguageList:(id)arg1;
- (void)enumerateSchemesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)specifiesSchemeAsDestinationScheme:(id)arg1;
- (id)anyVersionURLForURL:(id)arg1;
- (id)activeVersionURLForURL:(id)arg1 hashedUserID:(id)arg2;
- (id)activeVersionURLForURL:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *registeredSchemes;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
@property(readonly, nonatomic) unsigned long long iconURLsCount;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToApp:(id)arg1;
- (id)description;
- (id)systemIconBundleIdentifier;
@property(readonly, copy, nonatomic) NSSet *tagsAndSynonyms;
@property(readonly, nonatomic) _Bool appIsAllowedForCurrentOSVersion;
- (id)initWithName:(id)arg1 localizedNames:(id)arg2 bundleIdentifier:(id)arg3 priority:(long long)arg4 systemApp:(_Bool)arg5 storeID:(id)arg6 authUserEnabled:(_Bool)arg7 googleOwnedApp:(_Bool)arg8 tags:(id)arg9 appDescription:(id)arg10 appRating:(double)arg11 numberOfAppRatings:(long long)arg12 isPromoted:(_Bool)arg13 openURLScheme:(id)arg14 hasIcon:(_Bool)arg15 iconURLs:(id)arg16 mappingAllVersions:(id)arg17;
- (id)init;
- (id)URLForURLComponentsWithLocationQueryItems:(id)arg1;
- (id)URLForLocationPairObjectTypeIntentDescriptor:(id)arg1 options:(id)arg2;
- (id)URLForLocationObjectTypeIntentDescriptor:(id)arg1 options:(id)arg2;
- (id)URLForStringObjectTypeIntentDescriptor:(id)arg1 options:(id)arg2;
- (id)URLForURLObjectTypeIntentDescriptor:(id)arg1 options:(id)arg2;
- (id)grw_rewrittenMappingURLfromGoogleMapsURL:(id)arg1;
@property(readonly, nonatomic) _Bool grw_isHostApp;
- (_Bool)grw_supportsIntentType:(int)arg1;
- (id)grw_URLForIntentDescriptor:(id)arg1 options:(id)arg2;
- (id)grw_URLForIntentDescriptor:(id)arg1;
- (id)grw_retargetURLWithoutMapsRewriting:(id)arg1;
@property(readonly, nonatomic) _Bool grw_isSystemMaps;
@property(readonly, nonatomic) _Bool grw_isHangouts;
@property(readonly, nonatomic) _Bool grw_isGSA;
@property(readonly, nonatomic) _Bool grw_isWaze;
@property(readonly, nonatomic) _Bool grw_isGoogleMaps;
@property(readonly, nonatomic) _Bool grw_isAppleMail;
@property(readonly, nonatomic) _Bool grw_isGmail;
@property(readonly, nonatomic) _Bool grw_isChrome;
@property(readonly, nonatomic) _Bool grw_isSafariViewController;
@property(readonly, nonatomic) _Bool grw_isSafari;
@property(readonly, nonatomic) _Bool grw_isBrowser;
- (id)initWithDictionary:(id)arg1;

@end

