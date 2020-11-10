//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OIDServiceConfiguration;

@interface OIDAuthorizationService : NSObject
{
    OIDServiceConfiguration *_configuration;
}

+ (void)performRegistrationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)performTokenRequest:(id)arg1 originalAuthorizationResponse:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)performTokenRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)presentEndSessionRequest:(id)arg1 externalUserAgent:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)presentAuthorizationRequest:(id)arg1 externalUserAgent:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)discoverServiceConfigurationForDiscoveryURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)discoverServiceConfigurationForIssuer:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)presentAuthorizationRequest:(id)arg1 presentingViewController:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) OIDServiceConfiguration *configuration; // @synthesize configuration=_configuration;

@end
