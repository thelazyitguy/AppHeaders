//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "OrgApacheJamesMime4jDomFieldParsedField-Protocol.h"

@class NSString;
@protocol JavaUtilMap;

@protocol OrgApacheJamesMime4jDomFieldContentTypeField <OrgApacheJamesMime4jDomFieldParsedField, JavaObject>
- (NSString *)getCharset;
- (NSString *)getBoundary;
- (_Bool)isMultipart;
- (_Bool)isMimeTypeWithNSString:(NSString *)arg1;
- (id <JavaUtilMap>)getParameters;
- (NSString *)getParameterWithNSString:(NSString *)arg1;
- (NSString *)getSubType;
- (NSString *)getMediaType;
- (NSString *)getMimeType;
@end
