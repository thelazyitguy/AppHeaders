//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoCloseable-Protocol.h"
#import "JavaIoFlushable-Protocol.h"
#import "JavaLangAppendable-Protocol.h"

@class IOSCharArray, NSString;

@interface JavaIoWriter : NSObject <JavaLangAppendable, JavaIoCloseable, JavaIoFlushable>
{
    id lock_;
    IOSCharArray *writeBuffer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)close;
- (void)flush;
- (id)appendWithChar:(unsigned short)arg1;
- (id)appendWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)appendWithJavaLangCharSequence:(id)arg1;
- (void)writeWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithNSString:(id)arg1;
- (void)writeWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithCharArray:(id)arg1;
- (void)writeWithInt:(int)arg1;
- (id)initWithId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
