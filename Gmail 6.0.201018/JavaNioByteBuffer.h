//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNioBuffer.h"

#import "JavaLangComparable-Protocol.h"

@class IOSByteArray, NSString;

@interface JavaNioByteBuffer : JavaNioBuffer <JavaLangComparable>
{
    IOSByteArray *hb_;
    int offset_;
    _Bool isReadOnly_;
    _Bool bigEndian_;
    _Bool nativeByteOrder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)compareWithByte:(BOOL)arg1 withByte:(BOOL)arg2;
+ (_Bool)equalsWithByte:(BOOL)arg1 withByte:(BOOL)arg2;
+ (id)wrapWithByteArray:(id)arg1;
+ (id)wrapWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (id)allocateWithInt:(int)arg1;
+ (id)allocateDirectWithInt:(int)arg1;
- (void)dealloc;
- (void)setAccessibleWithBoolean:(_Bool)arg1;
- (_Bool)isAccessible;
- (id)asDoubleBuffer;
- (void)putUncheckedWithInt:(int)arg1 withDoubleArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)putDoubleUncheckedWithInt:(int)arg1 withDouble:(double)arg2;
- (id)putDoubleWithInt:(int)arg1 withDouble:(double)arg2;
- (void)getUncheckedWithInt:(int)arg1 withDoubleArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (double)getDoubleUncheckedWithInt:(int)arg1;
- (double)getDoubleWithInt:(int)arg1;
- (id)putDoubleWithDouble:(double)arg1;
- (double)getDouble;
- (id)asFloatBuffer;
- (void)putUncheckedWithInt:(int)arg1 withFloatArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)putFloatUncheckedWithInt:(int)arg1 withFloat:(float)arg2;
- (id)putFloatWithInt:(int)arg1 withFloat:(float)arg2;
- (void)getUncheckedWithInt:(int)arg1 withFloatArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (float)getFloatUncheckedWithInt:(int)arg1;
- (float)getFloatWithInt:(int)arg1;
- (id)putFloatWithFloat:(float)arg1;
- (float)getFloat;
- (id)asLongBuffer;
- (void)putUncheckedWithInt:(int)arg1 withLongArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)putLongUncheckedWithInt:(int)arg1 withLong:(long long)arg2;
- (id)putLongWithInt:(int)arg1 withLong:(long long)arg2;
- (void)getUncheckedWithInt:(int)arg1 withLongArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (long long)getLongUncheckedWithInt:(int)arg1;
- (long long)getLongWithInt:(int)arg1;
- (id)putLongWithLong:(long long)arg1;
- (long long)getLong;
- (id)asIntBuffer;
- (void)putUncheckedWithInt:(int)arg1 withIntArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)putIntUncheckedWithInt:(int)arg1 withInt:(int)arg2;
- (id)putIntWithInt:(int)arg1 withInt:(int)arg2;
- (void)getUncheckedWithInt:(int)arg1 withIntArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (int)getIntUncheckedWithInt:(int)arg1;
- (int)getIntWithInt:(int)arg1;
- (id)putIntWithInt:(int)arg1;
- (int)getInt;
- (id)asShortBuffer;
- (void)putUncheckedWithInt:(int)arg1 withShortArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)putShortUncheckedWithInt:(int)arg1 withShort:(short)arg2;
- (id)putShortWithInt:(int)arg1 withShort:(short)arg2;
- (void)getUncheckedWithInt:(int)arg1 withShortArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (short)getShortUncheckedWithInt:(int)arg1;
- (short)getShortWithInt:(int)arg1;
- (id)putShortWithShort:(short)arg1;
- (short)getShort;
- (id)asCharBuffer;
- (void)putUncheckedWithInt:(int)arg1 withCharArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)putCharUncheckedWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (id)putCharWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (void)getUncheckedWithInt:(int)arg1 withCharArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (unsigned short)getCharUncheckedWithInt:(int)arg1;
- (unsigned short)getCharWithInt:(int)arg1;
- (id)putCharWithChar:(unsigned short)arg1;
- (unsigned short)getChar;
- (void)_putWithInt:(int)arg1 withByte:(BOOL)arg2;
- (BOOL)_getWithInt:(int)arg1;
- (id)orderWithJavaNioByteOrder:(id)arg1;
- (id)order;
- (int)compareToWithId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isDirect;
- (id)compact;
- (id)rewind;
- (id)flip;
- (id)clear;
- (id)reset;
- (id)mark;
- (id)limitWithInt:(int)arg1;
- (id)positionWithInt:(int)arg1;
- (int)arrayOffset;
- (id)array;
- (_Bool)hasArray;
- (id)putWithByteArray:(id)arg1;
- (id)putWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithJavaNioByteBuffer:(id)arg1;
- (id)getWithByteArray:(id)arg1;
- (id)getWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withByte:(BOOL)arg2;
- (BOOL)getWithInt:(int)arg1;
- (id)putWithByte:(BOOL)arg1;
- (BOOL)get;
- (id)asReadOnlyBuffer;
- (id)duplicate;
- (id)slice;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withByteArray:(id)arg5 withInt:(int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
