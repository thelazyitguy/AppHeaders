//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaLangClassLoader;

@interface JavaxXmlValidationSchemaFactoryFinder : NSObject
{
    JavaLangClassLoader *classLoader_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)whichWithNSString:(id)arg1 withJavaLangClassLoader:(id)arg2;
+ (id)whichWithIOSClass:(id)arg1;
+ (void)debugPrintlnWithNSString:(id)arg1;
- (void)dealloc;
- (id)loadFromServicesFileWithNSString:(id)arg1 withNSString:(id)arg2 withJavaIoInputStream:(id)arg3;
- (id)createServiceFileIterator;
- (id)createInstanceWithNSString:(id)arg1;
- (id)_newFactoryWithNSString:(id)arg1;
- (id)newFactoryWithNSString:(id)arg1;
- (void)debugDisplayClassLoader;
- (id)initPackagePrivateWithJavaLangClassLoader:(id)arg1;

@end

