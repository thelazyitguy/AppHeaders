//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaLangReflectField, SunMiscUnsafe;

@interface JavaSqlSQLException_NextExceptionUpdater : NSObject
{
    SunMiscUnsafe *unsafe_;
    JavaLangReflectField *nextExceptionField_;
    long long offset_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getNextExceptionField;
- (void)dealloc;
- (_Bool)compareAndSetWithJavaSqlSQLException:(id)arg1 withJavaSqlSQLException:(id)arg2 withJavaSqlSQLException:(id)arg3;
- (id)init;

@end
