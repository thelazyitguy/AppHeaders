//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/NSSecureCoding-Protocol.h>
#import <TwitterNetworkLayer/TNLRequest-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface TNLResponseEncodedRequest : NSObject <TNLRequest, NSSecureCoding>
{
    NSURL *_URL;
    long long _HTTPMethodValue;
    NSDictionary *_allHTTPHeaderFields;
    _Bool _encodedSourceRequestHadBody;
    NSString *_encodedSourceRequestClassName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool encodedSourceRequestHadBody; // @synthesize encodedSourceRequestHadBody=_encodedSourceRequestHadBody;
@property(readonly, copy, nonatomic) NSString *encodedSourceRequestClassName; // @synthesize encodedSourceRequestClassName=_encodedSourceRequestClassName;
- (id)HTTPBody;
- (id)allHTTPHeaderFields;
- (long long)HTTPMethodValue;
- (id)URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

