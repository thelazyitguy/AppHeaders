//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoObjectInputStream_GetField.h"

@class IOSByteArray, IOSIntArray, IOSObjectArray, JavaIoObjectInputStream, JavaIoObjectStreamClass;

@interface JavaIoObjectInputStream_GetFieldImpl : JavaIoObjectInputStream_GetField
{
    JavaIoObjectInputStream *this$0_;
    JavaIoObjectStreamClass *desc_;
    IOSByteArray *primVals_;
    IOSObjectArray *objVals_;
    IOSIntArray *objHandles_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getFieldOffsetWithNSString:(id)arg1 withIOSClass:(id)arg2;
- (void)readFields;
- (id)getWithNSString:(id)arg1 withId:(id)arg2;
- (double)getWithNSString:(id)arg1 withDouble:(double)arg2;
- (long long)getWithNSString:(id)arg1 withLong:(long long)arg2;
- (float)getWithNSString:(id)arg1 withFloat:(float)arg2;
- (int)getWithNSString:(id)arg1 withInt:(int)arg2;
- (short)getWithNSString:(id)arg1 withShort:(short)arg2;
- (unsigned short)getWithNSString:(id)arg1 withChar:(unsigned short)arg2;
- (BOOL)getWithNSString:(id)arg1 withByte:(BOOL)arg2;
- (_Bool)getWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (_Bool)defaultedWithNSString:(id)arg1;
- (id)getObjectStreamClass;
- (id)initWithJavaIoObjectInputStream:(id)arg1 withJavaIoObjectStreamClass:(id)arg2;

@end
