//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class IOSClass, JavaIoInputStream, JavaIoOutputStream, JavaIoReader, JavaIoWriter, NSString;
@protocol JavaxXmlTransformResult, JavaxXmlTransformSource;

@protocol JavaSqlSQLXML <JavaObject>
- (id <JavaxXmlTransformResult>)setResultWithIOSClass:(IOSClass *)arg1;
- (id <JavaxXmlTransformSource>)getSourceWithIOSClass:(IOSClass *)arg1;
- (void)setStringWithNSString:(NSString *)arg1;
- (NSString *)getString;
- (JavaIoWriter *)setCharacterStream;
- (JavaIoReader *)getCharacterStream;
- (JavaIoOutputStream *)setBinaryStream;
- (JavaIoInputStream *)getBinaryStream;
- (void)free;
@end

