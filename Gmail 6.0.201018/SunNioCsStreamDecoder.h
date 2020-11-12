//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoReader.h"

@class JavaIoInputStream, JavaNioByteBuffer, JavaNioCharsetCharset, JavaNioCharsetCharsetDecoder;
@protocol JavaNioChannelsReadableByteChannel;

@interface SunNioCsStreamDecoder : JavaIoReader
{
    // Error parsing type: AB, name: isOpen_
    _Bool haveLeftoverChar_;
    unsigned short leftoverChar_;
    _Bool needsFlush_;
    JavaNioCharsetCharset *cs_;
    JavaNioCharsetCharsetDecoder *decoder_;
    JavaNioByteBuffer *bb_;
    JavaIoInputStream *in_;
    id <JavaNioChannelsReadableByteChannel> ch_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (_Bool)isFileChannelWithJavaNioChannelsReadableByteChannel:(id)arg1;
+ (int)readFromChannelWithJavaNioChannelsReadableByteChannel:(id)arg1 withJavaNioByteBuffer:(id)arg2 withBoolean:(_Bool)arg3;
+ (id)forDecoderWithJavaNioChannelsReadableByteChannel:(id)arg1 withJavaNioCharsetCharsetDecoder:(id)arg2 withInt:(int)arg3;
+ (id)forInputStreamReaderWithJavaIoInputStream:(id)arg1 withId:(id)arg2 withJavaNioCharsetCharsetDecoder:(id)arg3;
+ (id)forInputStreamReaderWithJavaIoInputStream:(id)arg1 withId:(id)arg2 withJavaNioCharsetCharset:(id)arg3;
+ (id)forInputStreamReaderWithJavaIoInputStream:(id)arg1 withId:(id)arg2 withNSString:(id)arg3;
- (void)dealloc;
- (void)implClose;
- (_Bool)implReady;
- (_Bool)inReady;
- (id)encodingName;
- (int)implReadWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readBytes;
- (id)initWithJavaNioChannelsReadableByteChannel:(id)arg1 withJavaNioCharsetCharsetDecoder:(id)arg2 withInt:(int)arg3;
- (id)initWithJavaIoInputStream:(id)arg1 withId:(id)arg2 withJavaNioCharsetCharsetDecoder:(id)arg3;
- (id)initWithJavaIoInputStream:(id)arg1 withId:(id)arg2 withJavaNioCharsetCharset:(id)arg3;
- (_Bool)isOpen;
- (void)close;
- (_Bool)ready;
- (int)readWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read0;
- (int)read;
- (id)getEncoding;
- (void)ensureOpen;

@end
