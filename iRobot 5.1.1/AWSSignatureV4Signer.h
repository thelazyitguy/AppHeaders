//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AWSCore/AWSNetworkingRequestInterceptor-Protocol.h>

@class AWSEndpoint, NSString;
@protocol AWSCredentialsProvider;

@interface AWSSignatureV4Signer : NSObject <AWSNetworkingRequestInterceptor>
{
    id <AWSCredentialsProvider> _credentialsProvider;
    AWSEndpoint *_endpoint;
}

+ (id)getV2StringToSign:(id)arg1 canonicalizedQueryString:(id)arg2;
+ (id)canonicalizedQueryString:(id)arg1;
+ (id)getV4DerivedKey:(id)arg1 date:(id)arg2 region:(id)arg3 service:(id)arg4;
+ (id)getSignedHeadersString:(id)arg1;
+ (id)getCanonicalizedHeaderString:(id)arg1;
+ (id)getCanonicalizedQueryString:(id)arg1;
+ (id)getCanonicalizedRequest:(id)arg1 path:(id)arg2 query:(id)arg3 headers:(id)arg4 contentSha256:(id)arg5;
+ (id)getURIEncodedQueryStringForSigV4:(id)arg1;
+ (id)getCredentialScopeForDate:(id)arg1 regionName:(id)arg2 serviceName:(id)arg3;
+ (id)sigV4SignedURLWithRequest:(id)arg1 credentialProvider:(id)arg2 regionName:(id)arg3 serviceName:(id)arg4 date:(id)arg5 expireDuration:(int)arg6 signBody:(_Bool)arg7 signSessionToken:(_Bool)arg8;
+ (id)generateQueryStringForSignatureV4WithCredentialProvider:(id)arg1 httpMethod:(long long)arg2 expireDuration:(int)arg3 endpoint:(id)arg4 keyPath:(id)arg5 requestHeaders:(id)arg6 requestParameters:(id)arg7 signBody:(_Bool)arg8;
+ (id)signerWithCredentialsProvider:(id)arg1 endpoint:(id)arg2;
@property(retain, nonatomic) AWSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) id <AWSCredentialsProvider> credentialsProvider; // @synthesize credentialsProvider=_credentialsProvider;
- (void).cxx_destruct;
- (id)signRequestV4:(id)arg1 credentials:(id)arg2;
- (id)signS3RequestV4:(id)arg1 credentials:(id)arg2;
- (id)interceptRequest:(id)arg1;
- (id)initWithCredentialsProvider:(id)arg1 endpoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

