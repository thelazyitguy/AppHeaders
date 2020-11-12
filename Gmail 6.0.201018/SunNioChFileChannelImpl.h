//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNioChannelsFileChannel.h"

@class DalvikSystemCloseGuard, JavaIoFileDescriptor, NSString, SunNioChFileDispatcher, SunNioChNativeThreadSet;

@interface SunNioChFileChannelImpl : JavaNioChannelsFileChannel
{
    JavaIoFileDescriptor *fd_;
    SunNioChFileDispatcher *nd_;
    _Bool writable_;
    _Bool readable_;
    _Bool append_;
    id parent_;
    NSString *path_;
    SunNioChNativeThreadSet *threads_;
    id positionLock_;
    DalvikSystemCloseGuard *guard_;
    unsigned long long fileLockTable_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (long long)initIDs;
+ (int)unmap0WithLong:(long long)arg1 withLong:(long long)arg2;
+ (_Bool)isSharedFileLockTable;
+ (void)unmapWithJavaNioMappedByteBuffer:(id)arg1;
+ (id)openWithJavaIoFileDescriptor:(id)arg1 withNSString:(id)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4 withBoolean:(_Bool)arg5 withId:(id)arg6;
+ (id)openWithJavaIoFileDescriptor:(id)arg1 withNSString:(id)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4 withId:(id)arg5;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (long long)position0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2;
- (long long)transferTo0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withJavaIoFileDescriptor:(id)arg4;
- (long long)map0WithInt:(int)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (void)release__WithSunNioChFileLockImpl:(id)arg1;
- (id)tryLockWithLong:(long long)arg1 withLong:(long long)arg2 withBoolean:(_Bool)arg3;
- (id)lockWithLong:(long long)arg1 withLong:(long long)arg2 withBoolean:(_Bool)arg3;
- (id)fileLockTable;
- (id)mapWithJavaNioChannelsFileChannel_MapMode:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (int)writeInternalWithJavaNioByteBuffer:(id)arg1 withLong:(long long)arg2;
- (int)writeWithJavaNioByteBuffer:(id)arg1 withLong:(long long)arg2;
- (int)readInternalWithJavaNioByteBuffer:(id)arg1 withLong:(long long)arg2;
- (int)readWithJavaNioByteBuffer:(id)arg1 withLong:(long long)arg2;
- (long long)transferFromWithJavaNioChannelsReadableByteChannel:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (long long)transferFromArbitraryChannelWithJavaNioChannelsReadableByteChannel:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (long long)transferFromFileChannelWithSunNioChFileChannelImpl:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (long long)transferToWithLong:(long long)arg1 withLong:(long long)arg2 withJavaNioChannelsWritableByteChannel:(id)arg3;
- (long long)transferToArbitraryChannelWithLong:(long long)arg1 withInt:(int)arg2 withJavaNioChannelsWritableByteChannel:(id)arg3;
- (long long)transferToTrustedChannelWithLong:(long long)arg1 withLong:(long long)arg2 withJavaNioChannelsWritableByteChannel:(id)arg3;
- (long long)transferToDirectlyWithLong:(long long)arg1 withInt:(int)arg2 withJavaNioChannelsWritableByteChannel:(id)arg3;
- (long long)transferToDirectlyInternalWithLong:(long long)arg1 withInt:(int)arg2 withJavaNioChannelsWritableByteChannel:(id)arg3 withJavaIoFileDescriptor:(id)arg4;
- (void)forceWithBoolean:(_Bool)arg1;
- (id)truncateWithLong:(long long)arg1;
- (long long)size;
- (id)positionWithLong:(long long)arg1;
- (long long)position;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)writeWithJavaNioByteBuffer:(id)arg1;
- (long long)readWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithJavaNioByteBuffer:(id)arg1;
- (void)java_finalize;
- (void)implCloseChannel;
- (void)ensureOpen;
- (id)initWithJavaIoFileDescriptor:(id)arg1 withNSString:(id)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4 withBoolean:(_Bool)arg5 withId:(id)arg6;

@end
