//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSHTTPURLResponse, NSString, NSURL, NSURLRequest;
@protocol TNLTemporaryFile;

@interface TNLResponseInfo : NSObject <NSSecureCoding>
{
    NSString *_rawRetryAfterValue;
    id _parsedRetryAfterValue;
    NSDate *_retryAfterDate;
    NSDictionary *_cachedLowercaseHeaderFields;
    NSURLRequest *_finalURLRequest;
    NSHTTPURLResponse *_URLResponse;
    NSData *_data;
    id <TNLTemporaryFile> _temporarySavedFile;
    long long _source;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) id <TNLTemporaryFile> temporarySavedFile; // @synthesize temporarySavedFile=_temporarySavedFile;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property(readonly, nonatomic) NSURLRequest *finalURLRequest; // @synthesize finalURLRequest=_finalURLRequest;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFinalURLRequest:(id)arg1 URLResponse:(id)arg2 source:(long long)arg3 data:(id)arg4 temporarySavedFile:(id)arg5;
- (id)init;
- (id)allHTTPHeaderFieldsWithLowerCaseKeys;
- (id)valueForResponseHeaderField:(id)arg1;
@property(readonly, nonatomic) NSDictionary *allHTTPHeaderFields;
@property(readonly, nonatomic) NSURL *finalURL;
@property(readonly, nonatomic) long long statusCode;
@property(readonly, nonatomic) NSDate *retryAfterDate;
- (double)retryAfterDelayFromNow;
@property(readonly, nonatomic) NSString *retryAfterRawValue;
@property(readonly, nonatomic) _Bool hasRetryAfterHeader;

@end

