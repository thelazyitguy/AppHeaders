//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, NSURL, NSURLRequest, NSURLResponse;

@protocol AMapRequestReformerProtocol <NSObject>
@property(retain, nonatomic) NSURLResponse *netResponse;
@property(retain, nonatomic) NSURLRequest *netRequest;
- (NSDictionary *)HTTPHeaders;
- (NSData *)postData;
- (NSString *)method;
- (NSURL *)v6Url;
- (NSURL *)url;
- (long long)timeout;
@end
