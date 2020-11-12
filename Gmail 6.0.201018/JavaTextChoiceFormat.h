//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaTextNumberFormat.h"

@class IOSDoubleArray, IOSObjectArray;

@interface JavaTextChoiceFormat : JavaTextNumberFormat
{
    IOSDoubleArray *choiceLimits_;
    IOSObjectArray *choiceFormats_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)doubleArraySizeWithDoubleArray:(id)arg1;
+ (double)nextDoubleWithDouble:(double)arg1 withBoolean:(_Bool)arg2;
+ (double)previousDoubleWithDouble:(double)arg1;
+ (double)nextDoubleWithDouble:(double)arg1;
- (void)dealloc;
- (id)doubleArraySizeWithNSStringArray:(id)arg1;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)java_clone;
- (id)parseWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2;
- (id)formatWithDouble:(double)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3;
- (id)formatWithLong:(long long)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3;
- (id)getFormats;
- (id)getLimits;
- (void)setChoicesWithDoubleArray:(id)arg1 withNSStringArray:(id)arg2;
- (id)initWithDoubleArray:(id)arg1 withNSStringArray:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)toPattern;
- (void)applyPatternWithNSString:(id)arg1;

@end
