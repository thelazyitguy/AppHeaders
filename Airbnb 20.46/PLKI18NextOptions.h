//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface PLKI18NextOptions : NSObject
{
    _Bool _lowercaseLang;
    _Bool _fallbackToDefaultNamespace;
    _Bool _fallbackOnNull;
    _Bool _returnObjectTrees;
    _Bool _loadFromLanguageBundles;
    _Bool _loadFromLocalCache;
    _Bool _synchronousLocalLoad;
    _Bool _updateLocalCache;
    _Bool _dynamicLoad;
    int _langLoadType;
    NSString *_lang;
    NSString *_fallbackLang;
    NSArray *_namespaces;
    NSString *_defaultNamespace;
    NSArray *_fallbackNamespaces;
    NSDictionary *_resourcesStore;
    NSString *_namespaceSeparator;
    NSString *_keySeparator;
    NSString *_interpolationPrefix;
    NSString *_interpolationSuffix;
    NSString *_reusePrefix;
    NSString *_reuseSuffix;
    NSString *_pluralSuffix;
    NSString *_localCachePath;
    NSString *_filenameInLanguageBundles;
    NSURL *_resourcesBaseURL;
    NSString *_resourcesGetPathTemplate;
}

+ (id)optionsFromDict:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool dynamicLoad; // @synthesize dynamicLoad=_dynamicLoad;
@property(copy, nonatomic) NSString *resourcesGetPathTemplate; // @synthesize resourcesGetPathTemplate=_resourcesGetPathTemplate;
@property(retain, nonatomic) NSURL *resourcesBaseURL; // @synthesize resourcesBaseURL=_resourcesBaseURL;
@property(copy, nonatomic) NSString *filenameInLanguageBundles; // @synthesize filenameInLanguageBundles=_filenameInLanguageBundles;
@property(copy, nonatomic) NSString *localCachePath; // @synthesize localCachePath=_localCachePath;
@property(copy, nonatomic) NSString *pluralSuffix; // @synthesize pluralSuffix=_pluralSuffix;
@property(copy, nonatomic) NSString *reuseSuffix; // @synthesize reuseSuffix=_reuseSuffix;
@property(copy, nonatomic) NSString *reusePrefix; // @synthesize reusePrefix=_reusePrefix;
@property(copy, nonatomic) NSString *interpolationSuffix; // @synthesize interpolationSuffix=_interpolationSuffix;
@property(copy, nonatomic) NSString *interpolationPrefix; // @synthesize interpolationPrefix=_interpolationPrefix;
@property(copy, nonatomic) NSString *keySeparator; // @synthesize keySeparator=_keySeparator;
@property(copy, nonatomic) NSString *namespaceSeparator; // @synthesize namespaceSeparator=_namespaceSeparator;
@property(nonatomic) _Bool updateLocalCache; // @synthesize updateLocalCache=_updateLocalCache;
@property(nonatomic) _Bool synchronousLocalLoad; // @synthesize synchronousLocalLoad=_synchronousLocalLoad;
@property(nonatomic) _Bool loadFromLocalCache; // @synthesize loadFromLocalCache=_loadFromLocalCache;
@property(nonatomic) _Bool loadFromLanguageBundles; // @synthesize loadFromLanguageBundles=_loadFromLanguageBundles;
@property(copy, nonatomic) NSDictionary *resourcesStore; // @synthesize resourcesStore=_resourcesStore;
@property(nonatomic) _Bool returnObjectTrees; // @synthesize returnObjectTrees=_returnObjectTrees;
@property(nonatomic) _Bool fallbackOnNull; // @synthesize fallbackOnNull=_fallbackOnNull;
@property(copy, nonatomic) NSArray *fallbackNamespaces; // @synthesize fallbackNamespaces=_fallbackNamespaces;
@property(nonatomic) _Bool fallbackToDefaultNamespace; // @synthesize fallbackToDefaultNamespace=_fallbackToDefaultNamespace;
@property(copy, nonatomic) NSString *defaultNamespace; // @synthesize defaultNamespace=_defaultNamespace;
@property(copy, nonatomic) NSArray *namespaces; // @synthesize namespaces=_namespaces;
@property(copy, nonatomic) NSString *fallbackLang; // @synthesize fallbackLang=_fallbackLang;
@property(nonatomic) int langLoadType; // @synthesize langLoadType=_langLoadType;
@property(nonatomic) _Bool lowercaseLang; // @synthesize lowercaseLang=_lowercaseLang;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
- (id)asDictionary;
- (void)setFallbackNamespace:(id)arg1;
- (void)setNamespace:(id)arg1;
- (id)init;

@end
