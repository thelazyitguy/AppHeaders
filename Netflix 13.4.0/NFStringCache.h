//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSURL;

@interface NFStringCache : NSObject
{
    _Bool _isDisabled;
    NSDictionary *_availableLanguages;
    NSDictionary *_cachedLanguages;
    NSBundle *_mainBundle;
    NSURL *_cacheDirectoryURL;
    unsigned long long _bundledStringsReferenceCount;
}

- (void).cxx_destruct;
@property unsigned long long bundledStringsReferenceCount; // @synthesize bundledStringsReferenceCount=_bundledStringsReferenceCount;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
- (unsigned long long)keyCountForBundledStringsWithLocale:(id)arg1;
- (void)clearCache;
- (id)bundleForLanguage:(id)arg1;
@property(readonly, nonatomic) NSDictionary *cachedLanguages; // @synthesize cachedLanguages=_cachedLanguages;
@property(readonly, nonatomic) NSDictionary *availableLanguages; // @synthesize availableLanguages=_availableLanguages;
- (_Bool)writeStrings:(id)arg1 withStringsdict:(id)arg2 forLanguage:(id)arg3;
@property(retain, nonatomic) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL=_cacheDirectoryURL;
@property(retain, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
- (void)clearMemory;
- (id)mainBundleLocales;
- (_Bool)stringsFileExistsForBundle:(id)arg1;
- (id)init;

@end
