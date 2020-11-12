//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangAbstractStringBuilder.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaLangCharSequence-Protocol.h"

@class NSString;

@interface JavaLangStringBuffer : JavaLangAbstractStringBuilder <JavaIoSerializable, JavaLangCharSequence>
{
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)reverse;
- (int)lastIndexOfWithNSString:(id)arg1 withInt:(int)arg2;
- (int)indexOfWithNSString:(id)arg1 withInt:(int)arg2;
- (int)indexOfWithNSString:(id)arg1;
- (id)insertWithInt:(int)arg1 withDouble:(double)arg2;
- (id)insertWithInt:(int)arg1 withFloat:(float)arg2;
- (id)insertWithInt:(int)arg1 withLong:(long long)arg2;
- (id)insertWithInt:(int)arg1 withInt:(int)arg2;
- (id)insertWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (id)insertWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (id)insertWithInt:(int)arg1 withJavaLangCharSequence:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)insertWithInt:(int)arg1 withJavaLangCharSequence:(id)arg2;
- (id)insertWithInt:(int)arg1 withCharArray:(id)arg2;
- (id)insertWithInt:(int)arg1 withNSString:(id)arg2;
- (id)insertWithInt:(int)arg1 withId:(id)arg2;
- (id)insertWithInt:(int)arg1 withCharArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)substringWithInt:(int)arg1 withInt:(int)arg2;
- (id)subSequenceFrom:(int)arg1 to:(int)arg2;
- (id)substringWithInt:(int)arg1;
- (id)replaceWithInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (id)deleteCharAtWithInt:(int)arg1;
- (id)delete__WithInt:(int)arg1 withInt:(int)arg2;
- (id)appendWithDouble:(double)arg1;
- (id)appendWithFloat:(float)arg1;
- (id)appendWithLong:(long long)arg1;
- (id)appendCodePointWithInt:(int)arg1;
- (id)appendWithInt:(int)arg1;
- (id)appendWithChar:(unsigned short)arg1;
- (id)appendWithBoolean:(_Bool)arg1;
- (id)appendWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)appendWithCharArray:(id)arg1;
- (id)appendWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)appendWithJavaLangCharSequence:(id)arg1;
- (id)appendWithJavaLangStringBuffer:(id)arg1;
- (id)appendWithNSString:(id)arg1;
- (id)appendWithId:(id)arg1;
- (void)setCharAtWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (void)getCharsWithInt:(int)arg1 withInt:(int)arg2 withCharArray:(id)arg3 withInt:(int)arg4;
- (int)offsetByCodePointsWithInt:(int)arg1 withInt:(int)arg2;
- (int)codePointCountWithInt:(int)arg1 withInt:(int)arg2;
- (int)codePointBeforeWithInt:(int)arg1;
- (int)codePointAtWithInt:(int)arg1;
- (unsigned short)charAtWithInt:(int)arg1;
- (void)setLengthWithInt:(int)arg1;
- (void)trimToSize;
- (void)ensureCapacityWithInt:(int)arg1;
- (int)capacity;
- (int)java_length;
- (id)initWithJavaLangCharSequence:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithInt:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
