//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangException.h"

#import "JavaLangIterable-Protocol.h"

@class NSString;

@interface JavaSqlSQLException : JavaLangException <JavaLangIterable>
{
    NSString *SQLState_;
    int vendorCode_;
    unsigned long long next_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)__javaClone:(id)arg1;
- (id)spliterator;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)iterator;
- (void)setNextExceptionWithJavaSqlSQLException:(id)arg1;
- (id)getNextException;
- (int)getErrorCode;
- (id)getSQLState;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withJavaLangThrowable:(id)arg4;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withJavaLangThrowable:(id)arg3;
- (id)initWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
- (id)initWithJavaLangThrowable:(id)arg1;
- (id)init;
- (id)initWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
