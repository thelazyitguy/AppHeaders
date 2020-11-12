//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GTMSessionFetcherService, NSURL;

@interface GMSPaintRPCService : NSObject
{
    GMSx_GTMSessionFetcherService *_fetcherService;
    struct unique_ptr<GMSx_igmm::maps_api::LinearCongruentialHasher, std::__1::default_delete<GMSx_igmm::maps_api::LinearCongruentialHasher>> _linearCongruentialHasher;
    NSURL *_baseURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sendRequestWithSigningKey:(unsigned int)arg1 fetchURLComponents:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned int)signatureWithURLComponents:(id)arg1 signingKey:(unsigned int)arg2;
- (id)fetchURLComponentsForRequest:(id)arg1 requestType:(long long)arg2;
- (void)cancelRequest:(id)arg1;
- (id)sendRequest:(id)arg1 requestType:(long long)arg2 signingKey:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithFetcherService:(id)arg1 baseURL:(id)arg2;

@end
