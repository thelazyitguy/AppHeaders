//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/TNUHARObject.h>

@class NSArray, NSString;

@interface TNUHARRequestResponseBase : TNUHARObject
{
    long long _headersSize;
    long long _bodySize;
    NSString *_httpVersion;
    NSArray *_headers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *httpVersion; // @synthesize httpVersion=_httpVersion;
@property(nonatomic) long long bodySize; // @synthesize bodySize=_bodySize;
@property(nonatomic) long long headersSize; // @synthesize headersSize=_headersSize;
- (id)mutableJSONDictionary;

@end

