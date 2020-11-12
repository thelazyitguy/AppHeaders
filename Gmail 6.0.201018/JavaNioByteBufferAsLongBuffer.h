//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNioLongBuffer.h"

@class JavaNioByteBuffer, JavaNioByteOrder;

@interface JavaNioByteBufferAsLongBuffer : JavaNioLongBuffer
{
    JavaNioByteBuffer *bb_;
    int offset_ByteBufferAsLongBuffer_;
    JavaNioByteOrder *order_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)order;
- (_Bool)isReadOnly;
- (_Bool)isDirect;
- (id)compact;
- (id)putWithLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withLong:(long long)arg2;
- (id)putWithLong:(long long)arg1;
- (id)getWithLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (long long)getWithInt:(int)arg1;
- (long long)get;
- (int)ixWithInt:(int)arg1;
- (id)asReadOnlyBuffer;
- (id)duplicate;
- (id)slice;
- (id)initPackagePrivateWithJavaNioByteBuffer:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withJavaNioByteOrder:(id)arg7;

@end
