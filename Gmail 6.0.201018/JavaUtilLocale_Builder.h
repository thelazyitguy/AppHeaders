//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SunUtilLocaleInternalLocaleBuilder;

@interface JavaUtilLocale_Builder : NSObject
{
    SunUtilLocaleInternalLocaleBuilder *localeBuilder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)build;
- (id)clearExtensions;
- (id)clear;
- (id)removeUnicodeLocaleAttributeWithNSString:(id)arg1;
- (id)addUnicodeLocaleAttributeWithNSString:(id)arg1;
- (id)setUnicodeLocaleKeywordWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setExtensionWithChar:(unsigned short)arg1 withNSString:(id)arg2;
- (id)setVariantWithNSString:(id)arg1;
- (id)setRegionWithNSString:(id)arg1;
- (id)setScriptWithNSString:(id)arg1;
- (id)setLanguageWithNSString:(id)arg1;
- (id)setLanguageTagWithNSString:(id)arg1;
- (id)setLocaleWithJavaUtilLocale:(id)arg1;
- (id)init;

@end
