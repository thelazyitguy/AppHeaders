//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray, IOSCharArray, JavaIoInputStream, JavaIoReader;

@interface JavaUtilProperties_LineReader : NSObject
{
    IOSByteArray *inByteBuf_;
    IOSCharArray *inCharBuf_;
    IOSCharArray *lineBuf_;
    int inLimit_;
    int inOff_;
    JavaIoInputStream *inStream_;
    JavaIoReader *reader_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)readLine;
- (id)initWithJavaIoReader:(id)arg1;
- (id)initWithJavaIoInputStream:(id)arg1;

@end
