//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatHttpBytestreamSerializer-Protocol.h"

@class ComGoogleAppsXplatHttpProtoBytestreamSerializer_ResponseFormat, NSString;
@protocol ComGoogleProtobufMessageLite;

@interface ComGoogleAppsXplatHttpProtoBytestreamSerializer : NSObject <ComGoogleAppsXplatHttpBytestreamSerializer>
{
    id <ComGoogleProtobufMessageLite> defaultResponseBody_;
    ComGoogleAppsXplatHttpProtoBytestreamSerializer_ResponseFormat *responseFormat_;
    NSString *requestContentType_;
    _Bool parseNonOkResponses_;
}

+ (void)initialize;
- (void)dealloc;
- (id)parseResponseWithComGoogleAppsXplatHttpHttpStatus:(id)arg1 withComGoogleCommonCollectImmutableCollection:(id)arg2 withJavaIoInputStream:(id)arg3;
- (void)serializeRequestWithId:(id)arg1 withJavaIoOutputStream:(id)arg2;
- (id)getRequestContentType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
