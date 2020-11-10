//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, NSURLSession;

@interface ELMDefaultResourceLoader : NSObject
{
    NSURL *_baseURL;
    NSMutableDictionary *_resources;
    NSMutableDictionary *_pendingBlocks;
    // Error parsing type: {Mutex="mu_"{atomic<long>="__a_"{__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >="__a_value"Aq}}}, name: _resourceMutex
    NSURLSession *_session;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleResponseForURL:(id)arg1 withCacheKey:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)clearCachedResources;
- (void)resourceForURI:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cacheResource:(id)arg1 withURI:(id)arg2;
- (id)cachedResourceForURI:(id)arg1;
- (_Bool)hasResourceWithURI:(id)arg1;
- (id)init;
- (id)initWithBaseURL:(id)arg1;

@end

