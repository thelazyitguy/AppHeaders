//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JavaLangSystem : NSObject
{
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)inheritedChannel;
+ (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withJavaLangThrowable:(id)arg3;
+ (void)logWWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
+ (void)logWWithNSString:(id)arg1;
+ (void)logIWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
+ (void)logIWithNSString:(id)arg1;
+ (void)logEWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
+ (void)logEWithNSString:(id)arg1;
+ (id)console;
+ (void)runFinalizersOnExitWithBoolean:(_Bool)arg1;
+ (void)runFinalization;
+ (void)gc;
+ (void)loadLibraryWithNSString:(id)arg1;
+ (void)load__WithNSString:(id)arg1;
+ (id)lineSeparator;
+ (id)getSecurityManager;
+ (id)getenv;
+ (id)getenvWithNSString:(id)arg1;
+ (id)clearPropertyWithNSString:(id)arg1;
+ (void)setPropertiesWithJavaUtilProperties:(id)arg1;
+ (id)setPropertyWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getPropertyWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getPropertyWithNSString:(id)arg1;
+ (id)getProperties;
+ (void)exitWithInt:(int)arg1;
+ (long long)nanoTime;
+ (void)arraycopyWithId:(id)arg1 withInt:(int)arg2 withId:(id)arg3 withInt:(int)arg4 withInt:(int)arg5;
+ (int)identityHashCodeWithId:(id)arg1;
+ (long long)currentTimeMillis;
+ (void)setErrWithJavaIoPrintStream:(id)arg1;
+ (void)setOutWithJavaIoPrintStream:(id)arg1;
+ (void)setInWithJavaIoInputStream:(id)arg1;
+ (void)setTimeInfoConsts;
- (id)init;

@end
