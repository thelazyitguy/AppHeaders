//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaxXmlTransformResult-Protocol.h"

@class JavaIoOutputStream, JavaIoWriter, NSString;

@interface JavaxXmlTransformStreamStreamResult : NSObject <JavaxXmlTransformResult>
{
    NSString *systemId_;
    JavaIoOutputStream *outputStream_;
    JavaIoWriter *writer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getSystemId;
- (void)setSystemIdWithJavaIoFile:(id)arg1;
- (void)setSystemIdWithNSString:(id)arg1;
- (id)getWriter;
- (void)setWriterWithJavaIoWriter:(id)arg1;
- (id)getOutputStream;
- (void)setOutputStreamWithJavaIoOutputStream:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaIoWriter:(id)arg1;
- (id)initWithJavaIoOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
