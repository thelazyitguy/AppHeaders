//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoInputStream.h"

#import "JavaIoDataInput-Protocol.h"

@class IOSByteArray, IOSCharArray, JavaIoDataInputStream, JavaIoObjectInputStream, JavaIoObjectInputStream_PeekInputStream, NSString;

@interface JavaIoObjectInputStream_BlockDataInputStream : JavaIoInputStream <JavaIoDataInput>
{
    JavaIoObjectInputStream *this$0_;
    IOSByteArray *buf_;
    IOSByteArray *hbuf_;
    IOSCharArray *cbuf_;
    _Bool blkmode_;
    int pos_;
    int end_;
    int unread_;
    JavaIoObjectInputStream_PeekInputStream *in_;
    JavaIoDataInputStream *din_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void).cxx_destruct;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (long long)getBytesRead;
- (int)readUTFCharWithJavaLangStringBuilder:(id)arg1 withLong:(long long)arg2;
- (long long)readUTFSpanWithJavaLangStringBuilder:(id)arg1 withLong:(long long)arg2;
- (id)readUTFBodyWithLong:(long long)arg1;
- (id)readLongUTF;
- (void)readDoublesWithDoubleArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readLongsWithLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readFloatsWithFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readIntsWithIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readShortsWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readCharsWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readBooleansWithBooleanArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)readLine;
- (id)readUTF;
- (double)readDouble;
- (long long)readLong;
- (float)readFloat;
- (int)readInt;
- (int)readUnsignedShort;
- (short)readShort;
- (unsigned short)readChar;
- (int)readUnsignedByte;
- (BOOL)readByte;
- (_Bool)readBoolean;
- (int)skipBytesWithInt:(int)arg1;
- (void)readFullyWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (void)readFullyWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readFullyWithByteArray:(id)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (void)close;
- (int)available;
- (long long)skipWithLong:(long long)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (BOOL)peekByte;
- (int)peek;
- (int)currentBlockRemaining;
- (void)refill;
- (int)readBlockHeaderWithBoolean:(_Bool)arg1;
- (void)skipBlockData;
- (_Bool)getBlockDataMode;
- (_Bool)setBlockDataModeWithBoolean:(_Bool)arg1;
- (id)initWithJavaIoObjectInputStream:(id)arg1 withJavaIoInputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
