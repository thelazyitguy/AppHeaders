//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class DYNProtoRpcType, JavaUtilOptional, NSString;
@protocol ComGoogleAppsXplatHttpRetryConfig, ComGoogleCommonUtilConcurrentListenableFuture, ComGoogleProtobufMessageLite;

@protocol DYNSNetworkRpcRequester <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)doRequestWithDYNProtoRpcType:(DYNProtoRpcType *)arg1 withJavaUtilOptional:(JavaUtilOptional *)arg2 withJavaUtilOptional:(JavaUtilOptional *)arg3 withNSString:(NSString *)arg4 withComGoogleProtobufMessageLite:(id <ComGoogleProtobufMessageLite>)arg5 withComGoogleProtobufMessageLite:(id <ComGoogleProtobufMessageLite>)arg6 withComGoogleAppsXplatHttpRetryConfig:(id <ComGoogleAppsXplatHttpRetryConfig>)arg7 withJavaUtilOptional:(JavaUtilOptional *)arg8;
@end
