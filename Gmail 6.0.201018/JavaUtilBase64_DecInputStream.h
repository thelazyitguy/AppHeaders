//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoInputStream.h"

@class IOSByteArray, IOSIntArray;

@interface JavaUtilBase64_DecInputStream : JavaIoInputStream
{
    JavaIoInputStream *is_;
    _Bool isMIME_;
    IOSIntArray *base64_;
    int bits_;
    int nextin_;
    int nextout_;
    _Bool eof_;
    _Bool closed_;
    IOSByteArray *sbBuf_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)close;
- (int)available;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (id)initWithJavaIoInputStream:(id)arg1 withIntArray:(id)arg2 withBoolean:(_Bool)arg3;

@end
