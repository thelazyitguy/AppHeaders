//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class IOSCharArray, JavaLangStringBuffer, JavaMathRoundingMode;

@interface JavaTextDigitList : NSObject <NSCopying>
{
    int decimalAt_;
    int count_;
    IOSCharArray *digits_;
    IOSCharArray *data_;
    JavaMathRoundingMode *roundingMode_;
    _Bool isNegative_;
    JavaLangStringBuffer *tempBuffer_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)parseIntWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)getDataCharsWithInt:(int)arg1;
- (void)extendDigitsWithInt:(int)arg1;
- (id)getStringBuffer;
- (id)description;
- (_Bool)isLongMIN_VALUE;
- (id)java_clone;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setWithBoolean:(_Bool)arg1 withJavaMathBigInteger:(id)arg2 withInt:(int)arg3;
- (void)setWithBoolean:(_Bool)arg1 withJavaMathBigDecimal:(id)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (void)setWithBoolean:(_Bool)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (void)setWithBoolean:(_Bool)arg1 withLong:(long long)arg2;
- (_Bool)shouldRoundUpWithInt:(int)arg1;
- (void)roundWithInt:(int)arg1;
- (void)setWithBoolean:(_Bool)arg1 withNSString:(id)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (void)setWithBoolean:(_Bool)arg1 withDouble:(double)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (void)setWithBoolean:(_Bool)arg1 withDouble:(double)arg2 withInt:(int)arg3;
- (_Bool)fitsIntoLongWithBoolean:(_Bool)arg1 withBoolean:(_Bool)arg2;
- (id)getBigDecimal;
- (long long)getLong;
- (double)getDouble;
- (void)appendWithChar:(unsigned short)arg1;
- (void)clear;
- (void)setRoundingModeWithJavaMathRoundingMode:(id)arg1;
- (_Bool)isZero;
- (id)initPackagePrivate;

@end
