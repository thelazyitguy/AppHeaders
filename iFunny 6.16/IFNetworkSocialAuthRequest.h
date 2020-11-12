//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFNetworkBaseRequest.h>

@class NSString;

@interface IFNetworkSocialAuthRequest : IFNetworkBaseRequest
{
    NSString *_clientId;
    NSString *_clientToken;
    NSString *_clientTokenSecret;
    NSString *_grantType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *grantType; // @synthesize grantType=_grantType;
@property(copy, nonatomic) NSString *clientTokenSecret; // @synthesize clientTokenSecret=_clientTokenSecret;
@property(copy, nonatomic) NSString *clientToken; // @synthesize clientToken=_clientToken;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)parameters;
- (id)responseValidator;
- (id)responseMapper;
- (Class)responseClass;
- (id)path;
- (long long)httpMethod;
- (id)initWithClientId:(id)arg1 token:(id)arg2 tokenSecret:(id)arg3 grantType:(id)arg4;

@end
