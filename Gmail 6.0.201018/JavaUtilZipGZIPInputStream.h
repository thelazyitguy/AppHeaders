//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilZipInflaterInputStream.h"

@class IOSByteArray, JavaUtilZipCRC32;

@interface JavaUtilZipGZIPInputStream : JavaUtilZipInflaterInputStream
{
    JavaUtilZipCRC32 *crc_;
    _Bool eos_;
    _Bool closed_GZIPInputStream_;
    IOSByteArray *tmpbuf_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)skipBytesWithJavaIoInputStream:(id)arg1 withInt:(int)arg2;
- (int)readUByteWithJavaIoInputStream:(id)arg1;
- (int)readUShortWithJavaIoInputStream:(id)arg1;
- (long long)readUIntWithJavaIoInputStream:(id)arg1;
- (_Bool)readTrailer;
- (int)readHeaderWithJavaIoInputStream:(id)arg1;
- (void)close;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)initWithJavaIoInputStream:(id)arg1 withInt:(int)arg2;
- (void)ensureOpen;

@end

